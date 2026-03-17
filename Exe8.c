#include <stdio.h>
#define RAIZDE3 1.7320508
int main(){
    float h, A, Ab, V;
    scanf ("%f %f", &h, &A);
    Ab = ((3 * A * A * RAIZDE3)/2);
    V = ((1.0/3.0) * Ab * h);

    printf ("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", V);

    return 0 ;
}