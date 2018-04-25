#include "vendor/unity.h"
#include "../src/isogram.h"
#include <stdlib.h>

void test_empty_string(void)
{
   TEST_ASSERT_TRUE(is_isogram(""));
}

void test_single_letter(void){
    TEST_ASSERT_TRUE(is_isogram("a"));
}

void test_duplicate_letter(void){
    TEST_ASSERT_FALSE(is_isogram("aa"));
}

void test_word_letter(void){
    TEST_ASSERT_TRUE(is_isogram("isogram"));
}

void test_cases_letter(void){
    TEST_ASSERT_FALSE(is_isogram("aA"));
}

void test_numbers_letter(void){
    TEST_ASSERT_TRUE(is_isogram("777"));
}

void test_numbers_and_chars_letter(void){
    TEST_ASSERT_TRUE(is_isogram("5ab5"));
    TEST_ASSERT_FALSE(is_isogram("5aa5"));
}

void test_blanks_letter(void){
    TEST_ASSERT_TRUE(is_isogram("a b c"));
    TEST_ASSERT_FALSE(is_isogram("aa bb cc"));
}

void test_specialChars_letter(void){
    TEST_ASSERT_TRUE(is_isogram("!!!abc "));
    TEST_ASSERT_FALSE(is_isogram("!!!aabbcc "));
}

int main(void)
{
   UnityBegin("test/test_isogram.c");

   RUN_TEST(test_empty_string);
   RUN_TEST(test_single_letter);
   RUN_TEST(test_duplicate_letter);
   RUN_TEST(test_word_letter);
   RUN_TEST(test_cases_letter);
   RUN_TEST(test_numbers_letter);
   RUN_TEST(test_numbers_and_chars_letter);
   RUN_TEST(test_blanks_letter);
   RUN_TEST(test_specialChars_letter);

   UnityEnd();
   return 0;
}
