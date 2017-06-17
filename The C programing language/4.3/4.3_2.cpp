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
//�����ܼ� 
int sp = 0;
double val[MAXVAL]; 

void push(double f){
	//cout << "\nsp:" << sp << "\n";
	if(sp < MAXVAL)
	 val[sp++] = f;  //�ǤJ��f�x�s�B�I�Ʋ�val,sp++���Ϋ�[ 
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
	
	//���L�Ů��\t�Ac�O�Ů�Ϊ�\t���ɭԧ�c���ȩ��s[0] 
	while((s[0] = c = getch()) == ' ' || c =='\t');
	
	//��}�Cs[1]�]��\0 
	s[1] = '\0';
	
	// ���O�Ʀr    �]  ���O�I���ɭԪ�����^��� 
	if(!isdigit(c) && c != '.')
	 return c;

    //�p�G�O�ƭȪ��ܱN��ȸm�J�}�Cs(���[���) 
	if(isdigit(c))
	 while(isdigit(s[++i] = c = getch()));
	
	//�O�I���ܥ�O���J�}�C�A�����p�Ƴ��� 
	if(c == '.')
	 while(isdigit(s[++i] = c = getch()));
	
	//�̫�@�ӳ]��\0�A�N���� 
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








































 
