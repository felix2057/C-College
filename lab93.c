//C Program to read and display a 4x5 matrix
#include<stdio.h>
int main()

{

  int a[4][5],b[4][5],c[4][5];

  int i,j;


  for(i=0;i<4;i++)

  {

    printf("\nEnter elements of %d row of first Matrix: ",i+1);

    for(j=0;j<5;j++)

      scanf("%d",&a[i][j]);

  }


  for(i=0;i<4;i++)

  {

    printf("\nEnter elements of %d row of second Matrix: ",i+1);

    for(j=0;j<5;j++)

      scanf("%d",&b[i][j]);

  }


  printf("\nSum of Matrix:\n\n");

  for(i=0;i<4;i++)

  {

    for(j=0;j<5;j++)

    {

      c[i][j]=a[i][j]+b[i][j];

      printf("%3d ",c[i][j]);

    }

    printf("\n");
 }
}    
    

