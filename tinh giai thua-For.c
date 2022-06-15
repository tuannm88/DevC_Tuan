#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Tinh giai thua cua mot so
int main(int argc, char *argv[]) 
{	
	int n,i,kq;
	printf("Nhap so can tinh giai thua= ");
	scanf("%d",&n);
	
	if(n==0)
	printf("Giai thua = 1\n");
	else
	kq=1;
	for(i=0;i<n;i++)
	{
	kq=kq*(n-i);
	}
	printf("Giai thua cua %d la %d\n",n,kq);
	return 0;
}
