#include <iostream>

using namespace std;

int main ()
{
	char ch;
	int line, cha;
		
	while(cin.get(ch))
	{
		switch(ch)
		{
			case '\t': 
			case 'U' : break;
			case '\n': ++line; break;
			default  : ++cha;  break;
		}
	}
   
    cout << "��:" << line << " " << "�r��:" << cha << "\n";
    
} 


