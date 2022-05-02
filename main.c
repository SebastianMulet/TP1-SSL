#include <stdio.h>
#include <ctype.h>

int main ()
{
    //  Sebastian Mulet

    int caracter;

    while ( caracter != '\n' )
    {
        caracter = getchar();

        if ( isupper ( caracter ) )
        {
            putchar ( tolower ( caracter ) );
        }
        if ( islower ( caracter ) )
        {
            putchar ( toupper ( caracter ) );
        }
        if ( isdigit ( caracter ) )
        {
            
        }
        if ( ispunct ( caracter ) )
        {
            putchar ( caracter );
        }
    }
    return 0;
}