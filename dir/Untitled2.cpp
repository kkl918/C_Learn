#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int getdir(string dir, vector<string> &files);

int main(){
	string m[10000];
	int  num=0;
    string dir = string(".");//��Ƨ����|(�����}or�۹��})
    vector<string> files = vector<string>();
    getdir(dir, files);

    //��X��Ƨ��M�ɮצW�٩�ù�
    for(int i=0; i<files.size(); i++){
        //cout << files[i] << endl;
        m[0]= files[i];
		cout << m[num] << endl;
    }

    system("pause");
    return 0;
}

int getdir(string dir, vector<string> &files){
    DIR *dp;//�Х߸�Ƨ�����
    struct dirent *dirp;
    if((dp = opendir(dir.c_str())) == NULL){
        cout << "Error(" << errno << ") opening " << dir << endl;
        return errno;
    }
    while((dirp = readdir(dp)) != NULL){//�p�Gdirent���ЫD��
        files.push_back(string(dirp->d_name));//�N��Ƨ��M�ɮצW��Jvector
    }
    closedir(dp);//������Ƨ�����
    return 0;
}
