#include<iostream>
using namespace std;

int Square(int);

int main()
{
	int i,j,k,m,n;
	m=1;
	for ( i=1; i<=10; i++)
	{
		cout << m << "^2=" << Square(m) << endl;
		m++;
	}
	
	
	return 0;
}

int Square(int n)
{
	return n*n;
}


