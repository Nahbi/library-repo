#ifndef MYDATE_H
#define MYDATE_H
class MyDate
{
	public:
		unsigned year;
		unsigned month;
		unsigned day;

		unsigned sec;		//0-59
		unsigned min;		//0-59
		unsigned hour;		//0-24

		MyDate()
		{
			year = 0;
			month = 0;
			day = 0;

			sec = 0;
			min = 0;
			hour = 0;
		}

		MyDate(unsigned y, unsigned m, unsigned d, unsigned h, unsigned mi)
		{
			year = y;
			month = m;
			day = d;
			sec = 0;
			if(mi != 0 && h != 0)
			{
				min = mi;
				hour = h;
			}
			else
			{
				min = 0;
				hour = 0;
			}
		}
};
#endif
