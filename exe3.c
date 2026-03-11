#include <stdio.h>

int main(){
	float pol, F, C, mil;
    scanf("%f", &F);
    scanf("%f", &pol);
    C = (5*(F-32))/9.0;
    mil = pol*25.4;
    printf("O VALOR EM CELSIUS = %.2f \n", C);
	printf("A QUANTIDADE DE CHUVA E = %.2f \n", mil);
return 0;

}