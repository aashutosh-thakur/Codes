//Check if pair with given Sum exists in Array
//Given an array A[] of n numbers and another number x, the task is to check whether or not there exist two elements in A[] whose sum is exactly x.

/*output
Enter the size of array: 5
Enter the element of array: 1 -2 1 0 5
Enter the digit which you want to check: 0
Yes
Enter the size of array: 5
Enter the element of array: 1 -2 1 0 5
Enter the digit which you want to check: 0
N0
*/
#include<stdio.h>
int sum(int a[], int siz, int element){
    int j,k,sum=0;
    for(j=0;j<siz;j++)
    {
        for(k=0;k<siz;k++)
        {
            sum=a[j]+a[k+1];
            if(sum==element)
            {
                printf("Yes");
                return 0;
            }
            else{
                printf("N0");
                return 0;
            }
        }
    }
}
int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the element of array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    int x;
    printf("Enter the digit which you want to check: ");
    scanf("%d",&x);
    sum(array,size,x);
}