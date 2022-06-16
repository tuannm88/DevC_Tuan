#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Hien thi mang char gom chuoi 5 ky tu ACSII
int main(int argc, char *argv[]) {
	char ary[5];
	int i;
	printf("\n Nhap vao chuoi: ");
	scanf("%s",ary);
	printf("\n The string is %s \n\n",ary);
	for(i=0;i<5;i++)
	printf("\t%d",ary[i]);
	
	return 0;
}
