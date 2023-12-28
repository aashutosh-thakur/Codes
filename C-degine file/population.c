//In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percentage of literate men is 35 of the total population, write a program to find the total number of illiterate men and women if the population of the town is 80,000.
#include<stdio.h>
int main()
{
    int population=80000;
    int men_population,women_population,men_literate,women_literate,total_literate;
    int men_illiterate,women_illiterate;
    men_population=population*0.52;
    women_population=population-men_population;
    total_literate=population*0.48;
    men_literate=population*0.35;
    men_illiterate=men_population-men_literate;
    women_literate=total_literate-men_literate;
    women_illiterate=women_population-women_literate;
    printf("Total Population: %d",population);
    printf("\nTotal Literate: %d",total_literate);
    printf("\nMen Population: %d",men_population);
    printf("\nMen Literate: %d",men_literate);
    printf("\nMen Illiterate: %d",men_illiterate);
    printf("\nWomen Population: %d",women_population);
    printf("\nWomen Literate: %d",women_literate);
    printf("\nWomen Illiterate: %d",women_illiterate);

}