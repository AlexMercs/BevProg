#include "../std_lib_facilities.h"

class Date
{
	private:
		int y,m,d;
	public:
		Date(int y, int m, int d);
		void add_day(int n);
		int year() {return y;}
		int month() {return m;};
		int day() {return d;};
};

Date::Date(int year, int month, int day)
{
	if (year > 0)
		y = year;
	else
		error("invalid year");
	if (month > 0 && month <= 12 )
		m = month;
	else
		error("invalid month");
	if (day > 0 && day <=31)
		d = day;
	else
		error("invalid day");
}

void Date::add_day(int n)
{
	d += n;
	if (d > 31)
	{
		m ++;
		d -= 31;
	}
	if (m > 12)
	{
		y ++;
		m -=12;  
	}
}

ostream& operator << (ostream& os, Date& d)
{
	return os << '(' << d.year() << ',' << d.month() << ',' <<  d.day() << ')';
}


int main()
{
	try
	{

		Date today {1978, 6, 25};
		Date tomorrow = today; 
		tomorrow.add_day(1);

		cout << "Today: " << today << endl << "Tomorrow:" << tomorrow << endl;

		Date birthday {2002,1,1};
		cout << "birthday: " << birthday << endl;
		//birthday.m = 14;
		cout << "birthday.month(): " << birthday.month() << endl; 

		return 0;
	}
	catch(exception& e)
	{
		cerr << e.what() << endl; 
	}
}
