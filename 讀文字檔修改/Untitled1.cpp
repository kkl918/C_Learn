#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string name;
	char ch,m[50];
	int  i=0,comma=0;
	//cout<< "Enter file name(EX:test.txt):";
	//cin >> m;
	
	ifstream ifs;	
	//ifs.open(m);
	ifs.open("test.txt");
	ofstream Result("output.txt", ios::out);
	
	while((ch = ifs.get()) != EOF){
		if(ch ==','){
			comma++;
			if(comma == 1)
			 Result << ",NEh,";
			else if(comma == 4)
			 comma =0;
		}
		else
		 Result << ch;
		
   } 
	
}
