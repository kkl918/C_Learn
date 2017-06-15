#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char ch, buf[102400], name[50];
	int max[1024], no_use[1024];
	int  i=0, j=0,k=0,m=0,n=0,comma=0, num_line=0, bufp=0,no_use_p=0;
	
	cout<< "Enter file name(EX:test.txt):";
	cin >> name;
	
	ifstream ifs;	
	
	ifs.open(name);
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
    		buf[j++];
    		n++;
		}
		else
		 Result << buf[j++];
	    
	}
}
