#include <stdio.h>

int main(){
    int Seg, Min, Hr, Temp;
    scanf ("%d", &Hr);
    scanf ("%d", &Min);
    scanf ("%d", &Seg);
    Temp = (3600 * Hr + 60 * Min + Seg);
    printf ("O TEMPO EM SEGUNDOS E = %d\n", Temp);
    return 0;
}