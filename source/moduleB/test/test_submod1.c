#include "unity.h"
#include "submod1.h"
#include "Mock_rkhassert.h"

void setUp(void)
{
    Mock_rkhassert_Init();
}

void tearDown(void)
{
    Mock_rkhassert_Verify();
    Mock_rkhassert_Destroy();
}

void test_submod1_NeedToImplement(void)
{
    printf("SMA_CFG %i", RKH_CFG_FWK_MAX_SMA);
    TEST_IGNORE_MESSAGE("Need to Implement submod1");
}
