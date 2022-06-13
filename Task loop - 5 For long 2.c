#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int i,j,k;
	printf("Nhap vao so hang :");
	scanf("%d",&i);
	printf("\n");
	for(j=0;j<i;j++)
	{
		printf("\n");
		for(k=0;k<=j;k++)
		{
			printf("%d",k+1);  // In ra gia tri k+1
		}
	}
	return 0;
}*/
int main(int argc, char *argv[])
 {
int i,j;
printf("In ban cuu chuong");
	for(j=1;j<=9;j++)
	{
		printf("\n");
		for(i=1;i<=9;i++)
		{
		printf("%d*%d=%d \t",i,j,i*j);
		}
	}
	return 0;
}

