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
  char* test_case="milk";
  TEST_ASSERT_EQUAL(0, product_zero(test_case));
}

void test_five(void) 
{
  char* test_case="milk";
  TEST_ASSERT_EQUAL(0, product_zero(test_case));
}

void test_twelve(void) 
{
  char* test_case="butter";
  TEST_ASSERT_EQUAL(12, product_twelve(test_case));
}

void test_eighteen(void) {
  char* test_case="watches";
  TEST_ASSERT_EQUAL(18, product_eighteen(test_case));
}

void test_twentyeight(void)
{
  char* test_case="malt";
  TEST_ASSERT_EQUAL(28, product_twentyeight(test_case));
}

void test_license(void)
{
  char* test_case="29ADMPK2640M1Z4";
  TEST_ASSERT_EQUAL(0, license_cal(test_case));
}