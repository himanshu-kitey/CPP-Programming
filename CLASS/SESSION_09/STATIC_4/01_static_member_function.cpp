#include <iostream>

class Test
{
    private:
        int num1, num2;
        double d_num;
        static int s_num;

    public:
        Test()
        {
            num1 = 100;
            num2 = 200;
            d_num = 3.1415;
        }

    void show()
    {
        std::cout << "Num1:" << num1 << ",num2 :" << num2 << std::endl
                << "d_num:" << d_num << std::endl
                << "s_num:" << s_num << std::endl;
    }

    static void test_function(float x, float y)
    {
        std::cout << "s_num:" << s_num << std::endl
                  << "x:" << x << std::endl
                  << "y:" << y << std::endl;


        Test t;

        t.num1; // Ok
        // std::cout <<"num1" << num1 << ", num2:" << num2 << std::endl
        //           <<"d_num:" << d_num << std::endl;      // Compile time error
                                                            // non-static data cannot be accessed be accessed in static function.
    
    }
};


int Test::s_num = 100;

int main(void)
{
    Test t;

    t.show();
    // static function can be invoked using object name qualification.
    t.test_function(1.1f, 2.2f);    // Test::test_function(1.1f, 2.2f)  CORRECT
                                    // Test::test_function(&t, 1.1f, 2.2f)  INCORRECT

    // static function can be involved using class name qualification.

    Test::test_function(3.3f, 4.4f);

    return (0);
}

// Comments:
// If you wnat to define a function which is functionality related to a 
// class but does not required an object of class for its defination.
// should be defined in the class and made static.

// In our terminology : static member function do not required context
// of calling object object for their defination.

// As static member function do not required a calling object's context,
// they can be invoked using only the class name qualification.

// C++ syntax allows object name qualification as well but with a crucial
// differance vis-a-vis non-static members function.
// An address of object used for the qualification is NOT PASSED as a 
// first actual parameter to the static member function.


// Therefore, as a consequence we have a rule that static-member function
// cannot access non-static data members of class (because non-static data
// members of class are qualified by the 'this' pointer which as absent here.)