#include <stdio.h>
#include <stdbool.h>
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
	bool div_4 =  year % 4 == 0;
	bool div_100 = year % 100 == 0;
	bool div_400 = year % 400 == 0;

	if (div_4 && (!div_100 || (div_100 && div_400)))
	{
		if (month == 2 && day > 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
			return;
		}
		if (month >= 2 && day > 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day >= 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
