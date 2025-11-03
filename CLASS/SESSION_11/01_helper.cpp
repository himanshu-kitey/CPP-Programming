#include <iostream>

class Date
{
    private:
        int day;
        int month;
        int year;


    public:
        Date(int _d, int _m, int _y)
        {
            day = _d;
            month = _m;
            year = _y;
        }

        Date()
        {
            day = 1;
            month = 1;
            year = 1999;
        }
};

Date myDate(26, 10, 2025);      // Global initilized data defination statement.
                                // Memory allocation : static, BSS 

Date myDate2;                   // Global initilized DDS.
                                // Memory allocation : static BSS.
const Date myDate3(17, 10, 2026);

void test(void)
{
    Date myDate4;           // Stack
    static Date myDate5;    // BSS
    static Date myDate6(26, 10, 2026);  //BSS
    static const Date myDate7(27, 6, 2026);     // RODATA 

    Date* pDate = new Date(1, 1, 2028);     // HEAP

}


///////////////////////////////////////////////
// Initilization.
// int num = 10;


// .section .data
// int:
// .int     10

//////////////////////////////////////////////
// int num;

// void test(void)
//{
//  num = 10;           // ASSIGNMENT
//}

//////////////////////////////////////////
//.section .bss
// .comm num, 4, 4


//.section .text
//gobal test
//test:
//  mov1 $10, num

///////////////////////////////

class T
{
    // non-test DDS
    // static DDS
    // non-static functoin
    // static function
    // enum
    // typedef
    // inner classes
};

class X
{
    private:
        int num;
        static int x;
        void f()
        {


        }

    public:
        int num2;
        static int y;
        static int func(int p, int q)
        {

        }

    public:
        int num3;
        static int z;
};


X ojbX;

struct X
{
    int num;
    int num1;
    int num2;
};


