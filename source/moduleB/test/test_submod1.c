#include "unity.h"
#include "submod1.h"
#include "Mock_rkhassert.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_submod1_NeedToImplement(void)
{
    printf("RKH_CFG_FWK_MAX_SMA = %i\n", RKH_CFG_FWK_MAX_SMA);
    TEST_IGNORE_MESSAGE("Need to Implement submod1");
}
