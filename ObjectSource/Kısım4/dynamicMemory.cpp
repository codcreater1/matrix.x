#include "dynamicMemory.h"

int main()
{
	/*Example exObj, * exPtr;
	exPtr = &exObj;

	exObj.x = 5;
	exObj.y = 3;
	exObj.print();
	
	(*exPtr).x = 6;
	(*exPtr).y = 4;
	(*exPtr).print();
	

	exPtr->x = 6;
	exPtr->y = 4;
	exPtr->print();
	*/

	/* single object
	int* ptr = new int;
	Example* ptrExample = new Example;

	ptrExample->x = 5;
	ptrExample->y = 6;
	ptrExample->print();

	delete ptrExample;
	delete ptr;
	*/

	/* single dimensional array

	int* ptrArray = new int[5];
	Example* ptrExArray = new Example[5];

	for (int i = 0; i < 5; i++) {
		ptrExArray[i].x = i;
		ptrExArray[i].y = i * i;
		ptrExArray[i].print();
	}

	delete[]ptrExArray;
	delete[]ptrArray;
	*/
	
	/*
	int** ptr2DArray = new int* [5];
	Example** ptrEx2DArray = new Example * [5];

	for (int i = 0; i < 5; i++) {
		ptrEx2DArray[i] = new Example[5];
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			ptrEx2DArray[i][j].x = i;
			ptrEx2DArray[i][j].y = j;
			ptrEx2DArray[i][j].print();
		}
	}

	for (int i = 0; i < 5; i++) {
		delete[] ptrEx2DArray[i];
	}
	
	delete[] ptrEx2DArray;
	
	Example exObj(5,5), exObj2(4,4);
	Example exObj3 = exObj.addExample(exObj2);
	exObj3.print();


	*/

	






	return 0;
}


