#include<stdio.h>

void main()
 {
int i,j,x,a;
printf("no. of array: ");
scanf("%d",&a);
 int arry[a];
    for(i=0; i<a; i++) {
       
        scanf("%d",&arry[i]);
    }
    for(i=0; i<a-1; i++) {
        for(j=0; j<(a-1-i); j++) {
            if(arry[j]>arry[j+1]) {
                x= arry[j];
                arry[j]=arry[j+1];
                arry[j+1]=x;
            }
        }
    }
    for(i=0; i<a; i++) {
        printf("%d ",arry[i]);
    }
}


