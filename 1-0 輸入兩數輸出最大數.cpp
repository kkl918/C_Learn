#include <iostream>

using namespace std;

int main(){
	cout << "Hello World!" << endl; //endl => end line = \n =´«¦æ 
	
	cout << "------------" << endl;
	cout << "Input two int:";
	
	int v1,v2,v3;
	
	cin >> v1 >> v2;
	
	if(v1>v2)
	  v3=v1;
	else
	  v3=v2;

    cout << "Max:" << v3;
	
	return 0;
}
