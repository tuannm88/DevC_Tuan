#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// in 26 ky tu tuong duong bang ma ASCII
int main(int argc, char *argv[]) {
	char alpha[26];
	int i,j;
	for(i=65,j=0;i<91;i++,j++)
	{
		alpha[j]=i;
		printf("The character now assigned is %c\n",alpha[j]);
	}
	getchar();
		return 0;
}
