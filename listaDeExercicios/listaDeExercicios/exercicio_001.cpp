#include <iostream>
#include <cmath>

double lerNumeros (){
    double a;
    printf("Favor informar um numero: ");
    scanf("%lf", &a);
    return a;
}

double calculaEx01 (double x1, double y1, double x2, double y2) {
    double d;
    d = sqrt(pow((x2 - x1), 2) + (pow((y2 - y1), 2)));
    return d;
}

double exponencial (double x, double y) {
    double result;
    return result = pow((x + y), 2);
}

int main(){
    
    printf("Exercicio_001\n");
    double x1 = lerNumeros();
    double y1 = lerNumeros();
    double x2 = lerNumeros();
    double y2 = lerNumeros();
    
    double result = calculaEx01(x1, y1, x2, y2);
    printf("A distancia entre os dois pontos do exercicio 01 eh: %.2f\n\n\n", result);
    
    printf("\nExercicio_002\n");
    printf("Favor informar 3 numeros inteiros positivos: \n");
    double a = lerNumeros();
    double b = lerNumeros();
    double c = lerNumeros();
    
    double r = exponencial(a, b);
    double s = exponencial(b, c);
    
    double d = (r + s)/2;
    printf("Valor do resultado do exercicio 02 eh: %.2f\n\n\n", d);
    
}
