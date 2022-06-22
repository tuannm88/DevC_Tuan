#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sodu, user, pass;
sodu=10000000; //Khai bao so du trong tai khoan
user=123; // khai bao user cua khach hang
pass=456; //khai bao pass

int login (int user, int pass)						// Khai bao ham login, gia tri tra ve la 0 hoac 1
{	char option2;
	do{
	printf("Xin moi quy khach nhap user: \n");
	scanf("%d",&user);
	printf("Xin moi quy khach nhap password: \n");
	scanf("%d",&pass);
		if(user==123&&pass==456){
			printf("\n Login success\n");
			return (1);
		}
		else{
			printf("\nLogin khong thanh cong do sai user hoac pass\n");
		}
		printf("Ban co muon dang nhap lai khong (Y/N)?\n");
		fflush(stdin);
		scanf("%c",&option2);
	}while (option2=='Y'||option2=='y')	;
return (0);
} 
int withdraw(int num)								// Khai bao ham rut tien va cac cau lenh trong ham
{
int str; 							// bien cuc bo so tien rut
int sdcl;
sdcl;							// bien cuc bo so tien con lai
char option;
printf("Ban da chon chuc nang rut tien!\n");
	do{
		printf("Moi ban nhap so tien can rut: ");
		scanf("%d",&str);
		if(str<=3000000&&str%50000==0&&str<=(sodu-50000))
		{
			sdcl=sodu-str;
		printf("\n Cu da rut tien thanh cong, cu cat ngay keo bi cuop.\n");
		printf("\n So du con lai trong tai khoan cu la: \n",sdcl);		
		}
			else if (str>(sodu-50000)){
				printf("So tien ban rut vuot qua so du trong tai khoan, phai co it nhat 50000 duy tri tai khoan\n");
			}
				else if(str>3000000){
					printf("So tien ban rut lon hon dinh muc cho phep la 3000000 VND\n");
				}
					else if(str%50000!=0){
						printf("So tien ban rut phai la boi so cua 50000 VND \n");
					}
		printf("Ban co muon thuc hien giao dich khac khong (Y/N)?\n");
		fflush(stdin);
		scanf("%c",&option);
	} while (option=='Y'||option=='y')	;	
}

int transfer (int id, int num)							// Khai bao ham chuyen khoan va cac cau lenh trong ham
{	
	int sdcl;
	char option1;
	printf("Ban da chon chuc nang chuyen tien!\n");
	do{
		printf("\n Moi ban nhap so tai khoan nguoi nhan: ");
		scanf("%d\n",&id);
		fflush(stdin);
		printf("\n Moi ban nhap so tien can chuyen: ");
		scanf("%d\n",&num);
		if(num<=(sodu-50000)){
			sdcl=sodu-num;
			printf("Ban da chuyen khoan thanh cong, so tien con lai la: ",sdcl);
		}
			else{
				printf("Khong thuc hien duoc, so tien chuyen khoan vuot qua so tien trong tai khoan");
			}
		printf("Ban co muon thuc hien giao dich khac khong (Y/N)?\n");
		fflush(stdin);
		scanf("%c",&option1);
	}while (option1=='Y'||option1=='y')	;
}
int check ()						// Khai bao ham kiem tra so du tai khoan
{
	printf("Ban da chon chuc nang kiem tra tai khoan!\n");
	printf("So tien trong tai khoan cua quy khach la %d\n",sodu);
}

int main(int argc, char *argv[]) {
int ch;
int id,num;
char user,pass, option4;
if(login(user,pass)==1){
	printf("Xin chao quy khach \n");
	do{
	printf("Xin moi quy khach nhap lua chon: \n");
	printf("1. Rut tien\t\t\t\t2.Chuyen khoan\n");
	printf("3. Xem so du\t\t\t\t4.Ket thuc\n");
	fflush(stdin);
	scanf("%c",&ch);
		if(ch<'1'||ch>'4'){
		printf("\n Khong ton tai lua chon xin moi nhap lai.");
		}
			else{
				switch(ch){
					case '1':
					withdraw (num);
					break;
					case '2':
					transfer (id,num);
					break;
					case'3':
					check(sodu);
					break;
					case'4':
					printf("Tam biet quy khach!");
					break;
					default:
					break;
				}
			}
		printf("Ban co muon thuc hien giao dich khac khong (Y/N)?\n");
		fflush(stdin);
		scanf("%c",&option4);
	}while (option4=='Y'||option4=='y')	;		
}
else
return(0);
}

/*int main(int argc, char *argv[]) {
	int user,pass; //user 123, pass: 456
	char ch,chon;
	int sodu,rt;
	int sdcl;
	sodu=100000000;
	printf("Xin moi quy khach nhap user: \n");
	scanf("%d",&user);
	printf("Xin moi quy khach nhap password: \n");
	scanf("%d",&pass);
	if(user==123&&pass==456)
	{
		do
		{
			printf("Xin moi quy khach nhap lua chon: \n");
			printf("1. Rut tien\t\t\t\t2.Chuyen khoan\n");
			printf("3. Xem so du\t\t\t\t4.Ket thuc\n");
			fflush(stdin);
			scanf("%c",&ch);
			if(ch<'1'||ch>'4')
			printf("\n Khong ton tai lua chon xin moi nhap lai.");
			else
			{
				switch(ch)
				{
					case '1':	
					{
					printf("Xin moi quy khach nhap vao so tien can rut: \n");
					scanf("%d",&rt);
					if(rt>3000000)
					printf("So tien ban rut vuot qua dinh muc\n");
					else
						{
						if(rt%50000!=0)
						printf("So tien can rut phai la boi so cua 50000\n");
						else
							{
							sdcl=sodu-rt;
							printf("Rut tien thanh cong, so du con lai =%d \n",sdcl);
							}
						}
				   }
					break;
					case'2':
					break;
					case'3':
						printf("So du trong tai khoan cua quy khach la: %d VND \n",sodu);
					break;
					case'4':
						printf("Tam biet quy khach");
					break;
					default:
					break;	
				}						
			}
			printf("Chon 'y' de tiep tuc, 'n' de ket thuc: \n");
			fflush(stdin);
			scanf("%c",&chon);
		} while(chon=='y'||chon=='Y');
		printf("Ket thuc, Tam biet quy khach");
	}
	else
	printf("Quy khach nhap sai thong tin tai khoan hoac mat khau, de nghi nhap lai\n");
	return 0;
}

/*
int withdraw(num)
{	int sdcl;
	sdcl=sodu-rt;
	return sdcl;
}

	
	
}
*/
