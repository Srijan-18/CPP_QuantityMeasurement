#include "../main/Feet.h"
#include <gtest/gtest.h>

TEST(FeetTests, _zero_feet_and_zero_feet__should_be_equal)
{
    Feet first_value(0), second_value(0);
    ASSERT_EQ(first_value, second_value);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}