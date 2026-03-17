#include <stdio.h>

int main(){
    int bin, n;
    scanf ("%d", &bin);
        if (bin >= 0 && bin <= 255){
            for (n = 128; n > 0; n = n/2){
            if (bin >= n){
                printf ("1");
                bin = bin - n;
            } else {
                printf ("0");
            }
            } 
        }else {
            printf ("Numero invalido!\n");
        }

    return 0;
}