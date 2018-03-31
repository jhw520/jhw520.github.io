/*****************************************************
njit 2016-2017,     Ltd. 
File name：
Author jhw    Version:0.1    Date: 
Description：
Funcion List: 
*****************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int Year, Year2, Month2, Month, Day, Day2, num, num1, year, month, day;
	int flag = 0, Num = 1;
	int mon[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d", &Year, &Month, &Day);
	scanf("%d", &num1);
	//  scanf("%d %d %d\n", &year, &month, &day);

	Year2 = Year;
	Month2 = Month;
	Day2 = Day;

	if((Month%4) == 0 && (Month%400) != 0)
	{
		flag = 1;
	}
	num = abs(num1);
	while(Num <= num)
	{
		if((Year2%4) == 0 && (Year2%400) != 0)
		{
			mon[1] = 29; 
		}

		Num++;    
		if(num1 >= 0)
		{
			Day2++;
			if(Day2 > mon[Month2-1])
			{
				Day2 = 1;
 				Month2++;

			}
			if(Month2 > 12)
			{
				Month2 = 1; 
 				Year2++ ;
			}
		}
		else
		{
			Day2--;
			if(Day2 == 0)
			{
				Month2--;
				if(!Month2)
				{
				Day2 = mon[11];
				}
				else{
				Day2 = mon[Month2-1];
				}
			}
			if(Month2 == 0)
			{
				Month2 = 12; 
			    Year2--;
			}
		}
	}
	if(num1 >= 0)
	{
		printf("%d %d %d\n",Year2, Month2, Day2);
	}
	else{
		printf("%d %d %d\n",Year2, Month2, Day2);
	}
	return 0; 
}
