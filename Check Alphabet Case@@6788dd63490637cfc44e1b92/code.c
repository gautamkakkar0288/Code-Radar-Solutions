#include <stdio.h>
int main()
{
    char c;
    if (((int)c>95 && (int)c<123) || ((int)c>64 && (int)c<91))
    {
        if((int)c>95 && (int)c<123)
        printf ("Uppercase");
        else printf("Lowercase");
    }
    else printf("Not an alphabet");
    return 0;
}