#include "../std_lib_facilities.h"

struct Date 
{
	int y,m,d;
	Date (int y, int m, int d);
	void add_day(int n);
};

Date::Date( int year, int month, int day)
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

ostream& operator << (ostream& os, const Date& d){
	return os << '(' << d.y << ',' << d.m << "," <<  d.d << ")";
}


int main(){
	try
	{
		Date today{1978, 6, 25};
		Date tomorrow = today;
		tomorrow.add_day(1);

		cout << "Today: " << today << endl <<"Tomorrow: " << tomorrow << endl;

		Date last {2000,12,31};
		Date next {2014,2,14};
		Date christmas = Date{1976, 12,24};
		last.add_day(1);
		//add_day(2);
		cout << "last.add_day(1)" << last << endl;

		return 0;
	}
	catch(exception& e)
	{
		cerr << e.what() << endl;
		return 1;
	}
}