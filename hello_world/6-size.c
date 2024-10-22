#include <stdio.h>

/**
* main - entry
*
*
* Return: operation was good
*/

int main()
{
    printf("Taille d'un char : %lu octets\n", sizeof(char));
    printf("Taille d'un int : %lu octets\n", sizeof(int));
    printf("Taille d'un long : %lu octets\n", sizeof(long));
    printf("Taille d'un long long : %lu octets\n", sizeof(long long));
    printf("Taille d'un float : %lu octets\n", sizeof(float));
    return (0);
}
