// Write a program to calculate Net Salary. User has to input Basic Salary and Output should be:
// Enter Basic Salary: 5000 (e.g. 5000)
// Allowances:
// DA = 70% of Basic Salary
// HRA = 7% of Basic Salary
// MA = 2% of Basic Salary
// TA = 4% of Basic Salary
// Deduction:
// PF = 12% of Basic Salary
// IT = any value (e.g. 500)
#include<stdio.h>
int main()
{
    int salary,DA,HRA,MA,TA,PF,IT,GROSS,NET_SALARY,Allowances,Deduction;
    printf("Enter the salary: ");
    scanf("%d",&salary);
    DA=salary*0.7;
    HRA= salary*0.07;
    MA= salary*0.02;
    TA= salary*0.04;
    Allowances=DA+HRA+MA+TA;
    GROSS=salary+Allowances;
    PF=salary*0.12;
    printf("Enter the IT charge: ");
    scanf("%d",&IT);
    Deduction=PF+IT;
    NET_SALARY=salary+Allowances-Deduction;
    printf("Enter your Basic Salary= %d",salary);
    printf("\nDA of Basic Salary= %d",DA);
    printf("\nHRA of Basic Salary= %d",HRA);
    printf("\nMA of Basic Salary= %d",MA);
    printf("\nTA of Basic Salary= %d",TA);
    printf("\nPF of Basic Salary= %d",PF);
    printf("\nGross salary= %d",GROSS);
    printf("\nNet salary= %d",NET_SALARY);
}