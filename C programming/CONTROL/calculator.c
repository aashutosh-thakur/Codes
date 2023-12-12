//Implement a program that calculates the area of a rectangle and a circle based on user input.
#include<stdio.h>
int main()
{
    start:
    int l, w, r, a, area_of_rectangle, area_of_circle;
    printf("\narea_of_rectangle=1\narea_of_circle=2\nexit=3");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d\n %d\n %d\n", &l, &w, &r);
    switch(a)
    {
        case 1 :
           area_of_rectangle = l * w;
            {
                printf("%d",area_of_rectangle);
            }
            goto start;
        case 2 :
           area_of_circle= 3.14 * r * r;
            {
                printf("%d",area_of_circle);
            }
            goto start;
    }
}