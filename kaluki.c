/*
//////////////////////////////
/	project:simple calculator/
/	author:catherine kaluki  /
/	date:19 october 2021     /
/	language:c99             /
/	compiler:GCC             /
/	license:MIT              /
/////////////////////////////

*/

#include<stdio.h>
int main()
{
//these are my variables	
	int num1,num2,sum,product,diffrence,modulus;
	float quotient;
	
//these are my assignment statements
	num1=377;
	num2=10;
	
 //this si my computations	
	sum= num1 + num2;
	diffrence=num1 - num2;
	product=num1 *num2;
	modulus=num1 % num2;
	quotient=(float) num1 / num2;
	
	
//this is my output	
	printf("hello!!! this is my simple calculator>>>>>>\n");
	printf("tsimple calculator\n");
	printf("%d + %d = %d\n",num1,num2,sum);
	printf("%d - %d = %d\n",num1,num2,diffrence);
	printf("%d * %d = %d\n",num1,num2,product);
	printf("%d modulus %d =%d\n",num1,num2,modulus);
	printf("%d / %d =%f\n",num1,num2,quotient);
	
	
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
