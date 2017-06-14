#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	int c=0,f=0;
	cout << "using for loop:" << endl;
	for(f=0;f<301;f+=20){
		cout << f << "\t" << 5*(f-32)/9 << endl;
	}
 
    cout << endl;
    cout << "using while loop:" << endl;
    int c2=0, f2=0;
    while(f2<301){
    	cout << f2 << "\t" << 5*(f2-32)/9 << endl;
		f2+=20;
        	
	}
} 
