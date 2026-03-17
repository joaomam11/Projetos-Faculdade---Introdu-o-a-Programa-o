#include <stdio.h>

int main(){
    float Pre, Dist, Imp, Total;
    scanf ("%f", &Pre);
    scanf ("%f", &Dist);
    scanf ("%f", &Imp);
    Total = (Pre + (Dist * Pre/100.0)+ (Imp * Pre/100.0));
    printf("O VALOR DO CARRO E = %.2f\n", Total);
    return 0;
}