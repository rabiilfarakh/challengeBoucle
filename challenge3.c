#include <stdio.h>

int main() {
    int nombre, estPremier = 1;

    printf("Entrez un entier : ");
    scanf("%d", &nombre);

    if (nombre <= 1) 
        estPremier = 0;
    else {
        for (int i = 2; i * i <= nombre; i++) {
            if (nombre % i == 0) 
                estPremier = 0;
        }
    }

    if (estPremier) {
        printf("%d est premier.\n", nombre);
    } else {
        printf("%d nest pas premier.\n", nombre);
    }

}