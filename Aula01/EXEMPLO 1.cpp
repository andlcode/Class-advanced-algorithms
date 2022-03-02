#include<stdio.h> 
#include<locale.h>

int main()	{
	setlocale(LC_ALL, "portuguese");
	int testA;
	testA = 21;
	
	float data1;
	double data2;
	
	// The difference between float and double is the number of digits
	// --> Float(32bits) 7 digits and double(64bits) 15-16 digits
	
	data1 = 3.14159265358979323;
	data2 = 3.14159265358979323;
	
	printf("\n\nExecutando o código: ");
	printf("\n\n\n Valor inteiro = %d", testA);
	
	printf("\n\n\n Analisando Float e Double: \n\n");
	printf("	Dado 1 = %.7f", data1);
	printf("	Dado 2 = %.7f", data2);
	
	return 0;
	}