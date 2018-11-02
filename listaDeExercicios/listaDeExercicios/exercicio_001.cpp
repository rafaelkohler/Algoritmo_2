#include <iostream>
#include <cmath>

double lerNumeros (){
    double a;
    printf("Favor informar um numero: ");
    scanf("%lf", &a);
    return a;
}

int lerNumerosInt () {
    int a;
    printf("Favor informar um numero: ");
    scanf("%i", &a);
    return a;
}

double exponencial (double x, double y) {
    double result;
    return result = pow((x + y), 2);
}
    
void exercicio001 () {
    double x1, y1, x2, y2, d;
    
    printf("----------------------------------------------------\n");
    printf("Exercicio_001\n");
    printf("Favor informar o primeiro numero: ");
    scanf("%lf", &x1);
    printf("Favor informar o segundo numero: ");
    scanf("%lf", &y1);
    printf("Favor informar o terceiro numero: ");
    scanf("%lf", &x2);
    printf("Favor informar o quarto numero: ");
    scanf("%lf", &y2);
        d = sqrt(pow((x2 - x1), 2) + (pow((y2 - y1), 2)));
    printf("A distancia entre os dois pontos do exercicio 01 eh: %.2f\n", d);
    printf("----------------------------------------------------\n");
}

void exercicio002(){
    double a, b, c, r, s, result;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_002\n");
    printf("Favor informar 3 numeros inteiros positivos: \n");
    printf("Favor informar o primeiro numero: ");
    scanf("%lf", &a);
    printf("Favor informar o segundo numero: ");
    scanf("%lf", &b);
    printf("Favor informar o terceiro numero: ");
    scanf("%lf", &c);
    
    r = pow((a + b), 2);
    s = pow((b + c), 2);
    result = (r + s)/2;
    
    printf("Valor do resultado do exercicio 02 eh: %.2f\n", result);
    printf("----------------------------------------------------\n");
}

void exercicio003(){
    int idadeDias, anos, meses, dias;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_003\n");
    printf("Favor informar a sua idade em dias: \n");
    scanf("%i", &idadeDias);
    
    anos = idadeDias /365;
    meses = (idadeDias - (anos *365)) /30;
    dias = idadeDias - ((anos * 365) + (meses * 30));
    
    printf("Você tem, %i anos %i meses e %i dias\n", anos, meses, dias);
    printf("----------------------------------------------------\n");
}

void exercico004(){
    double nota1, nota2, nota3, media;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_004\n");
    printf("Favor informar as suas 3 notas: ");
    printf("\nNota1: ");
    scanf("%lf", &nota1);
    printf("\nNota2: ");
    scanf("%lf", &nota2);
    printf("\nNota3: ");
    scanf("%lf", &nota3);
    
    media = (((nota1 * 2)+(nota2 * 3)+(nota3 * 5))/(2 + 3 + 5));
    
    printf("A sua media final eh: %.2lf\n", media);
    printf("----------------------------------------------------\n");

}

void exercicio005(){
    double valor, imposto, distr, result;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_005\n");
    printf("Favor informar o custo do veiculo: \n");
    scanf("%lf", &valor);
    
    distr = valor * 0.28;
    imposto = valor * 0.45;
    result = valor + distr + imposto;
    
    printf("O valor de fabrica do veiculo eh R$ %.2lf e o valor de venda ao consumidor eh R$ %.2lf\n", valor, result);
    printf("----------------------------------------------------\n");
    
}

void exercicio006(){
    int n, i, soma;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_006\n");
    printf("\n\tCalculo da soma dos n primeiros inteiros positivos\n");
    
    printf("\nDigite o valor de n: ");
    scanf("%d", &n);
    soma = 0;
    i = 1;
    
    while (i <= n) {
        soma = soma + i;
        i = i + 1;
    }
    printf("A soma dos %d primeiros inteiros positivos eh: %d\n", n, soma);
    printf("----------------------------------------------------\n");
}

void exercicio007(){
    int a, b;
   
    printf("----------------------------------------------------\n");
    printf("\nExercicio_007\n");
    printf("Favor informar o primeiro numero: ");
    scanf("%i", &a);
    printf("Favor informar o segundo numero: ");
    scanf("%i", &b);
        if (a > b) {
            if (a % b == 0) {
                printf("\nA eh multiplo de B\n");
                printf("----------------------------------------------------\n");
            } else {
                printf("\nA nao eh multiplo de B\n");
                printf("----------------------------------------------------\n");
            }
        if (b > a) {
            if (b % a == 0) {
                printf("\nB eh multiplo de A\n");
                printf("----------------------------------------------------\n");
            } else {
                printf("\nB nao eh multiplo de A\n");
                printf("----------------------------------------------------\n");
            }
        }
    }
}

void exercicio008(){
    int idade;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_008\n");
    printf("Favor informar a sua idade: \n");
    scanf("%i", &idade);
    
    if (idade <5){
        printf("\nA idade nao possui categoria\n");
        printf("----------------------------------------------------\n");
    } else if (idade >= 5 && idade <=7){
        printf("\nVoce eh da categoria INFANTIL A\n");
        printf("----------------------------------------------------\n");
    } else if (idade >=8 && idade <=10){
        printf("\nVoce eh da categoria INFANTIL B\n");
        printf("----------------------------------------------------\n");
    } else if (idade >=11 && idade <=13){
        printf("\nVoce eh da categoria JUVENIL A\n");
        printf("----------------------------------------------------\n");
    } else if (idade >=14 && idade <=17){
        printf("\nVoce eh da categoria JUVENIL B\n");
        printf("----------------------------------------------------\n");
    } else (idade >=18);
        printf("\nVoce eh da categoria ADULTO\n");
        printf("----------------------------------------------------\n");
}


int main(){
    
    
}
