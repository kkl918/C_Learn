#include<stdio.h>
#include<string.h>
#include"exc.h"



void shellsort();
void qsort();

int main(int argc, char *argv[0]){
	
	printf("\nFile :%s %s\n\n", argv[0], argv[1]);
	
	dsl();
	
	int v1[]   = {9,8,7,6,5,4,3,2,1,0};
	int len_v1 = sizeof(v1)/sizeof(*v1); 

	char ch[]  = {'a', 'b', 'c', 'd', 'e'};
	char *p    = ch;   

	printf("Test for *++p : %c\n", *++p);

	dsl();

}


void shellsort(){
	;
}

void qsort(){
	;
}
