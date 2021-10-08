#include "../std_lib_facilities.h"

int main(){

	double num = 0;
	vector<double> v;
	double sum = 0;
	string unit;

	while(unit != "|"){
		cout << "To exit press '|' ";
		cin >> unit;
			if (unit == "|")
				break;
		cout << "Please give a number" << endl;
		cin >> num;
		cout << "Please give a unit" << endl;
		cin >> unit;
			while(unit != "cm" && unit != "m"&& unit != "in"&& unit != "ft")
				cout << "Illegal format" << endl;
				//cin >> unit;
			if(unit == "m")
				num = num;
			else if(unit == "cm")
				num = num / 100;
			else if (unit == "ft")
				num = num * 0.254;
			else if (unit == "in")
				num = num * 0.3048;
			v.push_back(num);
			sum += num;
	}

	double min = v[0]; 
	for (int i = 0; i < v.size(); i++){	
		if (v[i] < min) 
			min = v[i];
	}

	double max = 0;
	for(int i = 0; i < v.size(); i++){
		if (v[i] > max)
			max = v[i];
	}
/*	not sorted
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << "m, " << endl;
	}
*/

	sort(v);
	cout << "Sorted values: " << endl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << "m, " << endl;
	}
	cout << "sum of the vector: " << sum << endl;
	cout << "the largest value of the vector is: " << max << "m"<< endl;
	cout << "the smallest value of the vector is : " << min << "m"<< endl;
	cout << "you gave " << v.size() << " values" << endl;

	return 0;	
}