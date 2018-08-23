#include "submod2.h"
#include "submod1.h"
#include "submod3.h"

int 
submod2_foo(void)
{
    submod3_baz(1);
    return submod1_bar();
}
