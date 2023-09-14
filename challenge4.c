#include<stdio.h>

int main(){
    int i=0, n, k=0,j,s=0,max,tab[50];

   printf("combien de nbr voulez vous entrer: ");
   scanf("%d",&n);
   for(i=0;i<n;i++){
        printf("entrer le nbr %d: ",i);
        scanf("%d",&j);

        if(j<100 && j%10==0){
            s+=j;
            tab[k++]=j;
        }

   }
   max=tab[0];
   for(j=0;j<=k;j++){
        if(tab[j]>max)
            max=tab[j];
   }

   printf("la somme est %d et le max est %d",s,max);


}