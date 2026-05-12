#include <stdlib.h>
#include <stdio.h>

int main(int argc,const char * argv[]) {
    
    int age;
    printf("Quel est ton age ?\n");
    scanf("%d", &age);
    
    if(age>=18){
        printf("Tu as %d ans et tu es majeur.\n", age);
    }
    else if(age<18){
        printf("Tu as %d ans et tu es mineur.\n", age);
    }
    else{
        printf("Erreur.\n");
    }
    return 0;
}
