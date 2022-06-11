#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	printf("The number 555 in various  forms: \n");
	printf("Without any modifier: \n");
		printf("[%d]\n",555);
	printf("With - modifier:\n");
		printf("[%-d]\n",555);
	printf("With digit string 10 as modifier: \n");
		printf("[%10d]\n",555);  // bo tu 10 hien thi 10 khoang trang truoc gia tri in
	printf("With 0 as modifier: \n");
		printf("[%0d]\n",555); 
	printf("With 0 and digit string 10 as modifier: \n");
		printf("[%010d]\n",555);  // bo tu 10 hien thi 10 gia tri 0 truoc gia tri 555
	printf("With -,0 and digit string 10 as modifier: \n");
		printf("[%-010d]\n",555); //bo tu -010 hien thi 10 gia tri trong sau gia tri 555
	return 0;
}
