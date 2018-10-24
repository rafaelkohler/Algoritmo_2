#include <iostream>

float lerSalario(){
    float salario = 0;
    printf("Favor informar o seu salario: ");
    scanf("%f", &salario);
    return salario;
}

float calculaIR(float salario, float aliquota, float deducao){
    return (salario * aliquota) - deducao;
}

float IR(float sal) {
    float ir;
    if(sal <= 1903.98) {
        printf("Isento\n");
    } else if (sal <= 2826.65){
        ir = calculaIR(sal, 0.075, 142.8);
        printf("Aliquota: 7.5%%, deducao: 142.8\n");
        printf("Valor IR: %.2f\n", ir);
        printf("Sobrou: %.2f", sal - ir);
    } else if (sal <= 3751.05) {
        ir = calculaIR(sal, 0.15, 354.8);
        printf("Aliquota: 15%%, deducao: 354.8\n");
        printf("Valor IR: %.2f\n", ir);
        printf("Sobrou: %.2f", sal - ir);
    } else if (sal <= 4664.68) {
        ir = calculaIR(sal, 0.225, 636.13);
        printf("Aliquota: 22.5%%, deducao: 636.13\n");
        printf("Valor IR: %.2f\n", ir);
        printf("Sobrou: %.2f", sal - ir);
    } else {
        (sal >= 4664.68);
        ir = calculaIR(sal, 0.275, 869.36);
        printf("Aliquota: 27.5%%, deducao: 869.36\n");
        printf("Valor IR: %.2f\n", ir);
        printf("Sobrou: %.2f", sal - ir);
    } return ir;
}


int main() {
    float salario = lerSalario();
    IR(salario);
    printf("\n\n");
    system("pause");
}
