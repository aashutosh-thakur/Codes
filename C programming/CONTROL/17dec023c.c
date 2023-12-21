#include<stdio.h>
int main ()  
{
int i, j, num, k;
printf ("Enter a number : ");
scanf ("%d", &num);
for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num - i + 1; j++)
	           {
	               printf (" ");
	           }
      for (j = 1; j <= num - i + 1; j++)
	   {
	      printf ("*");
	   }
       printf ("\n");
    }
    for (i = 1; i <= num; i++)
       {
            for (j = 1; j <= num - i + 1; j++)
	           {
	               printf (" ");
	           }
            for (k = 1; k <= i+1; k++)
	           {
	               printf ("* ");
	           }
            printf ("\n");
       }
}