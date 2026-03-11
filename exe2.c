#include <stdio.h>

int main(){
	float salmin, qtdkw, custokw, consumo, custod;
	scanf("%f", &salmin);
    scanf("%f", &qtdkw);
    custokw = 0.7*salmin/100.0;
    consumo = custokw*qtdkw;
    custod = consumo *0.9;

	printf("Custo por kW: R$ %.2F \n", custokw);
	printf("Custo do consumo: R$ %.2F \n", consumo);
	printf("Custo com desconto: R$ %.2F \n", custod);

	return 0;

}