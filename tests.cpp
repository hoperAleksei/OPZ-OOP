#include "gtest/gtest.h"
#include "lib.h"
#include <vector>

using namespace std;

TEST(readVector, readAnyVector) {
	vector<char> corVector;
	vector<char> corRes = {'1', '+', '(', '2', '-', '3', '*', '4', ')', '/', '5'};
	bool check = false;
	char *corInput = "1+(2-3*4)/5";
	corVector = readVector(corInput);
	
	for (int i = 0; i < corVector.size(); ++i)
	{
		if (corVector[i] != corRes[i])
		{
			check = true;
			break;
		}
	}
	if (check)
	{
		FAIL();
	}
	else
	{
		SUCCEED();
	}
	
	char *failInp1 = "1+     2-3*4 /5";
	ASSERT_ANY_THROW(readVector(failInp1));
	
	char *failInp2 = "1+2-3*4/5    ";
	ASSERT_ANY_THROW(readVector(failInp2));
	
	char *failInp3 = "       1+2-3*4/5";
	ASSERT_ANY_THROW(readVector(failInp2));
	
	char *failInp4 = "1+2-3asdf*4/5";
	ASSERT_ANY_THROW(readVector(failInp3));
}

TEST (getRPN, getReversePolishNotation) {
	vector<char> inp1;
	char message[] = "(1+2*3)/(4+5*6)";
	vector<char> result = {'1','2','3','*','+','4','5','6','*','+','/'};
	
	if (result != getRPN(readVector(message)))
	{
		FAIL();
	}
	else
	{
		SUCCEED();
	}
	
	vector<char> inp2;
	char message1[] = "1+(9-7)/2+(1+0-3)";
	vector<char> result1 = {'1','9','7','-','2','/','1','0','+','3','-', '+','+'};
	
	if (result1 != getRPN(readVector(message1)))
	{
		FAIL();
	}
	else
	{
		SUCCEED();
	}
	
	vector<char> inp3;
	char message2[] = "(1+5)*(2-3*4)/5-(5-7)";
	vector<char> result2 = {'1','5','+','2','3','4','*','-','*','5','/','5','7','-','-'};
	
	if (result2 != getRPN(readVector(message2)))
	{
		FAIL();
	}
	else
	{
		SUCCEED();
	}
}

TEST (calc, calculateExpression) {
	char *input1 = "(6+9-4)/(1+1*2)+1";
	ASSERT_NEAR(4.66667, calc(getRPN(readVector(input1))), 0.00003);
	
	char *input2 = "1+(9-7)/2+(1+0-3)";
	ASSERT_FLOAT_EQ(0, calc(getRPN(readVector(input2))));
	
	char *input3 = "1+(2-3*4)/5";
	ASSERT_FLOAT_EQ(-1, calc(getRPN(readVector(input3))));
	
	char *input4 = "(1+5)*(2-3*4)/5-(5-7)";
	ASSERT_FLOAT_EQ(-10, calc(getRPN(readVector(input4))));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}