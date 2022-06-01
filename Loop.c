#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a,b,c,d;
	c = 0;
	a=1;
	while (a<=10) {
		printf("Nhap b: ");
		scanf("%d",&b);
		c=c+b;
		a=a+1;
	}
	d=c/10;
	printf("trung binh 10 so la %d\n",d);
	return 0;
}
