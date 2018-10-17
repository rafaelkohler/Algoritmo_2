#include <iostream>

float soma(float x, float y){
    float a = x + y;
    return a;
}

float subtracao(float x, float y){
    float a = x - y;
    return a;
}

double divi(double x, double y){
    double a = x / y;
    return (double) a;
}

float mult(float x, float y){
    float a = x * y;
    return a;
}

double lerNumeroInteiro(){
    float a;
    printf("\nFavor digitar um numero inteiro: ");
    scanf("%f", &a);
    return a;
}

int main() {
   
    double primeiroValor = lerNumeroInteiro();
    double segundoValor = lerNumeroInteiro();
    
    float r = soma(primeiroValor, segundoValor);
    float s = subtracao(primeiroValor, segundoValor);
    double d = divi((double)primeiroValor, (double)segundoValor);
    float m = mult(primeiroValor, segundoValor);
    
    printf("\nValor da soma: %.2f\n", r);
    printf("\nValor da subtracao: %.2f\n", s);
    printf("\nValor da divisao: %.2f\n", d);
    printf("\nValor da multiplicacao: %.2f\n", m);
    
    system("pause");
}
