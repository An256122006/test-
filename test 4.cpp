#include <stdio.h>
int main()
{
	int a, b, c, arr[100][100], tich=1, temp, d[100], e, f, h;
	do
	{
		printf ("                        MENU\n");
		printf ("1.Nh?p k�ch c? v� gi� tr? c�c ph?n t? c?a m?ng\n");
		printf ("2.In gi� tr? c�c ph?n t? c?a m?ng theo ma tr?n\n");
		printf ("3.In ra c�c ph?n t? n?m tr�n du?ng bi�n v� t�nh t�ch\n");
        printf ("4.In ra c�c ph?n t? n?m tr�n du?ng ch�o ch�nh\n");
        printf ("5.In ra c�c ph?n t? n?m tr�n du?ng ch�o ph?\n");
        printf ("6.S?p x?p du?ng ch�o ch�nh theo th? t? tang d?n\n");
        printf ("7.T�m ki?m m?t ph?n t? v� in ra v? tr� c?a ph?n t? d� trong m?ng\n");
        printf ("8.thoat\n");
        printf ("moi ban nhap lua chon:");
        scanf ("%d",&a);
        switch (a)
        {
        	case 1:
        		printf ("moi ban nhap so hang :");
        		scanf ("%d",&b);
        		printf ("moi ban nhap so cot:");
        		scanf ("%d",&c);
            	for (int i=0; i<b; i++)
            	{
            		for (int j=0; j<c; j++)
            		{
            			printf ("moi ban nhap gia tri [%d][%d] :",i+1, j+1);
            			scanf ("%d",&arr[i][j]);
					}
				}
				printf ("\n");
				break;
			case 2:
			for (int i=0; i<b; i++)
            	{
            		for (int j=0; j<c; j++)
            		{
            			printf ("%d ",arr[i][j]);
					}
					printf ("\n");
				}
				break;
			case 3:
			  for (int i=0; i<c; i++)
			 {
			  printf ("%d ",arr[0][i]);
			  tich*=arr[0][i];	
			 }
			  for (int i=0; i<c; i++)
			 {
			  printf ("%d ",arr[b-1][i]);
			  tich*=arr[b-1][i];	
			 }
			 for (int i=1; i<b-1; i++)
			 {
			  printf ("%d ",arr[i][0]);
			  tich*=arr[i][0];	
			 }
			 for (int i=1; i<b-1; i++)
			 {
			  printf ("%d ",arr[i][c-1]);
			  tich*=arr[i][c-1];	
			 }
			 printf ("\n");
			 printf ("tich cua duong bien:%d\n",tich);
			 break;
			case 4:
			if (b==c)
			{
			  	for (int i=0; i<b; i++)
			  	{
			  		printf ("%d ", arr[i][i]);
				}
			} else
			{
				printf ("khong hop le");
			}		
			printf ("\n");
			break;
			case 5:
				if (b==c)
			{
			  	for (int i=0; i<b; i++)
			  	{
			  		printf ("%d ", arr[i][b-1-i]);
				}
			} else
			{
				printf ("khong hop le");
			}		
			printf ("\n");
			break;
			case 6:
				if (b==c)
			{
			  	for (int i=0; i<b; i++)
			  	{
			  	    d[i]=arr[i][i];
				}
			} else
			{
				printf ("khong hop le");
			}		
			   printf ("sau khi xap xep:");
			  for (int i = 0; i < (b) - 1; i++) {
              for (int j = 0; j < (b)- i - 1; j++) {
              if (d[j + 1] < d[j]) {
                 temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;
               }
              }
		     }
		     for (int i=0; i<b; i++)
		     {
		     	printf ("%d ", d[i]);
			 }
			 break;
			 case 7:
			 	printf ("moi ban nhap gia tri can tim:");
			 	scanf ("%d",&e);
			 	 f=-1;
			 	 h=-1;
			 	for (int i=0; i<b; i++)
            	{
            		for (int j=0; j<c; j++)
            		{
                         if (e==arr[i][j])
						 {
						 	f= i;
						 	h= j;
						 	printf ("vi tri so can tim nam ow hang %d cot %d\n",f,h);
						 	break;
						 }   		
					}
				}
				if (f==-1 && h==-1)
				{
					printf ("vi tri khong ton tai");
					} 
					break;	
			 case 8:
			  return 1;
			  break;
			  default :
			  printf ("khong ton tai");
			  break;	
		}
	} while (1);
}
