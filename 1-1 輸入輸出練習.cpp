#include <iostream>
#include <string>

using namespace std;

main(){
	int pw;
	int y,m,d;
	
	y=2016;
	m=8;
	d=7;
	
	string place = "¤¤´äµó";
	
	cout << "Hello, User87!" << endl;
	cout << "Last time login :"<<y<<"/"<<m<<"/"<<d<<endl;
	cout << "Last place login :"<<place<<endl;
	cout << "Please Enter ur password:"<<endl;
	cin  >> pw;
	
	if (pw == 8787)
		cout << "Welcome Back, Sir";
	else
	    cout << "Sorry, ur passwor in wrong.";
	    
	
	 
	 	
}


