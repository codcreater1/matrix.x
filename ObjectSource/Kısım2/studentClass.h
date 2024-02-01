#include <iostream>
using namespace std;

/*
ERÝÞÝM BELÝRLEYÝCÝLER

private-> sadece sýnýfýn içerisinden eriþilebilir.(default-varsayýlan olarak private).Main kýsýmdan eriþilemez.
protected-> sadece class içerisinde ve miras alan classlarda eriþilebilir.Main kýsýmdan eriþilemez.
public-> her yerden eriþilebilir.

*/

class Student {
private:
	string studentName, studentSurname, studentID;//üye deðiþkenler(member variables)
public:
	Student();
	Student(string, string);
	Student(string, string, string);
	~Student();
	Student(const Student& oth);

	void displayInformation();//üye fonksiyon(member function)
	void setName(string name) {studentName = name;}
	void setSurname(string surname) {studentSurname = surname;}
	void setID(string ID) {studentID = ID;}
	void setInformation(string name, string surname, string ID) {
		studentName = name;
		studentSurname = surname;
		studentID = ID;
	}
	string getName() {return studentName;}
	string getSurname() {return studentSurname;}
	string getID() {return studentID;}

};
Student::Student() {
	cout << "Default constructor worked." << endl;
	studentName = "None";
	studentSurname = "None";
	studentID = "None";
}

Student::Student(string name,string surname) {
	cout << "2 parameter constructor worked." << endl;
	studentName = name;
	studentSurname = surname;
	studentID = "None";
}
Student::Student(string name,string surname,string ID) {
	cout << "3 parameter constructor worked." << endl;
	studentName = name;
	studentSurname = surname;
	studentID = ID;
}
Student::~Student() {
	cout << "Destructor worked." << endl;
}
Student::Student(const Student &oth){
	cout << "Copy constructor worked." << endl;
	studentName = oth.studentName;
	studentSurname = oth.studentSurname;
	studentID = oth.studentID;
}

void Student::displayInformation() {
	cout << "Name:" << studentName << " " << studentSurname << endl;
	cout << "ID:" << studentID << endl;
}
