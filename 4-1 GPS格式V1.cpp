//把數據吃進來，塞進指定的陣列 

#include <fstream>
#include <iostream> 
using namespace std; 

void print(char*, int);

int main () 
{
  int num = 0, i=0, j=0, lat_num = 0, lon_num = 0, alt_num =0;
  char ch, date[80], time[80], lon[80], lat[80], alt[80];
  
  //打開指定的文件 
  ifstream ifs  ("0329.txt"); 
   
   while(!ifs.eof()) { 
        //一個一個去讀 
		ifs.get(ch);
        cout << ch; 
        
        if(num < 10){
			date[i] = ch;
			i++;
		}
		if(num > 11 && num < 19){
			time[j] = ch;
			j++;			
		}
		if(num > 30 && num < 44){
			lat[lat_num] = ch;
			lat_num++;			
		}
		if(num > 44 && num < 59){
			lon[lon_num] = ch;
			lon_num++;			
		}		
		if(num > 61 && num < 70){
			alt[alt_num] = ch;
			alt_num++;			
		}			
		num++;      
    } 
   cout << endl;
   
   
   
   // /* V2
   
   print(date, 10);
   print(time, 8);
   print(lon,  13);
   print(lat,  12);
   print(alt,  7);
   
   
   ofstream Result("0405.txt", ios::out);
   Result << &date[0] << " "
          << &time[0] << " "
          << &lon [0] 
		  << &lat [0] 
		  << &alt [0];            
   /* V1
   for(int i=0; i<10;i++)
	 cout << date[i];
   cout << " ";	 
   for(int i=0; i<8;i++)
	 cout << time[i];
   cout << " ";	 
   for(int i=0; i<12;i++)
	 cout << lat[i];
   cout << " ";	 
   for(int i=0; i<12;i++)
	 cout << lon[i];
   cout << " ";	 
   for(int i=0; i<12;i++)
	 cout << alt[i];
   */
   return 0; 
}

void print(char* name, int num){
   for(int i=0; i<num; i++)
	 cout << name[i];
   cout << " ";	
}













