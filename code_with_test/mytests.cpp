#include <gtest/gtest.h>
#include "myfunction.h"

TEST(myfunction, add)
{
    GTEST_ASSERT_EQ(add(10, 22), 12);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}