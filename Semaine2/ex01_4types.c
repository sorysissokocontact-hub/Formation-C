#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int entier = 42;
    float decimale = 3.14;
    double precis = 2.71828;
    char lettre = 'A';
    
    printf("int : %d\n", entier);
    printf("float : %.2f\n", decimale);
    printf("double : %lf\n", precis);
    printf("lettre : %c\n", lettre);
    
    return 0;
    
    }
