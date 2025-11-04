#include <stdio.h>

int main(void) {


	short birthday;
	short* ptr;
	ptr = &birthday;

	int intVar = 42;
	float floatVar = 3.1415972;
	char charVar = 'A';
	double doubleVar = 9.81;

	int* intPtr = &intVar;
	float* floatPtr = &floatVar;
	char* charPtr = &charVar;
	double* doublePtr = &doublePtr;


	printf("birthday 변수의 주소는 %p 입니다 \n", ptr);

	printf("intVar 변수 값 : %d \t 주소 : %p \n", *intPtr, intPtr);
	printf("float 변수 값 : %f \t 주소 : %p \n", *floatPtr, floatPtr);
	printf("char 변수 값 : %c \t 주소 : %p \n", *charPtr, charPtr);
	printf("double 변수 값 : %.2f \t 주소 : %p \n", *doublePtr, doublePtr);
	return 0;
}