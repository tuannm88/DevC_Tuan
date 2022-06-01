#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int r;
	printf("Nhap vao so a\n");
	scanf("%d",&a);
	r=a%2;
	if(r==0)
	{
	printf("%d la so chan\n",a);
	}
	else
	{
	printf("%d la so le\n",a);
}
	return 0;
}

