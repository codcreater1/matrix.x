#include "operatorOverloading.h"
#include "complexNumber.h"
#include "Date.h"
#include "bankAccount.h"


/*
    List of operators that cannot be overloaded
1> Scope Resolution Operator  (::)
2> Pointer-to-member Operator (.*)
3> Member Access or Dot operator  (.)
4> Ternary or Conditional Operator (?:)
5> Object size Operator   (sizeof)
6> Object type Operator   (typeid)


*/

int main()
{/*
    Person person1("Ogun", "Birinci", 21);
    Person person2("Duygu", "Keydal", 21);
    Person person3("Ogun", "Birinci", 23);

   
    PersonFriend(person1);

    person1++;
    ++person1;
    person1.displayPerson();
    person2++;
    person2.displayPerson();


    person1.displayPerson();
    person3.displayPerson();

    cout << "Member:" << endl;
    person1 == person3 ? cout << "Same person" << endl : cout << "Not same person." << endl;
    cout << "Non Member:" << endl;
    person1 != person3 ? cout << "Not same person" << endl : cout << "Same person" << endl;
   
    Person person4;

    cin >> person4;
    cout << person4;*/

    //complexNumber
    /*
    complexNumber complex1;
    complexNumber complex2;

    cin >> complex1;
    cin >> complex2;

    cout << complex1;
    cout << complex2;

    complexNumber addComplex = complex1 + complex2;
    complexNumber subtractComplex = complex1 - complex2;
    complexNumber multiplyComplex = complex1 * complex2;
    complexNumber multiplyConstant = complex1 * 5;

    cout << addComplex;
    cout << subtractComplex;
    cout << multiplyComplex;
    cout << multiplyConstant;
    */

    //Date
    /*
    Date firstDate(19, 07, 1999);
    Date secondDate(26, 07, 1999);

    cout << firstDate;
    cout << secondDate;

    for (int i = 0; i < 30; i++) {
        firstDate++;
        cout << firstDate;
    }

    Date date3(21, 03, 2020);
    if (firstDate > date3) {
        cout << "first date is greater";
    }
    else {
        cout << "false.";
    }   
    */

    bankAccount acc1("Ogun", "Birinci", 3500, "05071234567");

    cout << acc1;
    acc1 + 10000;
    cout << acc1;

    acc1 - 20000;
    cout << acc1;

    return 0;
}


