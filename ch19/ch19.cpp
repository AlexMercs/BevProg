#include "../std_lib_facilities.h"
#include <iostream>
#include <vector>

template<typename t> 
struct s {
private: 
	t val;

public:
	s(t x) {val = x;};
	t get () const;
	t& get();

	void kiir(){
		cout << val << endl;
	}
	void operator=(const t& stemp){
		val = stemp;
	}
};

void kivector(ostream& os, vector<int> v){
	cout << "Vektor elemei: ";
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i]<< ", ";
	}
	cout << endl;
}

template<typename t>
t s<t>::get()const {return val;};

template<typename t>
t& s<t>::get(){return val;};

template<typename t >
ostream& operator<<(ostream& os, s<t>& stemp){return os<<stemp.get();}; 

template<typename t >
istream& operator>>(istream& is, s<t>& stemp){return is>>stemp.get();}; 

int main()
{
	
	s<int>sint(66);
		sint.kiir();
	s<char>schar('c');
		schar.kiir();
	s<double>sdouble(6.6);
		sdouble.kiir();
	s<vector<int>>svector({1,2,4,8,16});
	kivector(cout, svector.get());
	cout << endl;

	cout << sint.get() << endl;
	cout << schar.get() << endl;
	cout << sdouble.get() << endl;
	kivector(cout, svector.get());
	cout << endl;

	cout << "Adj inputot!" << endl;
	cin >> sint;
	cin >> schar;
	cin >> sdouble;
	cout << "---------------------" << endl;
	cout << sint << endl;
	cout << schar << endl;
	cout << sdouble << endl;	

	return 0;
}