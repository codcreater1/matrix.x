#include <iostream>

using namespace std;
class complexNumber {
private:
	int real, imag;
	friend ostream& operator <<(ostream&, const complexNumber&);
	friend istream& operator >>(istream&, complexNumber&);
public:
	complexNumber(int r = 0, int i = 0);
	~complexNumber();
	complexNumber(const complexNumber& oth);
	int getReal() const {
		return real;
	}
	int getImag() const {
		return imag;
	}
	void setValue(int r = 0, int i = 0);

	complexNumber operator +(const complexNumber&);
	complexNumber operator *(const complexNumber&);
	complexNumber operator -(complexNumber&);
	complexNumber operator *(int);
	void multiplyMinus();
};

complexNumber::complexNumber(int r, int i) {
	real = r;
	imag = i;
	cout << "Complex Number created." << endl;
}

complexNumber::~complexNumber() {
	cout << "Complex Number destroyed." << endl;
}

complexNumber::complexNumber(const complexNumber& oth) {
	real = oth.real;
	imag = oth.imag;
	cout << "Complex Number copied to target." << endl;
}

void complexNumber::setValue(int r, int i) {
	real = r;
	imag = i;
}
ostream& operator <<(ostream& osObject, const complexNumber& complexNumberObject) {
	if (complexNumberObject.imag >= 0) {
		osObject <<"Number:" <<complexNumberObject.real << "+" << complexNumberObject.imag << "i" << endl;
	}
	else {
		osObject <<"Number:"<< complexNumberObject.real << complexNumberObject.imag << "i" << endl;
	}
	return osObject;
}

istream& operator >>(istream& isObject, complexNumber& complexNumberObject) {
	isObject >> complexNumberObject.real >> complexNumberObject.imag;
	return isObject;
}

complexNumber complexNumber::operator+(const complexNumber& oth) {
	complexNumber result;
	result.real = real + oth.real;
	result.imag = imag + oth.imag;
	return result;
}

complexNumber complexNumber::operator-(complexNumber& oth) {
	complexNumber result;
	oth.multiplyMinus();
	result = *this + oth;
	return result;
}

void complexNumber::multiplyMinus() {
	real *= -1;
	imag *= -1;
}

complexNumber complexNumber::operator*(int constant) {
	complexNumber result;
	result.real = real * constant;
	result.imag = imag * constant;
	return result;
}

complexNumber complexNumber::operator*(const complexNumber& oth) {
	complexNumber result;
	result.real = real * oth.real - imag * oth.imag;
	result.imag = real * oth.imag + imag * oth.real;
	return result;
}