#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	int i;
	float f;
	double d,result;
	printf("\n nhap ch: ");
	scanf("%c",&ch);
	fflush(stdin); /* lenh xoa bo nho dem, nhap sau lenh scanf kieu char */
	printf("\n nhap i: ");
	scanf("%d",&i);
	printf("\n nhap f: ");
	scanf("%f",&f);
	printf("\n nhap d: ");
	scanf("%lf",&d);
	result = (ch/i) + (f*d) - (f+i);
	printf("Ket qua bang %lf",result);
	return 0;
}
