#include "../main/model/Quantity.h"
#include <gtest/gtest.h>

//T.C 1.1
TEST(FeetTests, given_zero_feet_and_zero_feet__should_be_equal)
{
    Quantity first_feet(Unit::FEET, 0);
    Quantity second_feet(Unit::FEET, 0);
    ASSERT_EQ(first_feet, second_feet);
}

//T.C 1.2
TEST(FeetTests, given_null_feet_and_one_feet__should_not_be_equal)
{
    const Unit *feet_reference = &(Unit::FEET);
    Unit *null_unit_reference = nullptr;
    ASSERT_FALSE(feet_reference == null_unit_reference);
}

//T.C 1.3
TEST(FeetTests, given_same_feet_ref_when_compared__should_be_equal)
{
    const Unit *first_feet_ref = &(Unit::FEET);
    const Unit *second_feet_ref = first_feet_ref;
    ASSERT_EQ(first_feet_ref, second_feet_ref);
}

//T.C 1.4
TEST(FeetTests, given_one_feet_one_inch_when_compared_should_not_be_equal)
{
    Quantity quantity_in_feet(Unit::FEET, 1);
    Quantity quantity_in_inch(Unit::INCH, 1);
    ASSERT_FALSE(quantity_in_feet == quantity_in_inch);
}

//T.C 1.5
TEST(FeetTests, given_one_feet_and_twelve_inches_when_compared_should_return_true)
{
    Quantity quantity_in_feet(Unit::FEET, 1.0);
    Quantity quantity_in_inch(Unit::INCH, 12.0);
    ASSERT_TRUE(quantity_in_feet == quantity_in_inch);
}

//T.C 1.6
TEST(FeetTests, given_one_feet_and_ten_inches_when_compared_should_return_false)
{
    Quantity quantity_in_feet(Unit::FEET, 1.0);
    Quantity quantity_in_inch(Unit::INCH, 10.0);
    ASSERT_FALSE(quantity_in_feet == quantity_in_inch);
}

//T.C 1.7
TEST(InchTests, given_null_inch_and_one_inch_should_not_be_equal)
{
    const Unit *first_inch = &(Unit::INCH);
    Unit *null_inch = nullptr;
    ASSERT_FALSE(first_inch == null_inch);
}

//T.C 1.8
TEST(InchTests, given_same_inch_ref_when_compared_should_be_equal)
{
    const Unit *first_inch_ref = &(Unit::INCH);
    const Unit *second_inch_ref = first_inch_ref;
    ASSERT_EQ(first_inch_ref, second_inch_ref);
}

//T.C 1.9
TEST(InchTests, given_one_inch_one_feet_when_compared_should_not_be_equal)
{
    Quantity quantity_in_feet(Unit::FEET, 1.0);
    Quantity quantity_in_inch(Unit::INCH, 1.0);
    ASSERT_FALSE(quantity_in_feet == quantity_in_inch);
}

//T.C 1.10
TEST(InchTests, given_ten_inch_and_ten_inch_when_compared_should_be_equal)
{
    Quantity first_quantity_in_inch(Unit::INCH, 10.0);
    Quantity second_quantity_in_inch(Unit::INCH, 10.0);
    ASSERT_TRUE(first_quantity_in_inch == second_quantity_in_inch);
}

//T.C 1.13
TEST(YardTests, given_three_feet_and_one_yard_when_equated_should_return_true)
{
    Quantity quantity_in_yard(Unit::YARD, 1.0);
    Quantity quantity_in_feet(Unit::FEET, 3.0);
    ASSERT_TRUE(quantity_in_yard == quantity_in_feet);
}

//T.C 1.14
TEST(YardTests, given_one_feet_and_one_yard_when_equated_should_return_false)
{
    Quantity quantity_in_yard(Unit::YARD, 1.0);
    Quantity quantity_in_feet(Unit::FEET, 1.0);
    ASSERT_FALSE(quantity_in_yard == quantity_in_feet);
}

//T.C 1.15
TEST(YardTests, given_one_inch_and_one_yard_when_equated_should_return_false)
{
    Quantity quantity_in_yard(Unit::YARD, 1.0);
    Quantity quantity_in_inch(Unit::INCH, 1.0);
    ASSERT_FALSE(quantity_in_yard == quantity_in_inch);
}

//T.C 1.16
TEST(YardTests, given_one_yard_and_thirty_six_inch_when_equated_should_return_true)
{
    Quantity quantity_in_yard(Unit::YARD, 1.0);
    Quantity quantity_in_inch(Unit::INCH, 36.0);
    ASSERT_TRUE(quantity_in_yard == quantity_in_inch);
}

//T.C for UC 3
TEST(CmTests, given_two_inches_and_five_centimeters_when_equated_should_return_true)
{
    Quantity quantity_in_centimeter(Unit::CM, 5.0);
    Quantity quantity_in_inch(Unit::INCH, 2.0);
    ASSERT_TRUE(quantity_in_centimeter == quantity_in_inch);
}

//Negative T.C for UC 3
TEST(CmTests, given_four_inches_and_five_centimeters_when_equated_should_return_false)
{
    Quantity quantity_in_centimeter(Unit::CM, 5.0);
    Quantity quantity_in_inch(Unit::INCH, 4.0);
    ASSERT_FALSE(quantity_in_centimeter == quantity_in_inch);
}

//T.C for U.C 4 (2 inch + 2 inch = 4 inch)
TEST(AdditionTests, give_two_inch_and_two_inch_when_added_should_return_four_inches)
{
    Quantity first_inch_quantity(Unit::INCH, 2.0);
    Quantity second_inch_quantity(Unit::INCH, 2.0);
    ASSERT_EQ(4.0, first_inch_quantity.add_quantity(second_inch_quantity));
}

//T.C for U.C 4 (1 foot + 2 inch = 14 inch)
TEST(AdditionTests, given_one_foot_and_two_inch_when_added_should_return_fourteen_inches)
{
    Quantity quantity_in_feet(Unit::FEET, 1.0);
    Quantity quantity_in_inch(Unit::INCH, 2.0);
    ASSERT_EQ(14.0, quantity_in_feet.add_quantity(quantity_in_inch));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}