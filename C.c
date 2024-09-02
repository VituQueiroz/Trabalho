#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    float real;
    float dolar;

    printf("Digite o valor em real: ");
    scanf("%f", &real);
    dolar = real * 5,51;
    printf("O valor em dolar é: %.2f", dolar);

return 0;
}
