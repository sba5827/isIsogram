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

int main(void)
{
   UnityBegin("test/test_isogram.c");

   RUN_TEST(test_empty_string);
   RUN_TEST(test_single_letter);
   RUN_TEST(test_duplicate_letter);
   RUN_TEST(test_word_letter);

   UnityEnd();
   return 0;
}
