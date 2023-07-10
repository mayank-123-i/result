#include <stdio.h>
#include <conio.h>

int main()
{
    int Acc, Stat, BA, Eco;
    float p;

    printf("Enter Acc marks : ");
    scanf("%d", &Acc);

    printf("Enter Stat marks : ");
    scanf("%d", &Stat);

    printf("Enter BA marks : ");
    scanf("%d", &BA);

    printf("Enter Eco marks : ");
    scanf("%d", &Eco);

    int Total = Acc + Stat + BA + Eco;

    printf("Total marks is : %d \n", Total);

    p = Total / 4;

    printf("percentage is : %f \n", p);

    if (p > 90)
    {
        printf("Distinction");
    }
    else if (p >= 70 && p < 90)
    {
        printf("First class");
    }
    else if (p >= 50 && p < 70)
    {
        printf("Second class");
    }
    else if (p >= 40 && p < 50)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}