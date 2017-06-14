#include<iostream>
#include<stdlib.h>
using namespace std;

#define MAXOP 100
#define NUMBER '0'


int getop(char[]);
void push(double);
double pop(void);

int main(){
	int type;
	double op2;
	char s[MAXOP];
	
	while( (type = getop(s)) != EOF){
		switch(type){
			case NUMBER:
				push(atof(s));
				break;
			case '+':
			 push(pop() + pop());
			 break;
			case '-':
			 op2 = pop();
			 push(pop() - op2);
			 break;
			case '*':
			 push(pop() * pop());
			 break;
			case '/':
			 op2 = pop();
			 if(op2 != 0.0)
			  push(pop() / op2);
			 else
			  cout << "error, zero division" << "\n";  
			 break;
			case '\n':
			 cout << "\t" << pop() << "\n";
			 break; 			 
			default:
			 	cout << "error, unknown command" << s << "\n";
			 	break;
		}
	}
	return 0;
}

#define MAXVAL 100
//全域變數 
int sp = 0;
double val[MAXVAL]; 

void push(double f){
	//cout << "\nsp:" << sp << "\n";
	if(sp < MAXVAL)
	 val[sp++] = f;  //傳入的f儲存浮點數組val,sp++先用後加 
	else
	 cout << "error:stack full, can't push " << f;  
}

double pop(void){
	if(sp > 0)
	 return val[--sp];
	else{
		cout << "error:stack empty.\n";
		return 0.0;
	}
	
}

#include<ctype.h>
int getch(void);
int ungetch(int);

int getop(char s[]){
	int i=0, c;
	
	//跳過空格及\t，c是空格或者\t的時候把c的值放到s[0] 
	while((s[0] = c = getch()) == ' ' || c =='\t');
	
	//把陣列s[1]設為\0 
	s[1] = '\0';
	
	// 不是數字    也  不是點的時候直接返回其值 
	if(!isdigit(c) && c != '.')
	 return c;

    //如果是數值的話將其值置入陣列s(先加後用) 
	if(isdigit(c))
	 while(isdigit(s[++i] = c = getch()));
	
	//是點的話亦是收入陣列，收集小數部分 
	if(c == '.')
	 while(isdigit(s[++i] = c = getch()));
	
	//最後一個設為\0，代表結束 
	s[i] = '\0';
	
	
	if(c != EOF)
	 ungetch(c);
	
	return NUMBER;
}

#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;

int getch(void){
	return (bufp > 0) ? buf[--bufp] : getchar();
}

int ungetch(int c){
	if(bufp >= BUFSIZE)
	 cout << "ungetch:too many characters.\n";
	else
	 buf[bufp++] = c;
}








































 
