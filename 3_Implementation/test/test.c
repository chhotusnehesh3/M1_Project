#include "unity.h"
#include "fun.h"

void setUp()
{

}
void tearDown()
{
  
}
void test_changepriceticket(void)
{
    int pr1=600;
    TEST_ASSERT_EQUAL(600,changepriceticket(price1));
    
}

int main(void)
{
  UNITY_BEGIN();
  
  RUN_TEST(test_changepriceticket);
  return UNITY_END();
}