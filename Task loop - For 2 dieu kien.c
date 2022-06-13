#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,max;
	
	printf("Nhap vao gia tri max: ");
	scanf("%d",&max);
	printf("Bang tinh tong cua 2 so i, j thoa man dieu kien \n");
	
	for(i=0,j=max;i<=max;i++,j--)
	{
		printf("\t\t%d+\t\t%d=\t\t%d \n",i,j,i+j);
	}
	printf("\t\tExit\n");
	return 0;
}
