/**
 * @file test_calculator_operations.c
 * @author S DANUSH VENKATESH(danushvenkat25@gmail.com)
 * @brief test file for unit testing
 * @version 0.1
 * @date 2021-07-12
 * @copyright Copyright (c) 2021
 */
#include "fun.h"
#include "unity.h"

void test_zero(void);
void test_five(void);
void test_twelve(void);
void test_eighteen(void);
void test_twentyeight(void);
void test_license(void);

void setUp(){}
void tearDown(){}

int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_zero);
  RUN_TEST(test_five);
  RUN_TEST(test_twelve);
  RUN_TEST(test_eighteen);
  RUN_TEST(test_twentyeight);
  RUN_TEST(test_license);

  return UNITY_END();
}

void test_zero(void) 
{
  TEST_ASSERT_EQUAL(0, product_zero((char*)"milk"));
}

void test_five(void) 
{
  TEST_ASSERT_EQUAL(0, product_zero((char*)"milk"));
}

void test_twelve(void) 
{
  TEST_ASSERT_EQUAL(12, product_twelve((char*)"butter"));
}

void test_eighteen(void) {
  TEST_ASSERT_EQUAL(18, product_eighteen((char*)"watches"));
}

void test_twentyeight(void)
{
  TEST_ASSERT_EQUAL(28, product_twentyeight((char*)"malt"));
}

void test_license(void)
{
  TEST_ASSERT_EQUAL(0, license_cal((char*)"29ADMPK2640M1Z4"));
}