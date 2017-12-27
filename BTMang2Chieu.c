//Bai Tap mang 2 chieu in ra mang 2 chieu
#include<stdio.h>
void  main() 
{ 
    int Arr[10][10]; 
    int dong, cot, i, j, k;
	int sum=0;
	int tongphu=0;

     
    printf(" Nhap so dong:"); 
    scanf(" %d", &dong); 
    printf(" Nhap so cot:"); 
    scanf(" %d", &cot); 
// Nhap mang 
    for ( i = 0; i < dong; i++) 
        for( j = 0; j < cot; j++) 
        { 
            printf(" Nhap phan tu thu[%d][%d] : ", i,j); 
            scanf(" %d", &Arr[i][j]); 
        } 
         
// Xuat mang 
    printf(" \n Mang vua nhap la"); 
    for ( i = 0; i < dong; i++) 
    { 
        printf("\n\n"); 
        for( j = 0; j < cot; j++) 
            printf(" %3d", Arr[i][j]); 
    } 
  // Sap xep cot giam dan 
    for ( i = 0; i < dong; i++) 
        for (j = 0; j < cot; j++) 
        { 
            for ( k = j; k < cot; k++) 
            { 
                if( Arr[i][j] < Arr[j][k]) 
                { 
                    int tang = Arr[i][j]; 
                    Arr[i][j] = Arr[j][k]; 
                    Arr[j][k] = tang; 
                } 
            }
// Xuat mang vua sap xep 
    printf(" \n Mang vua sap xep la"); 
     
        for ( j = 0; j < dong; j++) 
        { 
            printf("\n\n"); 
            for( k = 0; k < cot; k++) 
                printf(" %3d", Arr[j][k]); 
        } 
//tong cac phan tu tren duong cheo chinh hoac tinh tong duong cheo chinh
        for (i = 0; i < dong; i++) 
		{
            for (j = 0; j < cot; j++) 
			{
         if (i == j)
            sum = sum + Arr[i][j];
            }
		}
		//tong cac ptu thuoc cheo phu
		i=0; j=dong-1;
		while(i<dong&&j>=0)
		{
			tongphu=tongphu + Arr[i][j];
			i++;j--;
        }
//xuat tong 
    printf("\nTong cac phan tu duong cheo chinh la: %d",sum);
    printf("%2d",Arr[i][j]); 
      printf("\nTong cac phan tu duong cheo phu la: %d",tongphu);
      printf("%2d",Arr[i][j]); 
//chuong trinh con
 getch ();
}
}
 
    
    
