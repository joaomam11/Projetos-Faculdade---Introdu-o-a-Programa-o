#include <stdio.h>
#define ANO 365.25
#define HORA 24

int main() {
    int idade;
    float batimentos;
    scanf ("%d", &idade);
    batimentos = idade*ANO*HORA*60*60;
    printf("O CORACAO BATEU %.2f VEZES\n",batimentos);
    return 0;
}
