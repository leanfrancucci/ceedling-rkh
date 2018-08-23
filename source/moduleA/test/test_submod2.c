#include "unity.h"
#include "submod2.h"
#include "Mock_submod1.h"
#include "Mock_submod3.h"

void setUp(void)
{
    Mock_submod1_Init();
    Mock_submod3_Init();
}

void tearDown(void)
{
    Mock_submod1_Verify();
    Mock_submod1_Destroy();
    Mock_submod3_Verify();
    Mock_submod3_Destroy();
}

void test_submod2_NeedToImplement(void)
{
    int res;

    submod3_baz_Expect(1);
    submod1_bar_ExpectAndReturn(0);
    res = submod2_foo();

    TEST_ASSERT_EQUAL(0, res);
}
