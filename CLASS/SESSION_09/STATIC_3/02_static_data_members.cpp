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