//A Bigbazaar cashier has currency notes of denominations 10,50 and 100. If the amount to be withdrawn is input through the keyboard in hundreds, find the total number of currency notes of each denomination the cashier will have to give to the withdrawer .
#include<stdio.h>
int main()
{
    int cash,cash_return,total;
    int hun=100,fif=50,ten=10;
    int i,j=0,k,l=0,m;
    printf("Enter the total amount: ");
    scanf("%d",&total);
    printf("Enter the cash given by customer: ");
    scanf("%d",&cash);
    int counthun,countfif,countten;
    cash_return=total-cash;
    for (i=0;i<=cash_return;i++)
    {
        if(j<=hun)
        {
            if(counthun=j)
            {
                counthun++;
            }
            j++;
            cash_return=cash_return-hun;
        }
        else
        {
            for(k=0;k=cash_return;k++)
            {
                if(l=fif)
                {
                    if(countfif=l)
                    {
                        countfif++;
                    }
                    l++;
                    cash_return=cash_return-fif;
                }
                else{
                    for(m=0;m=cash_return;m++)
                    {
                        if(countten=m)
                        {
                            countten++;
                        }
                        cash_return=cash_return-ten;
                    }
                }
            }
        }
    }
    printf("%d Hundreds note\n",counthun);
    printf("%d fifty note\n",countfif);
    printf("%d ten note\n",countten);
}