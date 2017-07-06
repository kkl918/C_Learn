#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <vector>
#include <string>
#include<iostream>
#include<fstream>
using namespace std;

int getdir(string dir, vector<string> &files);

int main(){
	string name, out, f_str, f_str2;
	char ch, buf[102400];
	int max[1024], no_use[1024];
	int j=0,k=0,m=0,n=0,comma=0, num_line=0, bufp=0,no_use_p=0;

	// 讀取檔案以及打開新檔案 
	cout<< "Enter file name(EX:test.txt):";
	cin >> name;
    cout << name.c_str();	
	ifstream ifs;	
 
	ifs.open(name.c_str());
	 
	
	ofstream Result("output.txt", ios::out);
	
	 
	//讀文字檔出來儲存到陣列 
    while((ch = ifs.get()) != EOF){
        
		
		
		if(ch ==','){
			comma++;
			if(comma == 1){
			 buf[bufp++] = ',';
			 buf[bufp++] = 'N';
			 buf[bufp++] = 'E';
			 buf[bufp++] = 'h';
			 buf[bufp++] = ',';
			
			} 
			 
			else if(comma == 4)
			 comma = 0;
			else
			 buf[bufp++] = ch;
		}
		else{
			 
			 buf[bufp++] = ch;
		}
		 
   } 
   
    //找到我不要的東西位置 
    while(buf[k++] != '\0' ){
	     if(buf[k] =='\n'){
			m = no_use[no_use_p++] = k-1;
			//cout << buf[m] << " ";
		 }
		 
    }

    
    while(buf[j]!='\0'){
    	if( j == no_use[n]){
    		buf[++j];
    		n++;
		}
		else
		 Result << buf[j++];
	    
	}

}
