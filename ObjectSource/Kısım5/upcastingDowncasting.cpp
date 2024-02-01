//#include "upcastingDowncasting.h"
#include "Person.h"
#include "Vehicle.h"
#include "Shape.h"
/*
EMPLOYEE           MANAGER
name                name
surname             surname
salary              salary
display             display
                    department
                    increaseSalary
*/

int main()
{
    /*
    UPCASTING

    Employee* emp1, * emp2;
    Manager mng("Ogun", "Birinci", 3500, "Software");
    Employee emp3("Duygu", "Keydal", 4000);

    emp1 = &mng;
    emp2 = &emp3;
    emp1->displayInformation();
    emp2->displayInformation();

    mng.displayInformation();


    DOWNCASTING
    cout << "-----------------------------------" << endl;
    Employee emp("Duygu", "Keydal", 3900);
    Employee* emp2 = &emp;
    
    Manager* mng2 = (Manager*)(emp1);

    Manager* mng3 = (Manager*)(emp2);
    cout << mng3->mngDepartment << endl;

    cout << "---------------------------------" << endl;
    emp1->displayInformation();
    mng2->displayInformation();
   
    //CALL BY REFERENCE-POINTER-VALUE.
    Employee emp1("Ogun", "Birinci", 3500);
    Manager mng1("Ogun", "Birinci", 3500, "Software");
    cout << "Reference Parameter:" << endl;
    print(emp1);
    print(mng1);
    cout << "\n-----------------------------------------------\nPOINTER" << endl;
    Employee* emp2 = new Employee("Ogun", "Birinci", 3500);
    Manager* mng2 = new Manager("Ogun", "Birinci", 3500, "Software");
    print2(emp2);
    print2(mng2);

    cout << "\n----------------------------------------------\nValue Parameter" << endl;
    print3(emp1);
    print3(mng1);
    
    //Virtual Destructor
    Manager* mng = new Manager("Ogun", "Birinci", 3500, "Software");
    Employee* emp = mng;
    Employee* emp2 = new Manager("Ogun", "Birinci", 3500, "Software");


    delete emp2;
    delete emp;

    Cat* catAnimal = new Cat();
    Dog* dogAnimal = new Dog();
    Duck* duckAnimal = new Duck();

    Animal* animalObject[] = { catAnimal,dogAnimal,duckAnimal };
    for (int i = 0; i < 3; i++) {
        animalObject[i]->talk();
    }
    */
    /*
    Person* pArr[] = { new TurkishPerson("Ogun"),new TurkishPerson("Duygu"),new TurkishPerson("Oguz"),new DeutschePerson("Thomas"),new DeutschePerson("Carl") };
    int numberOfPerson = sizeof(pArr) / sizeof(pArr[0]);
    for (int i = 0; i < numberOfPerson; i++) {
        for (int j = 0; j < numberOfPerson; j++) {
            if (i != j) {
                pArr[i]->sayHi(*pArr[j]);
            }
        }
        cout << "\n";
    }
    */
    /*
    //Vehicle
    Vehicle* vPtr[] = { new Car(125.850,"BMW"),new MotorCycle(37.500,"Honda") };
    int which_vehicle;
    char inputVehicle;
    do {
        fflush(stdin);
        cout << "Enter vehicle and input:";
        cin >> which_vehicle >> inputVehicle;
        switch (inputVehicle) {
        case 'U':
            vPtr[which_vehicle]->increaseSpeed();
            vPtr[which_vehicle]->displayInformation();
            break;
        case 'D':
            vPtr[which_vehicle]->decreaseSpeed();
            vPtr[which_vehicle]->displayInformation();
            break;
        case 'C':
            vPtr[which_vehicle]->stopEngine();
            vPtr[which_vehicle]->displayInformation();
            break;
        case 'S':
            vPtr[which_vehicle]->startEngine();
            vPtr[which_vehicle]->displayInformation();
            break;
        default:
            cout << "Enter valid input:" << endl;
            break;
        }
    } while (which_vehicle != -1);

*/
    
Shape* sArr[] = { new Rectangle(4.0,5.0),new Rectangle(3.5,2.5),new Rectangle(8.5,4.3),new Circle(3.2),new Circle(3.8) };
int numberShape = sizeof(sArr) / sizeof(sArr[0]);
for (int i = 0; i < numberShape; i++) {
    sArr[i]->calculateArea();
    sArr[i]->calculatePerimeter();
    sArr[i]->display();
}

    
    return 0;
}

