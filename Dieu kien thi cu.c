#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a; /* tong so buoi hoc*/
	float b; /* so buoi di hoc thuc te*/
	float c;
	float h,i,k; /*diem thi LT,TH,BTL*/
	printf("Tong so buoi hoc la a: \n");
	scanf("%d",&a);
	
	printf("So buoi di hoc thuc te la b: \n");
	scanf("%d",&b);
	
	c=b/a;
	if (c >= 0.25)
	    {
		printf("duoc thi\n");
		  printf("nhap h: \n nhap i: \n nhap k: \n");
		  scanf("%f%f%f",&h,&i,&k);
		  
		if(h>=8)
		{
			printf("Qua ly thuyet\n");
		}	
		else
		{
			printf("truot ly thuyet\n");
		}
		if(i>=6)
		{	
			printf("Qua thuc hanh\n");
		}	
		else
		{
			printf("truot thuc hanh\n");
		}
		if(k>=4)
		{	
			printf("Qua BTL\n");
		}	
		else
		{
			printf("truot BTL\n");
		}
	}
	else
	{
		printf("hoc sinh hoc lai\n");
	}
	
	
	return 0;
}
