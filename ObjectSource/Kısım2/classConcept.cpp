#include "studentClass.h"
#include "Triangle.h"
#include "complexNumber.h"
#include "Array.h"
#include "Date.h"
#include "bankAccount.h"
#include "Matrix.h"

int main()
{/*
	Student student1("Ogun", "Birinci");
	Student student2("Duygu", "Keydal", "4157");
	Student student3(student2);
	
	student3.displayInformation();

	Student studentArray[5];

	
	student1.setName("Ogun");
	student1.setSurname("Birinci");
	student1.setID("3989");

	string name = student1.getName();
	string surname = student1.getSurname();
	string ID = student1.getID();

	cout << name << endl;
	cout << surname << endl;
	cout << ID << endl;

	//student2.displayInformation();
	//student2.setInformation("Duygu", "Keydal", "3989");
	student2.displayInformation();


	if (true) {
		Student student5;
	}
	*/

	//Triangle.h
	/*
	float a, b, c;
	cout << "Please enter the sides(a-b-c):" << endl;
	cin >> a >> b >> c;
	Triangle triangle1(a,b,c);//constructor.
	Triangle triangle4 = { a,b,c };//constructor.
	Triangle triangle5 { a,b,c };//constructor.
	Triangle triangle2 = triangle1;//copy constructor.
	Triangle triangle3(triangle1);//copy constructor.


	cout << "-Triangle1-" << endl;
	cout << "Side A:" << triangle1.getSideA() << endl;
	cout << "Side B:" << triangle1.getSideB() << endl;
	cout << "Side C:" << triangle1.getSideC() << endl;
	cout << "Area:" << triangle1.calculateArea() << endl;
	triangle1.triangleType();


	cout << "-Triangle2-" << endl;
	triangle2.setValue(5, 5, 5);
	cout << "Side A:" << triangle2.getSideA() << endl;
	cout << "Side B:" << triangle2.getSideB() << endl;
	cout << "Side C:" << triangle2.getSideC() << endl;
	cout << "Area:" << triangle2.calculateArea() << endl;
	triangle2.triangleType();

	*/
	//Complex Number
	/*
	complexNumber number1(4, 5);
	cout << "Real:" << number1.getReal() << endl;
	cout << "Imag:" << number1.getImag() << endl;
	number1.displayComplex();

	complexNumber number2(3, -6);
	cout << "Real:" << number2.getReal() << endl;
	cout << "Imag:" << number2.getImag() << endl;
	number2.displayComplex();

	complexNumber number3 = number2;
	number3.displayComplex();
	number3.setValue(4, -7);
	number3.displayComplex();

	cout << "-------------------------------" << endl;
	complexNumber resultMain;
	resultMain = number1.addComplex(number2);
	resultMain.displayComplex();

	cout << "-------------------------------" << endl;
	complexNumber resultMain2;
	resultMain2 = number1.subtractComplex(number2);
	resultMain2.displayComplex();

	cout << "-------------------------------" << endl;
	complexNumber resultMain3;
	resultMain3 = number1.multiplyConstant(4);
	resultMain3.displayComplex();

	cout << "-------------------------------" << endl;
	complexNumber resultMain4;
	resultMain4 = number1.multiplyComplex(number2);
	resultMain4.displayComplex();
	*/


	// Array.h
	/*
	Array mainArray(10);
	Array mainArray2(mainArray);
	cout << "Capacity:" << mainArray.getCapacity() << endl;
	cout << "Size:" << mainArray.getSize() << endl;

	cout << "Capacity:" << mainArray2.getCapacity() << endl;
	cout << "Size:" << mainArray2.getSize() << endl;

	mainArray.AddItem(5);
	mainArray.AddItem(12);
	mainArray.AddItem(12);
	mainArray.AddItem(12);
	mainArray.AddItem(12);
	mainArray.AddItem(12);
	mainArray.AddItem(12);
	mainArray.AddItem(3);
	mainArray.AddItem(8);
	mainArray.AddItem(7);
	mainArray.AddItem(23);
	mainArray.AddItem(92);
	mainArray.AddItem(3);
	mainArray.AddItem(85);
	mainArray.AddItem(76);
	mainArray.AddItem(32);
	mainArray.AddItem(3);
	mainArray.printItems();
	mainArray.AddItem(42);
	mainArray.printItems();

	Array mainArray3 = mainArray;
	mainArray3.printItems();
	mainArray3.AddItem(15);
	mainArray3.AddItem(18);

	mainArray.printItems();
	mainArray3.printItems();

	mainArray3.removeIndexItem(12);
	mainArray3.printItems();


	mainArray3.removeItem(155);
	mainArray3.printItems();

	mainArray3.findElement(155);

	*/
	//Date
	/*Date mainDate(02, 01, 2020);
	cout << "Day:" << mainDate.getDay() << endl;
	cout << "Day:" << mainDate.getMonth() << endl;
	cout << "Day:" << mainDate.getYear() << endl;
	mainDate.displayDate();

	Date mainDate2(01, 01, 2020);
	mainDate2.displayDate();



	mainDate.compareDate(mainDate2);

	cout << "------------------------------" << endl;
	for (int i = 0; i < 30; i++) {
		mainDate2.increaseDay();
		mainDate2.displayDate();
	}*/



	//Bank Account
	/*bankAccount acc1("Ogun", "Birinci",1500,"05071231212");
	cout << "Name:" << acc1.getPersonName() << endl;
	cout << "Surname:" << acc1.getPersonSurname() << endl;
	cout << "Phone:" << acc1.getPersonPhone() << endl;
	cout << "Balance:" << acc1.getPersonBalance() << endl;


	bankAccount acc2 = acc1;
	cout << "Name:" << acc2.getPersonName() << endl;
	cout << "Surname:" << acc2.getPersonSurname() << endl;
	cout << "Phone:" << acc2.getPersonPhone() << endl;
	cout << "Balance:" << acc2.getPersonBalance() << endl;

	acc1.credit(1500);
	acc1.displayProfile();
	acc1.withdraw(150);
	acc1.displayProfile();

	bankAccount acc3("Duygu", "Keydal");
	acc3.displayProfile();
	acc1.sendMoney(acc3, 1500);
	acc3.displayProfile();
	acc1.displayProfile();
	*/



	//Matrix.h
Matrix mainMatrix;
/*for (int i = 0; i < 5; i++) {
	for (int j = 0; j < 5; j++) {
		mainMatrix.setValue(i, j, i * j);
	}
}*/

mainMatrix.randomSet();
mainMatrix.display();
Matrix mainMatrix2;
mainMatrix2.identityMatrixSet();
mainMatrix2.display();
Matrix mainMatrix3 = mainMatrix2;
mainMatrix3.display();
Matrix result=mainMatrix.addMatrix(mainMatrix2);
result.display();
	
	return 0;
}

