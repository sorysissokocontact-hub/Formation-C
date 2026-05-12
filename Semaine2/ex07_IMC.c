#include <stdlib.h>
#include <stdio.h>

int main(int argc,const char * argv[]){
    
    float poids;
    float taille;
    
    printf("Veuillez entrer votre poids :\n");
    scanf("%f",&poids);
    printf("Veuillez entrer votre taille :\n");
    scanf("%f",&taille);
    
    float imc = poids/(taille*taille);
    
    if(imc<18.5) {
        printf("Vous etes maigre.\n");
    }
    else if(imc<25) {
        printf("Votre poids est normal.\n");
    }
    else if(imc<30) {
        printf("Vous etes en surpoids.\n");
    }
    else {
        printf("Vous etes obèse.\n");
        
        return 0;
    }
}
