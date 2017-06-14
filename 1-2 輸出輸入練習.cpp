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

	
	bool check = false;
	
	do
	{
	 cout << "Please Enter ur password:";
   	 cin  >> pw;
	 if (pw == 8787)
	 {
		cout << "Welcome Back, Sir"<<endl;
	    check = true;
     }
	 
	 else
	 {   cout << "Sorry, ur passwor in wrong."<<endl;
	     check = false;
     }
    } while(!check);
    
	system("pause");
	 
	 	
}


