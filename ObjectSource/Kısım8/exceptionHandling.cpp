#include "exceptionHandling.h"
#include <cassert>

int main()
{
	/*Assert Function
	float divisor, dividend, result;

	cout << "Please enter the dividend:";
	cin >> dividend;

	cout << "Please enter the divisor";
	cin >> divisor;

	assert(divisor != 0);

	result = dividend / divisor;
	cout << "Result is " << result;
	*/

	float divisor, dividend, result;
	string str = "divisor cannot be zero.";
	try 
	{
		cout << "Please enter the dividend:";
		cin >> dividend;

		cout << "Please enter the divisor";
		cin >> divisor;

		if (divisor == 0) {
			throw divisionByZero();
		}
		else if (divisor < 0) {
			throw negativeNumber("divisor");
		}
		else if (dividend < 0) {
			throw negativeNumber("dividend");
		}
		else {
			throw 12;
		}
		result = dividend / divisor;
		cout << "Result is " << result;
	}
	catch (divisionByZero& divisionByZeroObject) {
		cout << divisionByZeroObject.what();
	}
	catch (negativeNumber& negativeNumberObject) {
		cout << negativeNumberObject.what();
	}
	catch (string x) {
		cout << x << endl;
	}
	catch (float x) {
		cout << x << "cannot be negative number." << endl;
	}
	catch (...) {
		cout << "default." << endl;
	}

	return 0;
}

