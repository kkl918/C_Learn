#include<iostream>
using namespace std;

class Location{
	private:
		int x,y;
			
	public:
		void init(int initX,int initY);
		int getX();
		int getY();
};

void Location :: init(int initX, int initY){
	x=initX;
	y=initY;
}

int Location :: getX(){
	return x;
}

int Location :: getY(){
	return y;
}

int main(){
	Location A1,A2;
	A1.init(5,3);
	A2.init(6,8);
	int x=A1.getX();
	int y=A1.getY();
	cout << x << " " << y << endl;
	cout << A2.getX() << " " << A2.getY() << endl;

}


