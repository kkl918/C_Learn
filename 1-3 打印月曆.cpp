#include <iostream>

using namespace std;

int main(){
	int m,d,y;
	y=2016; m=1; d=1;
	
	for(int i=1; i<32; i++)
	{
		cout<<y<<"/"<<m<<"/"<<d<<endl;
		d=d+1;
	}
	
	return 0;
}


