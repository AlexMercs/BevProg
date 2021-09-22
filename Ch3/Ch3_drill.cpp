
#include "../std_lib_facilities.h"

int main(){
//cimzett neve
	cout << "Enter the name of the person you want to write to." << endl;
	string first_name;
	cin >> first_name;

//kozos barat neve 
	cout << "Enter the name of your friend." << endl;
	string friend_name;
	cin >> friend_name;
	
//kozos barat neme
	cout << "Enter 'm' for male and 'f' for female for your friend's sex" << endl;
	char friend_sex = 0;
	cin >> friend_sex;
	
//cimzett kora 
	cout << "Enter your friend's age: ";
	int friend_age = 0;
	cin >> friend_age;

//level
	cout << "\tDear " << first_name << "!" 		    << endl;
	cout << "How is life? I haven't seen you in a long time." << endl;
	cout << "I hope everything is fine with you!" 	    << endl;
	cout << "Have you seen " << friend_name << " lately? "    << endl;

//kozos barat nemenek megfelelo sorok
	if(friend_sex == 'm')
		cout << "If you see "<< friend_name << " ask him to call me." << endl;
	else if(friend_sex == 'f')
		cout << "If you see " << friend_name << " ask her to call me." << endl; 
	else cout << "There are only 2 geners";    	
//szuletesnap 
	cout << "I hear you just had a birthday and your age is " << friend_age << " years old" << 		endl;
	
	if(friend_age <= 0 || friend_age >= 110 )
		simple_error("You are kidding!");
	else if (friend_age <= 12)
		cout << "Next year you'll be " << friend_age +1 << "." << endl;
	else if (friend_age == 17)
		cout << "Next year you'll be able to vote." << endl;
	else if(friend_age >= 70 )
		cout << "I hope you are enjoying retirement!" << endl;  
	cout << "Yours sincerely, " << endl;
	cout << endl;
	cout << endl;
	cout << "Alex" << endl;
	return 0;	
}
