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

	//int j=0,k=0,m=0,n=0,comma=0, num_line=0, bufp=0,no_use_p=0;
	
	
	//讀取相對路徑資料夾檔案名稱 
	string dir = string(".");//資料夾路徑(絕對位址or相對位址)
    vector<string> files = vector<string>();
    getdir(dir, files);
    
    ifstream ifs;
    for(int i=2; i<files.size()-1; i++){
			 
	    string f_str;
	    char ch, buf[102400];
	    int  no_use[1024];
		int  j=0,k=0,m=0,n=0,comma=0, num_line=0, bufp=0,no_use_p=0;
		
		//打印檔名 
		cout << files[i] <<endl;
		
		ifs.open(files[i].c_str());
		
		// .dat -> .txt 
		f_str = files[i].replace(files[i].length()-4, files[i].length(), ".txt");
		ofstream Result(f_str.c_str(), ios::out);
	
	    
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
		 }else	 
			 buf[bufp++] = ch; 
        } 
        
        //找到我不要的東西位置 
        while(buf[k++] != '\0' ){
	     if(buf[k] =='\n'){
			m = no_use[no_use_p++] = k-1;
			//cout << buf[m] << " ";
		 }
		 
        }

        //實際寫入 
        while(buf[j]!='\0'){
    	 if( j == no_use[n]){
    		buf[++j];
    		n++;
		 }else
		  Result << buf[j++];
	    }	
    }
    system("pause");
}

int getdir(string dir, vector<string> &files){
    DIR *dp;//創立資料夾指標
    struct dirent *dirp;
    if((dp = opendir(dir.c_str())) == NULL){
        cout << "Error(" << errno << ") opening " << dir << endl;
        return errno;
    }
    while((dirp = readdir(dp)) != NULL){//如果dirent指標非空
        files.push_back(string(dirp->d_name));//將資料夾和檔案名放入vector
    }
    closedir(dp);//關閉資料夾指標
    return 0;
}
