#include<stdio.h>
int main () 
{
  int i, j, num, k;
  printf ("Enter a number : ");
  scanf ("%d", &num);
  for (i = 1; i <= num; i++)
    {
    for (j = 1; j <= num-i+2 ; j++)
	{
	  printf ("* ");
	}
      printf ("\n");
    }
    for (i = 1; i <= num-1; i++)
    {
    for (j = 1; j <= i+num-1 ; j++)
	{
	    printf ("* ");
	}
      printf ("\n");
    }
}
