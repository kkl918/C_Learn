//第一版 沒有分大小月
#include <iostream>

using namespace std;

int main(){
	int m,d,y;
	y=2016; m=1; d=1;
	
	for(int j=1; j<13 ;j++)
	{
	 for(int i=1; i<32; i++)
	  {
		cout<<y<<"/"<<m<<"/"<<d<<endl;
		d=d+1;
		while(d>31)
		{
			d=1;
		}	
	  }
	  
	  m=m+1;
    } 
	return 0;
}



