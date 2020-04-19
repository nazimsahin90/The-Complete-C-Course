#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    The nine most commonly used functions in the string library are:

    strcat - concatenate two strings
    strchr - string scanning operation
    strcmp - compare two strings
    strcpy - copy a string
    strlen - get string length
    strncat - concatenate one string with part of another
    strncmp - compare parts of two strings
    strncpy - copy part of a string
    strrchr - string scanning operation
    */

    char str1[100]="Hello";
    char str2[100]="World";
    printf("str1: ");
    puts(str1);
    printf("str2: ");
    puts(str2);

    printf("Length of str1: %d\n",strlen(str1));
    printf("Length of str2: %d\n",strlen(str2));

     char s1[20] = "BeginnersBook";
     char s2[20] = "BeginnersBook.COM";
     if (strcmp(s1, s2) ==0)
     {
        printf("string 1 and string 2 are equal");
     }else
      {
         printf("string 1 and 2 are different");
      }

      char s1[30] = "string 1";
     char s2[30] = "string 2 : I’m gonna copied into s1";
     /* this function has copied s2 into s1*/
     strcpy(s1,s2);
     printf("String s1 is: %s", s1);

    return 0;
}
