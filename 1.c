#include <stdio.h>
#include <conio.h>

int main()
{
    int Year;

    printf("Enter a year : ");
    scanf("%d", &Year);

    if (Year % 400 == 0)
    {
        printf("%d is leap year", Year);
    }

    else if (Year % 100 == 0)
    {
        printf("%d is not leap year", Year);
    }

    else if (Year % 4 == 0)
    {
        printf("%d is leap year", Year);
    }

    else
    {
        printf("%d is not leap year", Year);
    }

    return 0;
    getch();
}