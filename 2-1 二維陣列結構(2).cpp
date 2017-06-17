#include <iostream>
#include <iomanip>
using namespace std;

const int num1 = 10;
const int num2 = 10;

typedef char a2d [num1][num2];

struct array
{
	int x;
	int y;
	a2d table;
};

int main()
{
	array k;
	cout << "Define your array:";
	cin  >> k.x >> k.y;
    for(int i=0; i < k.x; i++)
    {
    	for(int j=0; j < k.y; j++)
    	 k.table[i][j] = '*';
	}
    
        for(int i=0; i < k.x; i++)
        {
    	 for(int j=0; j < k.y; j++)
    	  cout << setw(5) << k.table[i][j];
		cout << endl; 
	    }	 
}




