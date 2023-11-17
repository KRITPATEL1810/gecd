#include<stdio.h>
#include<string.h>

int main()
{
    int a[3][3], b[3][3], c[3][3],r,C,i,j,k;
    printf("enter the number of row");
    scanf("%d",&r);
    printf("enter the number of column=");
    scanf("%d",&c);
    printf("enter the first matrix element=\n");

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
      printf("enter the second matrix element=\n");
      for ( i = 0; i < 3; i++)
      {
        for ( j = 0; j <3; j++)
        {
        scanf("%d",&b[i][j]);
        }
      }
        printf("multiply of the matrix=\n");
        for ( i = 0; i < 3; i++)
        {
           for ( j = 0; j < 3; j++)
           {
             c[i][j]=0;
             for ( k = 0; k < c; k++)
             {
                c[i][j]=a[i][k]*b[k][j];
             }
            }
        }
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; i++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
         return 0;
}