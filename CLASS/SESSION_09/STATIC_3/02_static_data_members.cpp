#include <iostream>

class Test
{
    private:
        int num, num2;
        double d_num;
        static int s_num;
        // Static T v_name;

    public:
        Test()
        {
            num = 100;
            d_num = 3.1415;
        }

        void show()
        {
            std::cout << "Num: " << num << std::endl << "d_num" << d_num << std::endl << "s_num" << s_num << std::endl;
        }
};

int Test::s_num = 10;       // This is where memory gets allocated.
                            // This syntax is mandatory in C++ 98.
                            // From C++ onwards, this is not necessary.

// T Test::v_name [=optional Initializer].

int main(void)
{
    Test t;
    t.show();

    std::cout << "sizeof(Test):" << sizeof(Test) << std::endl;

    return 0;
}


// Comments:
// Analysis static qualifier to data defination statement inside class has
// the following effects:
// 1) Time of allocation : static
// 2) Selection of allowcation: Data / BSS
// 3) Frequecny of allocation: once
// 4) Visibility: static and non-static members functions of class
// [We are not considering derived classes, friend function and friend classes as of now]
// 5) Lifetime: Lifetime of program.

// For Non-static data members:
// 1) time of allocation = Time of allocation of object.
// 2) Section of allocation == section of allocation of object.
// 3) Frequency of allocation == Per object.
// 4) Visibility == non-static member function of class.
//          [static member function cannnot access non-static data members]
// We are not considering derived classes, friend function and friedn class as of now].
// Life time == Lifetime of Object.
