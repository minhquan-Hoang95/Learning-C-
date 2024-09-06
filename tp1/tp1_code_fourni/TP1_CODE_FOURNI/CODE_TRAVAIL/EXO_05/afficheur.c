#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Affichage avec printf\n");
    fprintf(stdout, "Affichagec avec fprintf stdout\n");
    fprintf(stderr, "Affichage avec fprintf stderr\n");

    printf("Entrez un entier : ");
    scanf("%d", &n);
    printf("L'entier est : %d\n", n);

    return EXIT_SUCCESS;
}