#include<stdio.h>

int main(){
    int nbr,i; 

    printf("entrer un nbr: ");
    scanf("%d",&nbr);
    for(i=0;i<10;i++){
        printf("%d * %d = %d\n",nbr,i+1,nbr*(i+1));
    }

}