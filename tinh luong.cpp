#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float luongcoban,da,hra,ta,cacmuckhac;
	float pf,it,luongthuclinh;
	
	luongcoban=12000;
	da=0.12*luongcoban;
	hra=150;
	ta=120;
	cacmuckhac=450;
	pf=0.14*luongcoban;
	it=0.15*luongcoban;
	luongthuclinh=luongcoban+da+hra+ta+cacmuckhac-(pf+it);
	
	printf("luong thuc linh = $%f",luongthuclinh);
	return 0;
}
