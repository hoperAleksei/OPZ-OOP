#include "gtest/gtest.h"
#include "lib.h"

TEST(o1, o1) {
	char inp[100] = "1";
	char exp[100] = "1";
	char *result = "1";
	
	ASSERT_STREQ(exp, result);
	delete [] result;
}


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
