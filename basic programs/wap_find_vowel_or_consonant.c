//wap to find whether the entered lowercase character is a vowel or a consonant
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a lowercase alphabet(a-z):\n");
    scanf("%c",&ch);
    if(ch <'a' || ch > 'z')
    {
        printf("\nCharacter not a lower cased alphabet");
    }
    else

        switch(ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            printf("\nCharacter is a vowel");
            break;
            default:
            printf("\nCharacter is a consonant");
            break;
        }
    }

