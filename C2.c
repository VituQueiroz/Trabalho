#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float sal;
    float desconto;
    printf("Digite seu salário: ");
    scanf("%f", &sal);
    if (sal <= 1212){
        desconto = sal * 0.075;
    } else if (sal >= 1212.01 && sal<= 2427.35 ){
        desconto = sal * 0.09;
    } else if(sal >= 2427.37 && sal<= 3641.03){
        desconto = sal * 0.12;
    } else if(sal >= 3641.05 && sal<= 7087.22){
        desconto = sal * 0.14;
    } else if (sal > 7087.22){
        desconto = sal - 828.39;
    }
    printf("O desconto é de: %.2f", desconto);


return 0;
}
