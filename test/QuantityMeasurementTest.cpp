#include "../main/model/Quantity.h"
#include <gtest/gtest.h>

//T.C 1.1
TEST(FeetTests, _zero_feet_and_zero_feet__should_be_equal)
{
    Quantity first_quantity(Unit::FEET, 0);
    Quantity second_quantity(Unit::FEET, 0);
    ASSERT_EQ(first_quantity, second_quantity);
}

//T.C 1.2
TEST(FeetTests, _null_feet_and_one_feet__should_not_be_equal)
{
    const Unit *first_value = &(Unit::FEET);
    Unit *second_value = nullptr;
    ASSERT_FALSE(first_value == second_value);
}

//T.C 1.3
TEST(FeetTests, _same_feet_ref_when_compared__should_be_equal)
{
    const Unit *first_ref = &(Unit::FEET);
    const Unit *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

//T.C 1.4
TEST(FeetTests, _given_one_feet_one_inch_when_compared_should_not_be_equal)
{
    Quantity first_quantity(Unit::FEET, 1);
    Quantity second_quantity(Unit::INCH, 1);
    ASSERT_FALSE(first_quantity == second_quantity);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}