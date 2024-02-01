#include <iostream>
using namespace std;

class Example {
public:
	int x, y;
	Example(int mainX=0,int mainY=0) {
		this->x = mainX;
		this->y = mainY;
		cout << "Constructor worked." << endl;
	}
	~Example() {
		cout << "Destructor worked." << endl;
	}
	void print() {
		cout << "X Value:" << x << " Y Value:" << y << endl;
	}
	Example addExample(Example& oth) {
		this->x += oth.x;
		this->y += oth.y;
		return *this;
	}
};

