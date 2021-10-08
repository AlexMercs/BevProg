#include "../std_lib_facilities.h"

int main(){

	double num1, num2;
	char exitChar; 

	cout << "Type 2 numbers" << endl;
	cout << "To exit press '|'" << endl;
	cout << "To continue press any other character" << endl;
	
	while(cin){ 
		cin >> num1 >> num2 >> exitChar;
		if(exitChar == '|') break;
			else{

			if(num1<num2){
				cout <<"the smaller value is "<< num1 << endl;
				cout <<"the larger value is  "<< num2 << endl;
			}	
			else if(num2<num1){
				cout <<"the smaller value is "<< num2 << endl;
				cout <<"the larger value is  "<< num1 << endl;
			}

			if(num1 == num2)
				cout << "the values are equal"<< endl;		

			if(num1-num2<=0.01)
				cout << "the values area almost equal" << endl;
		}
	}
	return 0;
}