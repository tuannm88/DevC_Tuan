#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
	float diemthi;
	printf("Xim moi nhap diem thi: ");
	scanf("%f",&diemthi);
	
	if(diemthi<35)
	printf("sinh vien xep loai E\n");
	if(35<=diemthi&&diemthi<45)
	printf("sinh vien xep loai D\n");
	if(45<=diemthi&&diemthi<60)
	printf("sinh vien xep loai C\n");
	if(60<=diemthi&&diemthi<75)	
	printf("sinh vien xep loai B\n");
	if(diemthi>=75)		
	printf("sinh vien xep loai A\n");

	return 0;
}
