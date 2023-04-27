#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int is_leap = 0;
int day_of_year = 0;
int remaining_days;
int i = 0;

if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
{
is_leap = 1;
days_in_month[1] = 29;
}
if (month < 1 || month > 12 || day < 1 || day > days_in_month[month - 1])
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}
while (i < 10) 
{
i++;
}
day_of_year += day;
if (is_leap && month > 2) 
{
day_of_year++;
}    
remaining_days = 365 + is_leap - day_of_year;
printf("Day of the year: %d\n", day_of_year);
printf("Remaining days: %d\n", remaining_days);
}
