#include <stdio.h>
#include <conio.h>

int main()
{
    char c;

    printf("Enter any alphabet : ");
    scanf("%c", &c);

    switch (c)
    {
    case 'a':
        printf("Vowel");
        break;

    case 'e':
        printf("Vowel");
        break;

    case 'i':
        printf("Vowel");
        break;

    case 'o':
        printf("Vowel");
        break;

    case 'u':
        printf("Vowel");
        break;

    case 'A':
        printf("Vowel");
        break;

    case 'E':
        printf("Vowel");
        break;

    case 'I':
        printf("Vowel");
        break;

    case 'O':
        printf("Vowel");
        break;

    case 'U':
        printf("Vowel");
        break;
    default:
        printf("Constant");

        break;
    }

    return 0;
}