#include <fstream>
#include <iostream> 
using namespace std; 

int main(){
	
	char   ch  = '1';
	string str = "GOOD";
	int z = ch - '0';
	cout << ch << str << z << endl;
	cout << "-------------" << endl;
	string strr[80] = "123456";
	cout << *strr << endl;
	
	char ss[10] = {'a','a','a'};
	string sss = &ss[0];
	cout << sss;
}
