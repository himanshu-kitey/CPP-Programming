#include <stdio.h>

void test_function(void);

int main(void)
{
    int i;
    for(i = 0; i < 5; i++)
        test_function();

    return (0);
}

void test_function(void)
{
    int local_num = 0;
    static int static_num = 0;
    int counter;

    printf("Enter test_function().\n");
    printf("test_function():initial state:local_num = %d\n, static_num = %d\n", local_num, static_num);

    for(counter = 0; counter < 3; ++counter)
    {
        local_num = local_num + 2;
        static_num = static_num + 2;
    }

    printf("test_function():final state at the time of leaving the function:local_num = %d, static_num = %d\n",
        local_num, static_num);

    printf("Leaving test_function().\n");


}

// Commnets : static qualifier applied to local data defination statement makes changes in the following:
// 1) Time of allocation.
// 2) Frequency of allocation.
// 3) Storage section
// 4) Life-time.

// Use Case:
// Two way to look at
// 1) If you want to create a local variable which retains its state across multipe calls to the function
// then you can make use of local static variable.
// 2) Local static variable provide a share space for communication acess multiple calls of the same
// same function. (Unique point of view!) (inter instance cmmunication).

