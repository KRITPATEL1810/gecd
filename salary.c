#include<stdio.h>

int main() {
  float basic;
  printf("\n Enter Basic Salary :");
  scanf("%f", & basic);
  printf("\n");
  printf("\n          SALARY SLIP");
  printf("\n");
  printf("\n Basic : %.f", basic);
  printf("\n DA    : %.f", basic * 0.10);
  printf("\n HRA   : %.f", basic * 0.075);
  printf("\n MA    : %.f", 300.00);
  printf("\n");
  printf("\n GROSS : %.f", basic + (basic * 0.10) + (basic * 0.075) + 300.00);
  printf("\n");
  printf("\n PF    : %.f", basic * 0.125);
  printf("\n");
  printf("\n NET   : %.f", (basic + (basic * 0.10) + (basic * 0.075) + 300.00) - (basic * 0.125));
  printf("\n");
  return 0;
}