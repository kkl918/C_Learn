#include <iostream>

using namespace std;

int main(){
	int y, m, d, k;
	y=2017;
	m=2;
	d=1;
	
	
	for (int j=1; j<7; j++){
	 if(j==2)
	  k=29;
	 else if (j%2==0)
	  k=31;
	 else
	  k=32;   	
	 
	 for (int i=1; i<k; i++){
		cout << y << "/" << j << "/" << i << endl;
	 }
    }
} 


