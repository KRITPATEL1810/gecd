#include <string.h>
#include <stdio.h>
#include<stdlib.h> 
struct student
{
        char name[10];
        int m[3];
        int total;
        char result[5];
}*p,*s;
        int main()
    {
              int i,j,l,n;

              printf("Enter the no. of students : ");
              scanf("%d",&n);
              p=(struct student*)malloc(n*sizeof(struct student));
              s=p;
              for(i=0;i<n;i++)
                  {
                             printf("Enter a name : ");
                             scanf("%s",&p->name);
                             p-> total=0;l=0;
                             for(j=0;j<3;j++)
                                {
                                     one:printf("Enter Marks of %d Subject : ",j+1);
                                     scanf("%d",&p->m[j]);
                                     if((p->m[j])>100)
                                        {
                                            printf("Wrong Value Entered");
                                            goto one;
                                        }
                                            p->total+=p->m[j];
                                            if(p->m[j]<40)
                                                l=1;
                                }
                                            if(l==0)
                                              strcpy(p->result,"PASS");
                                            else
                                              strcpy(p->result,"FAIL");
                                              p++;
                      }
                                              for(i=0;i<n;i++)
                                                  {
                                                        printf("\n%s\t%s",s->name,s->result);
                                                        s++;
                                                 }
                                                    return 0;
    } 