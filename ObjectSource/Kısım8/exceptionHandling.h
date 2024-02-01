#include <iostream>
#include <exception>
using namespace std;

class divisionByZero {
private:
	string message;
public:
	divisionByZero() {
		message = "division by zero.";
	}
	string what() {
		return message;
	}
};

class negativeNumber :public exception {
private:
	string message;
public:
	negativeNumber(string x = "") {
		message = x + " cannot be negative number.";
	}
	string what() {
		return message;
	}
};