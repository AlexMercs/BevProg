#include "../std_lib_facilities.h"

struct Date
{
	int y;
	int m;
	int d;
};

void init_day(Date& dd, int y, int m, int d)
{
	if (y > 0)
		dd.y = y;
	else
		error("invalid year");
	if (m > 0 && m <= 12 )
		dd.m = m;
	else
		error("invalid month");
	if (d > 0 && d <=31)
		dd.d = d;
	else
		error("invalid day");
}

void add_day(Date& dd, int n)
{
	dd.d += n;
	if (dd.d > 31)
	{
		dd.m ++;
		dd.d -= 31; //napok csökkentése, hogy ne egy egész hónappal növeljem a dátumot
	}
	if (dd.m > 12)
	{
		dd.y ++;
		dd.m -=12;  
	}
}

ostream& operator << (ostream& os, const Date& d){
	return os << '(' << d.y << ',' << d.m << "," <<  d.d << ")";
}


void f()
{
	Date today;
	init_day(today, 1978, 6, 25);
	Date tomorrow = today; 
	add_day(tomorrow, 1);

	cout << "Today: " << today << endl << "Tomorrow: " << tomorrow << endl;

}
int main(){
	
	try
	{
		f();
		return 0;
	}
	catch(exception& e)
	{
		cerr << e.what() << endl;
		return 1;
	}
}
