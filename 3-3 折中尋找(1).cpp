#include<iostream>
using namespace std;

int main(){
	int v[]={0,1,2,3,4,5,6,7,8,9};
	int low=0, high=9, x=8, mid, i=0;
	
	while(low <= high){
	 mid = (low+high)/2;
	 if(x<v[mid])
		high = mid - 1;
	 else if(x>v[mid])
		low = mid + 1;
	 else{
	 	cout << mid;
	 	break;
	 }
	    	
	}
	
} 
