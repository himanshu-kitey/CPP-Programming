#include <stdio.h>

extern int global_num;
extern void test_function(void);

// extern static int s_num;             // Compile time error
                                        // extern and static cannot be applied together.
// extern static void test_function_2(void);    // Compile time error
                                                // extern and static qualifier cannot be applied together.

int main(void)
{
    printf("Entered main() function implementation in file:%s\n", __FILE__);
    printf("main():initial state of global_num = %d\n", global_num);
    // Changing state of global_num to 1000
    global_num = 1000;

    // This function prints global_num and s_num;
    // Expectation : global_num will reflect its change state 1000
    // test_Function() calls test_function_2() inside it.
    // Therefore, expect printfs() from test_function_2() as well
    test_function();

    return (0);
}

// Interface: In c, global data function are not only visible in all function in a source file
// in which they are defined, but also in all functions in all files in that project.
// global scope == project wide global scope.
// Of curse we need extern keyword for declearing their types in other source file.

// Between global scope (== Project wide global scope) and local scope (== stipulated to a function), there
// is another level of visibility, global to source file or 'translotion unit' wherein a data or function
// varibale is visible to all functions in the source file wherein they are defined but not in other source file
// or translation units in that project.

