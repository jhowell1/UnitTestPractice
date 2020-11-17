/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

// IS PALINDROME
TEST(PracticeTest, is_simple_palindrome1)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome2)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome1)
{
    Practice obj;
    bool actual = obj.isPalindrome("NoT A pAliNDrOmE");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_palindrome2)
{
    Practice obj;
    bool actual = obj.isPalindrome("YoY");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_complex_palindrome1)
{
    Practice obj;
    bool actual = obj.isPalindrome("!@na;H8709xsdGXBHW(UGA&&#");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_complex_palindrome2)
{
    Practice obj;
    bool actual = obj.isPalindrome("!!123abaXXXXoXXXXaba321!!");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_empty_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_with_chars_before_A1)
{
    Practice obj;
    bool actual = obj.isPalindrome("1n1");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_with_chars_before_A2)
{
    Practice obj;
    bool actual = obj.isPalindrome("1n2");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_palindrome_with_chars_after_Z1)
{
    Practice obj;
    bool actual = obj.isPalindrome("\\A\\");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_with_chars_after_Z2)
{
    Practice obj;
    bool actual = obj.isPalindrome("A[");
    ASSERT_FALSE(actual);
}

//SORT DESCENDING
TEST(PracticeTest, is_ascending)
{
    int first = 1;
    int second = 2;
    int third = 3;
    Practice obj;
    bool actual = obj.sortDescending(first, second, third);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_descending)
{
    int first = 3;
    int second = 2;
    int third = 1;
    Practice obj; 
    bool actual = obj.sortDescending(first, second, third);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_with_first_two_ascending)
{
    int first = 2;
    int second = 3;
    int third = 1;
    Practice obj; 
    bool actual = obj.sortDescending(first, second, third);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_with_second_two_ascending)
{
    int first = 2;
    int second = 1;
    int third = 3;
    Practice obj; 
    bool actual = obj.sortDescending(first, second, third);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_with_all_equal)
{
    int first = 1;
    int second = 1;
    int third = 1;
    Practice obj;
    bool actual = obj.sortDescending(first, second, third);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_with_first_two_equal)
{
    int first = 1;
    int second = 1;
    int third = 2;
    Practice obj;
    bool actual = obj.sortDescending(first, second, third);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_with_second_two_equal)
{
    int first = 1;
    int second = 2;
    int third = 2;
    Practice obj;
    bool actual = obj.sortDescending(first, second, third);
    ASSERT_TRUE(actual);
}

