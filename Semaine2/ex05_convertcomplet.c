#include <stdlib.h>
#include <stdio.h>
#define KELVIN 273.15

int main(int argc,const char * argv[]){
    
    float celsius;
    printf("Entrer la température en celsius :\n");
    scanf("%f", &celsius);
    
    float fahrenheit = (celsius * 9.0/5.0)+32;
    float kelvin = celsius + KELVIN;
    
    printf("Température celsius : %.2f\n", celsius);
    printf("%.2f c = %.2f F\n",celsius,fahrenheit);
    printf("%.2f c = %.2f K\n",celsius,kelvin);
    
    return 0;
    
}
