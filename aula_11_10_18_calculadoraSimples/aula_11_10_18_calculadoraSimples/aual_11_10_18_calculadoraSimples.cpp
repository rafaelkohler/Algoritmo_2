#include <iostream>
#include <stdio.h>

double soma(double x, double y){
    double resultSoma = x + y;
    return resultSoma;
}

double subtracao(double x, double y){
    double resultSubtracao = x - y;
    return resultSubtracao;
}

double multiplicacao(double x, double y){
    double resultMultiplicacao = x * y;
    return resultMultiplicacao;
}

double divisao(double x, double y){
    double resultDivisao = x / y;
    return resultDivisao;
}

double lerNumero(){
    printf("\nFavor digitar o valor da operacao: ");
    double numero;
    scanf("%lf", &numero);
    return numero;
}

int main(){
    int operacao, resp;
    
    do
    {
    printf("\nQual operação você deseja executar?\n1. soma\n2. subtracao\n3. multiplicacao\n4. divisao\n\n");
    scanf("%i", &operacao);
    switch (operacao) {
        case 1 :{
            double x = lerNumero();
            double y = lerNumero();
            double r = soma(x, y);
            printf("\nO resultado da soma eh: %.4lf", r);
        }
            break;
            
        case 2: {
            double s1 = lerNumero();
            double s2 = lerNumero();
            double s3 = subtracao(s1, s2);
            printf("\nO resultado da subtracao eh: %.4lf", s3);
        }
            break;
            
        case 3 : {
            double m1 = lerNumero();
            double m2 = lerNumero();
            double m3 = multiplicacao(m1, m2);
            printf("\nO resultado da multiplicacao eh: %.4lf", m3);
        }
            break;
            
        case 4 : {
            double d1 = lerNumero();
            double d2 = lerNumero();
            double d3 = divisao(d1, d2);
            printf("\nO resultado da divisao eh: %.4lf\n", d3);
        }
            break;
            
        default:
            
            break;
    }
        printf("\nVoce deseja fazer outra operacacao?\n");
        printf("\nDigite 1 para continuar ou 2 para sair.");
        scanf("%i", &resp);
        
    } while (resp == 1);

}

