#include <stdlib.h>
#include <stdio.h>

int main(int argc,const char * argv[]){
    
    float nombre1,nombre2;
    
    printf("Entrez le nombre 1:\n");
    scanf("%f",&nombre1);
    
    printf("Entrez le nombre 2:\n");
    scanf("%f",&nombre2);
    
    printf("Somme : %.2f\n",nombre1 + nombre2);
    printf("Difference : %.2f\n",nombre1 - nombre2);
    printf("Produit : %.2f\n",nombre1 * nombre2);
    
    if(nombre2==0)
    {
        printf("Division impossible.\n");
    }
    else
    {
        printf("Division : %.2f\n",nombre1 / nombre2);
    }
    
    return 0 ;
}
