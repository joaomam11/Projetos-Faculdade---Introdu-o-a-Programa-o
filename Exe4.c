#include <stdio.h>
#define PI 3.14159
int main(){
 float R, Alt, Ac, Al, At, C;
    scanf("%f", &R);
    scanf("%f", &Alt);
    Ac = (PI * R * R);
    Al = (2 * PI * R * Alt);
    At = (2 * Ac + Al);
    C = (100 * At);
    printf ("O VALOR DO CUSTO E = %.2f\n",C );
	return 0;

}