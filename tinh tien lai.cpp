#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int principal, period;
	float rate, si;
	principal=100;
	period=3;
	rate=8.5;
	si=principal*period*rate/100;
	printf("%2f",si);
	return 0;
}
