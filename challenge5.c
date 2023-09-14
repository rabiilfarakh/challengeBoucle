#include <stdio.h>

int main() {
    int nombre, nombreInverse = 0,chiffre;

    printf("Entrez un entier : ");
    scanf("%d", &nombre);

 
    while (nombre != 0) {
        chiffre = nombre % 10; 
        nombreInverse = nombreInverse * 10 + chiffre; 
        nombre = nombre / 10; 
    }

    printf("L'entier inverse est : %d\n", nombreInverse);

}
