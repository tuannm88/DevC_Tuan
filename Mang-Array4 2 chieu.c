#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Nhap va hien thi cac so vao mot mang hai chieu
int main(int argc, char *argv[]) {
	int arr[2] [3];
	int row,col;
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		
		{
		printf ("Nhap 1 so vao hang, cot [%d] [%d]: ",row,col);
		scanf("%d",&arr[row][col]);
		}
	}
	printf("\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		
		{
		printf ("The Number at [%d] [%d] is %d\n",row,col,arr[row] [col]);
		}
	}

	return 0;
}
