#include <iostream>
#include <string.h>

int main(void)
{
    // Variable Decleration.
    int i_num;
    float f_num;
    std::string str;

    // Code
    std::cout << "Enter an integer Value:";
    std::cin >> i_num;
    std::cout << "Entered Number is:" << i_num << "\n";

    std::cout << "Enter a Fractional Value:";
    std::cin >> f_num;
    std::cout << "Entered Fractional Value :" << f_num << "\n";

    std::cout << "Enter String:";
    std::cin >> str;
    std::cout << "Entered String is:" << str << "\n";

    return 0;
}