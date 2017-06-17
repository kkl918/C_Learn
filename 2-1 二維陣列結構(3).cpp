#include <iostream>

using namespace std;

const int num1 = 10;
const int num2 = 10;

typedef int array[num1][num2];
void built (int n1, int n2);
struct a2d {
	int rows; 
	int cols;
	array table;
};

int main(){
	a2d k;
	cin >> k.rows >> k.cols;
	built(k.rows, k.cols);
}

void built (int n1, int n2){
	a2d k;
	for(int i = 0 ;i < n1 ;i++){
		for(int j = 0; j < n2; j++)
		 k.table[i][j] = 0;
	}
	
	for(int i = 0 ;i < n1 ;i++){
		for(int j = 0; j < n2; j++)
		 cout << k.table[i][j] << " ";
	 cout <<endl;
	}
}



