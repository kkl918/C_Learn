#include<iostream>
using namespace std;

int main(){
	int v[]={0,1,2,3,4,5,6,7,8,9};
	int low=0, high=9, x=8, mid;
	mid = (low+high)/2;
	while(x<v[mid]){
		high = mid - 1;
		mid = (low+high)/2;
	}
	while(x>v[mid]){
		low = mid + 1;
		mid = (low+high)/2;
	}
	
	while(low <= high){
		cout << mid;
		break;
	}
	 
	
} 
