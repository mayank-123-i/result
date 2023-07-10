#include <stdio.h>
#include <conio.h>

int main()
{

  int year;

  printf("Enter Year : ");
  scanf("%d", &year);

  if (year % 400 == 0)
  {
    printf("%d Is leap year", year);
  }
  else if (year % 100 == 0)
  {
    printf("%d Is not leap year", year);
  }
  else if (year % 4 == 0)
  {
    printf("%d Is leap year", year);
  }

  else
  {
    printf("%d is not leap year", year);
  }

  return 0;
}