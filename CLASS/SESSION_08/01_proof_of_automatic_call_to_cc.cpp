#include <iostream>

class Date
{
    private:
        int day;
        int month;
        int year;

    public:
        Date()
        {
            std::cout << "Entered Date::Date():" << std::endl;
            std::cout << "Entered Date::Date():" << std::endl;
        }
};


int main()
{
    Date myDate1;
    Date myDate2;
    Date myDate3;
    Date myDate4;

    return 0;
}