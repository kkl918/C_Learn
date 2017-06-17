#include <iostream>
#include <string.h>
using namespace std;

#define MAXLINES 5000

char *lineptr[MAXLINES];
int  getline(char *, int);
int  readlines (char *, int);
void writelines(char *, int);


int main(){
	int nlines;
	
	if((nlines=getline(lineptr,MAXLINES)) > 0){
		qsort(lineptr, 0, nlines-1);
		writelines(lineptr, nlines);
		return 0;
	} else{
		cout << "error:input too big to sort.\n";
		return 1;
	}
}


#define MAXLEN 1000
int getline(char *, int);
char *alloc(int);

int readline(*lineptr[], int maxlines){
	int len, nlines=0;
	char *p, line[MAXLEN];
	while((len = getline(line, MAXLEN)) > 0){
		if(nlines > maxline || (p=aloc(n)) == NULL)
		 return -1;
		else{
			line[len-1] = '\0';
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	}
	return nlines;
}

void writelines(char =lineptr[], int nlines){
	while(nlines-- > 0)
	cout << *lineptr++ << '\n';
}

void qsort(char *v[], int left, int right){
	int i, last;
	void swap(char *v[], int i, int j);
	
	if( left >= right)
	 return;
	swap(v, left, (left+right)/2);
	last = left;
	for(i=left+1; i<= right; i++){
		if((strcmp(v[i]), v[left]) < 0 )
		 swap(v, ++last, i);
	}
	qsort(v, left, last-1);
	qsort(v, last+1, right);
}


void swap(char *v[], int i, int j){
	char *temp;
	
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

int  getline(cahr s[], int lim){
	int c,i;
	
	for(i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; i++)
	 s[i] = c;
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	
	s[i] = '\0';
	
	return i;
}




















