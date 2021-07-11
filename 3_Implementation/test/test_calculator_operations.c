#include<GST_Calculator.h>
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
  TEST_ASSERT_EQUAL(0, product_zero("milk"));
  TEST_ASSERT_EQUAL(0, product_zero("meat of goat"));
  TEST_ASSERT_EQUAL(0, product_zero("clay lamp"));
}

void test_five(void) 
{
  TEST_ASSERT_EQUAL(5, product_five("cloves"));
  TEST_ASSERT_EQUAL(5, product_five("marble"));
  TEST_ASSERT_EQUAL(5, product_five("natural rubber"));
}

void test_twelve(void) 
{
  TEST_ASSERT_EQUAL(12, product_twelve("butter"));
  TEST_ASSERT_EQUAL(12, product_twelve("inorganic fertilizer"));
  TEST_ASSERT_EQUAL(12, product_twelve("sports gloves"));
}

void test_eighteen(void) {
  TEST_ASSERT_EQUAL(18, product_eighteen("watches"));
  TEST_ASSERT_EQUAL(18, product_eighteen("musical instruments"));
  TEST_ASSERT_EQUAL(18, product_eighteen("mobile(below 20k)"));
}

void test_twentyeight(void)
{
  TEST_ASSERT_EQUAL(28, product_twentyeight("malt"));
  TEST_ASSERT_EQUAL(28, product_twentyeight("modelling paste"));
  TEST_ASSERT_EQUAL(28, product_twentyeight("cast glass"));
}

void test_license(void)
{
  TEST_ASSERT_EQUAL(0, license_cal("29ADMPK2640M1Z4"));
  TEST_ASSERT_EQUAL(0, license_cal("29AAACO8313M1Z3"));
  TEST_ASSERT_EQUAL(0, license_cal("29DGQPS8112G1ZT"));
}