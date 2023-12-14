#include<stdio.h>
struct student
{
  int math;
  int cp;
  int foe;
  int cfcw;
  int total;
  int avg;
};

int main ()
{
  struct student m1;
  m1.math = 50;
  m1.cp = 60;
  m1.foe = 55;
  m1.cfcw = 65;
  m1.total = m1.math + m1.cp + m1.foe + m1.cfcw;
  m1.avg = m1.total / 4;
  printf ("%d", m1.total);
  printf ("\n%d", m1.avg);
  return 0;
}