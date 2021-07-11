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
  char test_case_one[]="milk";
  char test_case_two[]="meat of goat";
  char test_case_three[]="clay lamp";
  TEST_ASSERT_EQUAL(0, product_zero(test_case_one));
  TEST_ASSERT_EQUAL(0, product_zero(test_case_two));
  TEST_ASSERT_EQUAL(0, product_zero(test_case_three));
}

void test_five(void) 
{
  char test_case_one[]="cloves";
  char test_case_two[]="marble";
  char test_case_three[]="natural rubber";
  TEST_ASSERT_EQUAL(5, product_five(test_case_one));
  TEST_ASSERT_EQUAL(5, product_five(test_case_two));
  TEST_ASSERT_EQUAL(5, product_five(test_case_three));
}

void test_twelve(void) 
{
  char test_case_one[]="butter";
  char test_case_two[]="inorganic fertilizer";
  char test_case_three[]="sports gloves";
  TEST_ASSERT_EQUAL(12, product_twelve(test_case_one));
  TEST_ASSERT_EQUAL(12, product_twelve(test_case_two));
  TEST_ASSERT_EQUAL(12, product_twelve(test_case_three));
}

void test_eighteen(void) {
  char test_case_one[]="watches";
  char test_case_two[]="musical instruments";
  char test_case_three[]="mobile(below 20k)";
  TEST_ASSERT_EQUAL(18, product_eighteen(test_case_one));
  TEST_ASSERT_EQUAL(18, product_eighteen(test_case_two));
  TEST_ASSERT_EQUAL(18, product_eighteen(test_case_three));
}

void test_twentyeight(void)
{
  char test_case_one[]="malt";
  char test_case_two[]="modelling paste";
  char test_case_three[]="cast glass";
  TEST_ASSERT_EQUAL(28, product_twentyeight(test_case_one));
  TEST_ASSERT_EQUAL(28, product_twentyeight(test_case_two));
  TEST_ASSERT_EQUAL(28, product_twentyeight(test_case_three));
}

void test_license(void)
{
  char test_case_one[]="29ADMPK2640M1Z4";
  char test_case_two[]="29AAACO8313M1Z3";
  char test_case_three[]="29DGQPS8112G1ZT";
  TEST_ASSERT_EQUAL(0, license_cal(test_case_one));
  TEST_ASSERT_EQUAL(0, license_cal(test_case_two));
  TEST_ASSERT_EQUAL(0, license_cal(test_case_three));
}