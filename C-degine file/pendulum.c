//Write a program that takes the length of the pendulum as input and then calculate the time period of the pendulum. Provided that, T=2π√L/G. Define the value of π as 3.14 and take L as the length of the pendulum and G as the acceleration of gravity either in m/s or as input from the keyboard. Display the time period rounded to 2 decimal places.
#include<stdio.h>
#include<math.h>
int main()
{
    float T,L,G;
    printf("Enter the Length of pendulum: ");
    scanf("%f",&L);
    printf("Enter the Gravity: ");
    scanf("%f",&G);
    T=2*3.14*sqrt(L)/G;
    printf("%.2f",T);
}