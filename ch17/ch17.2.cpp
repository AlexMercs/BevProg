#include "../std_lib_facilities.h"


void print_array(ostream& os, int* a,int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << " ";
	os << endl;
}

void print_vector(vector<int>& v)
{
	for (int i = 0; i < 10; ++i)
		cout << v[i] << " ";
	cout << endl;	
}

int main()
{
try
{
	//1,2
	int a = 7;
	int* p1 = &a;
	cout << "p1: " << p1 << " a: " << a << endl;
	//3,4
	int* array = new int[7]{1,2,4,8,16,32,64};
	int* p2 = array;

	cout << "p2: " << p2 << endl;

	print_array(cout, array, 7);
	//5,6,7,8
	int* p3 = p2;
	p1 = p2;
	p3 = p2;

	cout << "p1: " << p1 << "points to:" << endl;
	print_array(cout, array, 7);
	cout << "p2: " << p2 << "points to:" << endl;
	print_array(cout, array, 7);
	//9
	delete[] array;

	//10,11,12
	int* array2 = new int[10]{1,2,4,8,16,32,64,128,256,512};
	p1 = array2;
	print_array(cout, array2, 10);

	int* array3 = new int[10];
	p2 = array3;
	print_array(cout, array3, 10);

	for (int i = 0; i < 10; ++i)
		array3[i] = array2[i];

	cout << "copied array: " << endl;

	print_array(cout, array3, 10);

	delete[] array2;
	delete[] array3;

	//13
	cout << "vectors" << endl;

	vector <int> vector1 {1,2,4,8,16,32,64,128,256,512};
	print_vector(vector1);

	vector<int> vector2(10);
	print_vector(vector2);

	for (int i = 0; i < 10; ++i)
	{
		vector2[i] = vector1[i];
	}

	cout << "copied vector: " << endl;
	print_vector(vector2);




	return 0;
}
catch(exception& e)
{	
	cerr << e.what() << endl;
}
catch(...)
{
	cerr << "van baj" << endl;
}

}