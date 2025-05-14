// Rod cutting --> Divide and Conquer
#include<stdio.h>
#include <limits.h>
int max(int a,int b) {
    return(a>b) ? a:b;
}
int cutRod(int price[],int n){
    if (n==0)
        return 0;
    int q=INT_MIN;
    for(int i=1;i<=n;i++) {
        q=max(q, price[i-1]+cutRod(price, n-i));
    }
       return q;
}
int main() {
    int price[]={1,5,8,9,10,17,17,20,24,30}; 
    int size=sizeof(price)/sizeof(price[0]);
    int n;
    printf("Enter the rod length (1 to %d): ",size);
    scanf("%d",&n);
    if (n<1 || n>size) {
        printf("Invalid length! Please enter a value between 1 and %d.\n",size);
    }
    else{
        printf("Maximum Obstacale value: %d\n",cutRod(price,n));
    }
}