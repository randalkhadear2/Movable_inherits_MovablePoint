#include <iostream>
using namespace std;
class Movable { // abstracted class

public:
	virtual void moveUp() = 0;
	virtual void moveDown() = 0;
	virtual void moveLeft() = 0;
	virtual void moveRight() = 0;

};


class MovablePoint :public Movable {
protected:
	int x;
	int y;
	int xSpeed;
	int ySpeed;

public:
	MovablePoint() {
		x = 0;
		y = 0;
		xSpeed = 0;
		ySpeed = 0;


	}
	MovablePoint(int xx, int yy , int xs , int ys) {
		x = xx;
		y = yy;
		xSpeed = xs;
		ySpeed = ys;
	}
	void set_x(int w) {
		x = w;
	}
	int get_x() {
		return x;
	}



	void set_y(int w) {
		y = w;
	}
	int get_y() {
		return y;
	}


	void set_xSpeed(int w) {
		xSpeed = w;
	}
	int get_xSpeed() {
		return xSpeed;
	}


	void set_ySpeed(int w) {
		ySpeed = w;
	}
	int get_ySpeed() {
		return ySpeed;
	}

	//override
	 void moveUp() {
		 y = y + ySpeed;
	}
	 //override
	 void moveDown() {
		 y = y - ySpeed;
	 }
	 //override
	 void moveLeft() {
		 x = x - xSpeed;
	 }
	 //override
	 void moveRight() {
		 x = x + xSpeed;
	 }

	 void display_info() {
		 cout << " the x is : " << x << endl;
		 cout << " the y is : " << y << endl;
		 cout << " the xspeed is : " << xSpeed << endl;
		 cout << " the ySpeed is : " << ySpeed << endl;

	}


};

int main()
{
	MovablePoint m(5, 5, 2, 3);
	m.moveUp(); // x = 5, y = 8
	m.display_info();
	cout << endl;
	m.moveLeft(); // x = 3, y = 8
	m.display_info();
}
