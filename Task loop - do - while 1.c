#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num1,num2;
	num2=0;
	do
	{
		printf("\nNhap vao so num1: ");
		scanf("%d",&num1);
		printf("Num1 = %d",num1);
		num2++;
	}
	while(num1!=0);
	printf("\n Tong so lan dem la %d",--num2);
	return 0;
}
