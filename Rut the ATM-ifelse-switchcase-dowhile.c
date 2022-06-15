#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Chuong trinh rut tien o cay ATM
int main(int argc, char *argv[]) {
	int cardid,pin;
	char ch,nh;
	
	printf("Xin moi quy khach nhap so tai khoan: ");
	scanf("%d",&cardid);
	printf("Xin moi quy khach nhap so mat khau: ");
	scanf("%d",&pin);
	if(cardid==123&&pin==456)
	{
	
		do
		{	
			printf("Xin moi quy khach lua chon: \n1. Rut Tien\n2.Chuyen khoan\n3.Xem so du\n4.Ket thuc\n");
			fflush(stdin);
			scanf("%c" , &ch);
			if(ch<'1'||ch>'4')
			{
			printf("Khong ton tai lua chon, moi quy khach nhap lai :\n");
			}
			else
		
			{
				switch(ch)
				{
					case'1':
					printf("Rut tien: \n");
					break;
					case'2':
					printf("Chuyen khoan: \n");
					break;	
					case'3':
					printf("Xem so du: \n");
					break;	
					case'4':
					printf("Ket thuc \n");
					break;
					default:

					break;
				}
			}
		printf("Ban co muon thao tac tiep khong: \n");
		fflush(stdin);
		scanf("%c",&nh);
		}
		while(nh=='y'||nh=='Y');
		printf("Tam biet quy khach\n");
		
	}
	
	else
	printf("Quy khach nhap sai thong tin tai khoan hoac mat khau, de nghi nhap lai\n");
	
	return 0;
}
