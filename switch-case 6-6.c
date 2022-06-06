#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	printf("nhap char= ");
	scanf("%c",&ch);
	if(ch<'a'||ch>'z')
	printf("\n Ky tu khong ton tai trong bang chu cai");
	else
		switch (ch)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			printf("\n Ky tu la 1 nguyen am");
			break;
			case 'z':
			printf("\n Ky tu cuoi cung 'z' da duoc nhap ");
			break;
			default:
				printf("\n Ky tu la 1 phu am");
				break;
		}
	return 0;
}
