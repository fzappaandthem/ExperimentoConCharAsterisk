#include <stdio.h>
#include <stdlib.h>

int main()
{
     
    char s[10] ;

    for ( int i = 1 ; i < 10 ; i ++)
    {
        *(s+i) = 'A'+i;
    }
    *s = 'A';
    printf("El valor de s es: %s\n", s);

    *s = 33; // signo de exclamación
    *(s+1) = 7; // bell (suena)

    printf("El valor de s es (Acá es donde suena -Bell en lugar de 'B'-): %s\n", s);
    *(s+1) = 'B'; // bell (suena)
    *(s+3) = 0; // null

    printf("El valor de s es (acá le pongo un 0 en la posición 3!): %s\n", s);

    puts("Un cero en la posición 3, es lo mismo que un '\\0', ¿por qué? porque en el ascii '0' es null");

    *s = 'C'; // null

    printf("El valor de s es: %s\n", s);
    *(s+1) = 0; // null

    printf("El valor de s es (puse un '0' en la posición 1): %s\n", s);


    return 0 ;
}