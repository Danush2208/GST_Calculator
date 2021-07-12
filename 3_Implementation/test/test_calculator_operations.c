#include "fun.h"
#include "unity.h"

void test_zero(void);
void test_five(void);
/*void test_twelve(void);
void test_eighteen(void);
void test_twentyeight(void);
void test_license(void);*/

void setUp(){}
void tearDown(){}

int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_zero);
  RUN_TEST(test_five);
  /*RUN_TEST(test_twelve);
  RUN_TEST(test_eighteen);
  RUN_TEST(test_twentyeight);
  RUN_TEST(test_license);*/

  return UNITY_END();
}

void test_zero(void) 
{
  char test_case_1[5]="milk";
  TEST_ASSERT_EQUAL(0, product_zero(test_case_1));
}

void test_five(void) 
{
  char test_case_2[7]="cloves";
  TEST_ASSERT_EQUAL(5, product_five(test_case_2));
}
/*
void test_twelve(void) 
{
  char test_case_3[7]="butter";
  TEST_ASSERT_EQUAL(12, product_twelve(test_case_3));
}

void test_eighteen(void) {
  char test_case_4[8]="watches";
  TEST_ASSERT_EQUAL(18, product_eighteen(test_case_4));
}

void test_twentyeight(void)
{
  char test_case_5[5]="malt";
  TEST_ASSERT_EQUAL(28, product_twentyeight(test_case_5));
}

void test_license(void)
{
  char test_case_6[16]="29ADMPK2640M1Z4";
  TEST_ASSERT_EQUAL(0, license_cal(test_case_6));
}*/