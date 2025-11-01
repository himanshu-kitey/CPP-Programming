#include "Date.h"

// Entry Point Functions.
int main(void)
{
    struct Date* examDate = NULL;

    examDate = getDateInstance(30, 9, 2025);

    int examDay = getDay(examDate);
    int examMonth = getMonth(examDate);
    int examYear = getYear(examDate);

    printf("Testing Getters: exam date: %d/%d/%d\n", examDay, examMonth, examYear);
    puts("Testing showDate():");
    showDate(examDate);

    setDay(examDate, 31);
    setMonth(examDate, 10);
    setYear(examDate, 2026);

    puts("Testing Setters:");
    showDate(examDate);

    releaseDate(examDate);
    examDate = NULL;

    return (0);

}

