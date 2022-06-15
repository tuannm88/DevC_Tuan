#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum,count,num1,num2;
	printf("\nNhap vao so thu nhat: ");
	scanf("%d",&num1);
	printf("\nNhap vao so thu hai: ");
	scanf("%d",&num2);
	for(count=num1;count<=num2;count++)
	{
		if(count%2!=0)
		{
		printf("\n So count la %d la so le\n",count);
		sum+=count;
		}
	}
		
		printf("\n Tong cac so le la: %d\n",sum);
		printf("\n exit");
	return 0;
	return 0;
}
