#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string name;
	char ch,m[50];
	int  i=0, j=0;
	//cout<< "Enter file name(EX:test.txt):";
	//cin >> m;
	
	ifstream ifs;	
	//ifs.open(m);
	ifs.open("test.txt");
	ofstream Result("output.txt", ios::out);
	
	while(!ifs.eof()){
		ch = ifs.get();
		
		if( i%146<24 || i%146>29 && i%146<69){
			if(i !=0 && i%146==0){
				Result << '\n';
			    //cout << '\n';
			}
			//cout << ch;
			
		    if(i%146==11)
             Result << '1';
		    else if(i%146==12)
             Result << '3';
            else if(i%146==10)
			 Result << 'T';
			else if(i%146==19)
			 Result << '+'; 
            else if(i%146==20)
			 Result << '0';
			else if(i%146==21)
			 Result << ':';
			else if(i%146==22)
			 Result << '0';
			else if(i%146==23)
			 Result << '0';   
			else if( ch =='/')
			 Result << '-'; 
            else 
		     Result << ch;	
		}
		
		i++;
	}

	
}
