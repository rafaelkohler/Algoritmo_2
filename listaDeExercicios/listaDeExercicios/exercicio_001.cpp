#include <iostream>
#include <cmath>

double lerNumeros (){
    double a;
    printf("Favor informar um numero: ");
    scanf("%lf", &a);
    return a;
}

double calcula (double x1, double y1, double x2, double y2) {
    double d;
    d = sqrt(pow((x2 - x1), 2) + (pow((y2 - y1), 2)));
    return d;
}

int main(){
    
    double x1 = lerNumeros();
    double y1 = lerNumeros();
    double x2 = lerNumeros();
    double y2 = lerNumeros();
    
    double result = calcula(x1, y1, x2, y2);
    printf("\nExercicio_001\n");
    printf("Valor do resultado eh: %.2f\n\n\n", result);
    
}
