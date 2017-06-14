#include<iostream>
using namespace std;
int main(){
    string test_string="test_string";
    char test_char[]="test_char", result_char[20];
 
    string result_string1(test_char);
    string result_string2;
    result_string2.assign(test_char);
    strcpy(result_char, test_string.c_str());
 
    cout<<"test_string: "<<test_string<<endl;
    cout<<"test_char: "<<test_char<<endl;
    cout<<"result_string1: "<<result_string1<<endl;
    cout<<"result_string2: "<<result_string2<<endl;
    cout<<"result_char: "<<result_char<<endl;
 
    system("pause");
    return EXIT_SUCCESS;
}
