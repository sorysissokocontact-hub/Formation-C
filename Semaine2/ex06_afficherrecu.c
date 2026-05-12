#include <stdlib.h>
#include <stdio.h>
#define TVA 0.20

int main(int argc,const char * argv[]) {
    
    float prixHT;
    int quantité;
    
    printf("Veuillez entrer le prix HT :\n");
    scanf("%f", &prixHT);
    
    printf("Veuillez entrer les quantités :\n");
    scanf("%d", &quantité);
    
    float prixTotalHT = prixHT * quantité;
    float prixTVA = prixTotalHT * TVA;
    float prixTotalTTC = prixTotalHT + prixTVA;
    
    printf("--- RECU ---\n");
    printf("Prix HT : %.2f euros\n", prixHT);
    printf("Quantité : %d\n", quantité);
    printf("Total HT : %.2f euros\n", prixTotalHT);
    printf("euros TVA (20%%): %.2f euros\n", prixTVA);
    printf("Total TTC : %.2f euros\n", prixTotalTTC);
    printf("-------------\n");
    
    return 0;
    
}

