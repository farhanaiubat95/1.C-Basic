//Write a C program to Find vowel or consonant using switch case.
#include<stdio.h>
void main()
{
    char ch;

    printf("\nEnter a character =");

    scanf("%c",&ch);

   switch(ch){
       case 'a':
       printf("%c is Vowel",ch);
       break;
        case 'e':
       printf("%c is Vowel",ch);
       break;
        case 'i':
       printf("%c is Vowel",ch);
       break;
        case 'o':
       printf("%c is Vowel",ch);
       break;
        case 'u':
       printf("%c is Vowel",ch);
       break;
       case 'A':
       printf("%c is Vowel",ch);
       break;
        case 'E':
       printf("%c is Vowel",ch);
       break;
        case 'I':
       printf("%c is Vowel",ch);
       break;
        case 'O':
       printf("%c is Vowel",ch);
       break;
        case 'U':
       printf("%c is Vowel",ch);
       break;
        default:
            printf("%c is Consonent",ch);
   }
}
