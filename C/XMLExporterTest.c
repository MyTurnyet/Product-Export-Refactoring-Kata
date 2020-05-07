#include <setjmp.h> /* used by cmocka */
#include <stdarg.h> /* used by cmocka */
#include <stddef.h> /* used by cmocka */

#include "LinkedList.h"
#include "SampleModelObjects.h"
#include "XMLExporter.h"
#include "mu_approvals\Approvals.h"
#include <cmocka.h>
#include <string.h>

static void test_something(void** state)
{
    (void)state; /* unused */

    /* TODO: implement this test */
}

int main(void)
{
    const struct CMUnitTest test_suite[] = {
        cmocka_unit_test(test_something), /* */
    };

    return cmocka_run_group_tests(test_suite, NULL, NULL);
}
