#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int a [] = {10,20,5,90};
	int minindex (int index){
	int i, min,minid;
	min = a[0];
	for (i=1;i<4;i++){
		if (a[i]<min){
			min=a[i];
			minid=i;
			
		//	printf("Gia tri nho nhat trong mang la tai vi tri %d \n",i);
		}		
	}
return minid;	
}
	int maxindex (int index){
	int i, max,maxid;
	max = a[0];
	for (i=1;i<4;i++){
		if (a[i]>max){
			max=a[i];
			maxid=i;
		}		
	}
	//printf("Gia tri lon nhat trong mang la tai vi tri %d \n",i);
return i;	
}

	int sumarr (int index){
	int i, total;
	for (i=0, total=0;i<4;i++){
	total=total+a[i];	
	}
return total;	
}

	int avragg (int index){
	int i, avr,total;
	for (i=0, total=0;i<4;i++){
	total=total+a[i];
	avr=total/(i+1);	
	}
return avr;	
}

int main(int argc, char *argv[]) {
	int index;
	printf("Gia tri nho nhat tai vi tri %d \n", minindex(index));
	printf("Gia tri lon nhat  %d \n", maxindex(index));
	printf("Gia tri tong cua mang la %d \n", sumarr(index));
	printf("Gia tri trung binh cua mang la %d \n", avragg(index));
	return 0;
}
