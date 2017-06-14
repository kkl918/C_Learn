#include<iostream>
using namespace std;

int Square(int);
int Cube  (int);

int main(){
	int n;
	cout<<"Enter:";
	cin>>n;
	cout<<"Square "<< n << " = " << Square(n) << endl;
	cout<<"Cube   "<< n << " = " << Cube(n) << endl;
}

int Square(int n)
{
	return n*n;
}


int Cube(int n)
{
	return n*n*n;
}


