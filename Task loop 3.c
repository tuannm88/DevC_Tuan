#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int count,min,max;
	min=1;
	max=100;
	for(count=min;count<=max;count++)
	{if(count%7==0)
		printf("\n So chia het cho 7 la %d \n",count);
	}
		printf("\n exit");
	return 0;
}
