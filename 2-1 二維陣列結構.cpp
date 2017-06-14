#include<iostream>
#include<iomanip> 
using namespace std;

const int N_R = 10;
const int N_C = 10;

typedef int A_2D [N_R][N_C];

struct TwoDArray     
{
	 int r_in;
	 int c_in;
	 A_2D table;
};

void Print(TwoDArray kk);

int main()
{
		
		TwoDArray kk;
		
		cout << "Rows and Cols:(low than 10*10)";
		cin  >> kk.r_in >>kk.c_in;
		
		for ( int i = 0; i < kk.r_in; i++)
		 {
			for ( int j = 0; j < kk.c_in; j++)
			  kk.table[i][j] = 0;
	 	 }
	 	 
       Print(kk);
	 	 
	 	 
	 	 
		
}

void Print(TwoDArray kk)
{
	for ( int i = 0; i < kk.r_in; i++)
	{
		for ( int j = 0; j < kk.c_in; j++)
		 {
	      cout << setw(5) << kk.table[i][j];
         }
      
	  cout << endl;       
	}

}



