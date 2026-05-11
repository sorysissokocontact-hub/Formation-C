
// EXERCICE 04 — Erreurs volontaires
// VERSION AVEC ERREUR (ne compile pas)
// #include <stdilib.h>
//  <stdio.h>         <-include manquant
// int main(int argc, const char * argv [])  <- accolade manquante
//      printf("Hello, World!\nBonjour Sory!\n");
//      return 0 <- point virgule manquant
//
//
// }

// CE QUE LE COMPILATEUR A DIT
// Excpected identifier or '(' (ligne 18)
// Excpected identifier or '(' (ligne 24)
// Extraneous closing brace ('}') (ligne27)


// VERSION CORRIGEE (compile correctement)
#include <stdlib.h>
#include <stdio.h> // include présent


int main(int argc , const char * argv[]) { // accolade présente
    printf("Hello, World!\nBonjour Sory!\n");
    return 0;// point virgule présent
    }

