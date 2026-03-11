#include <stdio.h>

int main(){
	double valor, arr1, arr2, arr3;
    int vl;
    scanf("%lf", &valor);
    vl = (valor*10 + 0.5);
    arr1 = vl/10.0;
    printf ("%lf\n",arr1);
    vl =(valor*100 + 0.5);
    arr2 = vl/100.0;
    printf("%lf\n",arr2);
    vl =(valor*1000 + 0.5);
    arr3 = vl/1000.0;
    printf("%lf\n",arr3);
    return 0;
}