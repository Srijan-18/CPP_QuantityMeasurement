#include "../main/Feet.h"
#include <gtest/gtest.h>

TEST(FeetTests, _zero_feet_and_zero_feet__should_be_equal)
{
    Feet first_value(0), second_value(0);
    ASSERT_EQ(first_value, second_value);
}

TEST(FeetTests, _null_feet_and_one_feet__should_not_be_equal)
{
    Feet *first_value = new Feet(1);
    Feet *second_value = nullptr;
    ASSERT_FALSE(first_value == second_value);
}

TEST(FeetTests, _same_feet_ref_when_compared__should_be_equal)
{
    Feet *first_ref = new Feet(1);
    Feet *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}