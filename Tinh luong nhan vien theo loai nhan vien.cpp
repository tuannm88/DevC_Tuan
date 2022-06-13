#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char loainhanvien, A, B,a,b;
	printf("xin moi nhap loai nhan vien: \n");
	scanf("%c",&loainhanvien);
	
	if(loainhanvien=='A'||loainhanvien=='a')
	printf("Muc luong cua nhan vien =300\n");
	if(loainhanvien=='B'||loainhanvien=='b')
	printf("Muc luong cua nhan vien =250\n");
	if(loainhanvien!='A'&&loainhanvien!='B'&&loainhanvien!='a'&&loainhanvien!='b')
	printf("Muc luong cua nhan vien = 100\n");
	return 0;
}
