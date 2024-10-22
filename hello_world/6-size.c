#include <stdio.h>

/**
* main - entry
*
*
* Return: operation was good
*/

int main()
{
    printf("Taille d'un char : %lu byte(s)\n", sizeof(char));
    printf("Taille d'un int : %lu byte(s)\n", sizeof(int));
    printf("Taille d'un long : %lu byte(s)\n", sizeof(long));
    printf("Taille d'un long long : %lu byte(s)\n", sizeof(long long));
    printf("Taille d'un float : %lu byte(s)\n", sizeof(float));
    return (0);
}
