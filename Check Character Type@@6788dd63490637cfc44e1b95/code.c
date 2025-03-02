// Your code here...
#include<stdio.h>
int main()
{
    char c;
    scanf("%c",c); 
    if(c>=0 && c<=9)
    printf("Digit");
    else if (((int)c>=65 && (int)c<=90) || ((int)c>=97 && (int)c<=122))
    {
        if (c==a||c==A||c==e||c==E||c==i||c==I||c==o||c==O||c==u||c==U)
        printf("Vowel");
        else printf("Consonant");
    }
    else printf("Special Character");
    return 0;
}