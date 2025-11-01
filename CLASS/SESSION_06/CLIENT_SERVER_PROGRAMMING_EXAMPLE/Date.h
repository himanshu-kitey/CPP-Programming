#ifndef DATE_H
#define DATE_H

// Header File Inclusion.
#include <stdio.h>
#include <stdlib.h>

// Type Declaration.
struct Date
{
    int day;
    int month;
    int year;
};

// Function Declerations
struct Date* getDateInstance(int _day, int _month, int _year);
int getDay(struct Date* pDate);
int getMonth(struct Date* pDate);
int getYear(struct Date* pDate);

void setDay(struct Date* pDate, int newDay);
void setMonth(struct Date* pDate, int newMonth);
void setYear(struct Date* pDate, int newYear);

void showDate(struct Date* pDate);
void releaseDate(struct Date* pDate);


#endif
