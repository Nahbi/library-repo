#ifndef MISC_H
#define MISC_H
#include "windows.h"
#include "MyDate.h"
using std::cout;
using std::endl;
COORD coord = {0 , 0}; // this is global variable

class misc
{
	//center of axis is set to the top left corner of the screen
public :
	static void gotoxy(int x,int y)
	{
		coord.X = x;
		coord.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	}

	static bool SetDate(MyDate dat, time_t* value)
	{
		tm* time = localtime(value);
		if(dat.month == 4 || dat.month == 6 || dat.month ==  9 || dat.month == 11)
		{
			if(dat.day > 30)
			{
				cout << "Error in date - day" << endl;
				return false;
			}
		}

		if((dat.year % 4 != 0) && (dat.month == 2) && (dat.day > 28))	//NOT a leap year
		{
			cout << "Error in date - day" << endl;
			return false;
		}
		else
		{
			if(dat.day > 29) cout << "29 Days in Feb";
		}

		if(dat.year < 1)
			{
				cout << "Invalid year entered - " << dat.year << endl;
				return false;
			}
			else
			{
				if(dat.month < 1|| dat.month > 12){
						cout << "Invalid month entered " << dat.month << "1 - 12 " << endl;
						return false;
					}
				else
				{
					if(dat.day < 1 || dat.day > 31){
						cout << "Invalid day entered " << dat.day << "1 - 31" << endl;
						return false;
					}
					else
					{
						//calculate difference of years
						dat.year = dat.year - 1900;
						//set month
						dat.month = dat.month - 1;

						time->tm_mon = dat.month;
						time->tm_mday = dat.day;
						time->tm_year = dat.year;
						time->tm_hour = dat.hour;
						time->tm_min = dat.min;
					}
				}
			}
		*(value) = mktime(time);
		return true;
	}
};

#endif
