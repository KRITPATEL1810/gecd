#include<stdio.h>

int main() {
    int i,j,min,n,temp;
    printf("enter numeber of elements : ");
    scanf("%d",&n);
    int arry[n];
    for(i=0; i<n; i++) {
        printf("enter %d elements",i+1);
        scanf("%d",&arry[i]);
    }
    puts("former arry");
    for(i=0; i<n; i++) {
        printf("%d ",arry[i]);
    }
    puts("\n");
    for(i=0; i<n-1; i++) {
        min=i;
        
        for(j=i+1; j<n; j++) {
            if(arry[j]<arry[min]) {
                min=j;
            }
        }
        temp=arry[i];
        arry[i]=arry[min];
        arry[min]=temp;
}
    puts("sorted arry");
    for(i=0; i<n; i++) {
        printf("%d ",arry[i]);
    }
}