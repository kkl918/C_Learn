// 2��28�� 7��31�� 8��31��
#include<iostream>
using namespace std;

int main(){
	int y,m,d,x; //x����@�Ӥ�X��
	y=2016; m=1; d=1;
	
	for(int j=1; j<13 ; j++)
	{
	 if(m%2==1) // �_�Ƥ�
	  x=32;
	  
	 else if(m==2) //2��28��
	  x=29;
	  
	 else if(m==8) // 8��31��
	  x=32;
	  
	 else  //���Ƥ�
	  x=31;
	  
	 for (int i=1; i<x; i++)
	 {
		
	   cout<<y<<"/"<<m<<"/"<<d<<endl;
	   d=d+1; 
	   
     }
	 
	 m=m+1; //��+1
	 d=1;       //��D�k�s�A���M�|�@���֥[
    }

	return 0;
}




