#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tienhang(int dg, int sl)
{
	return (dg*sl);
}
int main(int argc, char *argv[]) {	
	int dg,sl;
	char luachon;
	int thanhtoan;
	int thanhtien;
	do{
	printf("Xin moi nhap so luong hang: \n");
	scanf("%d",&sl);
	printf("Xin moi nhap don gia san pham: VND\n");
	scanf("%d",&dg);
	thanhtoan=tienhang(dg,sl);
	printf("Tong gia tri tien hang = %d VND\n",thanhtoan);
	printf("Ban co muon mua hang tiep khong (Y/N) ?\n");
	fflush(stdin);
	scanf("%c",&luachon);
	thanhtien+=thanhtoan;
	}while(luachon=='Y'||luachon=='y');
	printf("Tong so tien can thanh toan %d ",thanhtien);
return 0;	
}
