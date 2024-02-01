#include "templateConcept.h"

template <class Type>
Type getMax(Type a, Type b) {
	Type max;
	a > b ? max = a : max = b;
	return max;
}

/*
int getMax(int a, int b) {
	int max;
	a > b ? max = a : max = b;
	return max;
}
double getMax(double a, double b) {
	double max;
	a > b ? max = a : max = b;
	return max;
}
char getMax(char a, char b) {
	char max;
	a > b ? max = a : max = b;
	return max;
}
string getMax(string a, string b) {
	string max;
	a > b ? max = a : max = b;
	return max;
}
*/
int main()
{	/*Function Template
	cout << getMax(3, 5) << endl;
	cout << getMax(3.5,5.5) << endl;
	cout << getMax('a','z') << endl;
	cout << getMax("ogun","duygu") << endl;
	*/
	
	Number<int> numberInt(5);
	Number<int> numberInt2(8);

	Number<float> numberFloat(3.5);
	Number<float> numberFloat2(5.5);

	Number<double> numberDouble(7.5);
	Number<double> numberDouble2(5.5);

	cout << numberInt;
	cout << numberFloat;
	cout << numberDouble;
	
	cout << "Result:" << numberInt + numberInt2 << endl;
	cout << "Result:" << numberFloat + numberFloat2 << endl;
	cout << "Result:" << numberDouble + numberDouble2 << endl;

	numberInt += numberInt2;
	numberFloat += numberFloat2;
	numberDouble += numberDouble2;

	cout << numberInt;
	cout << numberFloat;
	cout << numberDouble;

	numberInt2 += 5;
	numberFloat2 += 8.0;
	numberDouble2 += 7.5;

	cout << numberInt2;
	cout << numberFloat2;
	cout << numberDouble2;

	Number <int> numberInt3;
	Number <float> numberFloat3;
	Number <double> numberDouble3;

	cout << "Integer:";
	cin >> numberInt3;
	cout << "Float:";
	cin >> numberFloat3;
	cout << "Double:";
	cin >> numberDouble3;

	cout << numberInt3;
	cout << numberFloat3;
	cout << numberDouble3;



}