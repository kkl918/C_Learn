// 2る28ぱ 7る31ぱ 8る31ぱ
#include<iostream>
using namespace std;

int main(){
	int y,m,d,x; //x北る碭ぱ
	y=2016; m=1; d=1;
	
	for(int j=1; j<13 ; j++)
	{
	 if(m%2==1) // 计る
	  x=32;
	  
	 else if(m==2) //2る28ぱ
	  x=29;
	  
	 else if(m==8) // 8る31ぱ
	  x=32;
	  
	 else  //案计る
	  x=31;
	  
	 for (int i=1; i<x; i++)
	 {
		
	   cout<<y<<"/"<<m<<"/"<<d<<endl;
	   d=d+1; 
	   
     }
	 
	 m=m+1; //る+1
	 d=1;       //рD耴箂ぃ礛穦仓
    }

	return 0;
}




