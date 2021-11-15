#include "../../std_lib_facilities.h"

void swap_v(int a,int b){ //érték szerinti
	int temp;
	temp = a, a = b;
	b = temp;
}

void swap_r(int& a,int& b){ //referencia szerinti
	int temp;
	temp = a, a = b;
	b = temp;	
}
/*
			void swap_cr(const int&,const int&){     konstans érték egyszer adható meg, 
												     nem lehet módosítani, felcserélni, felülírni

				int temp;
				temp = a, a = b;
				b = temp;	
			}
*/

int main(){
	int x = 7;
	int y =9;
	swap_r(x,y);//---> más néven ugyanaz az objektum
	//swap_v(x,y) ---> az eredeti értékek nem cserélődnek fel mert csak a "másolatukkal" dolgozunk   
	
	//swap_r(7,9); cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
	swap_v(7,9);

	const int cx = 7;
	const int cy = 9;
	
	//swap_r(cx,cy);
	swap_v(cx,cy);  // az érték szerinti átadás kezeli a konstansokat mert a másolattal dolgozunk, 
					// az eredeti értéket nem akarjuk módosíttani

	//swap_r(7.7,9.9); cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
	swap_v(7.7,9.9); // felcserélődnek de intként lesznek kezelve 


	double dx = 7.7;
	double dy = 9.9;
	//swap_r(dx,dy);   cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
	swap_v(dx,dy);	//nem cserélődnek fel érték szerinti átadáskor 
	//swap_r(7.7,9.9); cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
	swap_v(7.7,9.9); // 

	cout << "x:  " << x << endl;
	cout << "y:  " << y << endl;
	cout << "cx: " << cx << endl;
	cout << "cy: " << cy << endl;
	cout << "dx: " << dx << endl;
	cout << "dy: " << dy << endl;

	return 0; 
}