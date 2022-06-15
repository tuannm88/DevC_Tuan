#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Cac vi du ve mang - Array
int main(int argc, char *argv[]) {
	int num [5];
	int i;
	num[0]=10;
	num[1]=20;
	num[2]=30;
	num[3]=40;
	num[4]=1000;
	for(i=0;i<5;i++)
	printf("So thu [%d] la so %d\n",i,num[i]);		
	return 0;
} */
int main(int argc, char *argv[])
 {
 	int ary[10];
 	int high,total, i;
 	for(i=0;i<10;i++)
 	{
 		printf("Nhap gia tri: %d: ",i+1);
 		scanf("%d",&ary[i]);	 
	}
	high=ary[0];
	for(i=1;i<10;i++)
	{
		if(ary[i]>high)
		high=ary[i];
	}
	printf("Gia tri lon nhat la %d \n",high);

	for (i=0,total=0;i<10;i++)
	{
			total=total+ary[i];
	}
		printf("\n Trung binh cong cac gia tri total = %d",total/i);
	
		return 0;
	}
