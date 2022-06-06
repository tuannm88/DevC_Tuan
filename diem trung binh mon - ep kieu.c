#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int diemchamchi,diemchuyencan,diemthietke,diemtrinhbay;
	float avgGPA;
	
	printf("\n Nhap cham chi: ");
	scanf("%d",&diemchamchi);
	printf("\n Nhap chuyen can: ");
	scanf("%d",&diemchuyencan);
	printf("\n Nhap diem thiet ke: ");
	scanf("%d",&diemthietke);
	printf("\n Nhap diem trinh bay: ");
	scanf("%d",&diemtrinhbay);
	avgGPA=((float)diemchamchi+(float)diemchuyencan+(float)diemthietke+(float)diemtrinhbay)/4;
	printf("avgGPA %f",avgGPA);

	
	return 0;
}
