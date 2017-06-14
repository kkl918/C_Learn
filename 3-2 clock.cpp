#include <iostream>
#include "clock.h"
using namespace std;

void clock :: init(){
	hour = min = sec = 0;
}

void clock :: update(){
	
	sec++;
	
	if(sec == 61){
		sec = 0;
		min ++;
	}
	
	if(min == 61){
		min =0;
		hour++;
	}
	
	if(hour == 25){
		hour =0;
	}
}

void clock :: display(){
	cout << hour << ":" << min << ":" << sec << endl;
} 

int main(){
	clock clockA, clockB;
	clockA.init();
	for(int i=0; i<12000; i++){
		clockA.display();
		clockA.update();
		
	}
	
}


