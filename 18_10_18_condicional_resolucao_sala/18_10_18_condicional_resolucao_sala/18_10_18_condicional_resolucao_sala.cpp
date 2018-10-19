#include <iostream>

int lerNumeroInteiro(){
    int a;
    printf("Favor digitar um numero intiro: ");
    scanf("%i", &a);
    return a;
}
int maiorValorInteiro(int a, int b, int c, int d){
    int maior = a;
    
    if(maior < b) {
        maior = b;
    }
    if (maior < c) {
        maior = c;
    }
    if (maior < d) {
        maior = d;
    }
    return maior;
}

float media(int a, int b, int c, int d) {
    float mediaResult = (((float)a + (float)b + (float)c + (float)d) / 4);
    return mediaResult;
}

void maioresQueMedia (int a, int b, int c, int d, float media) {
    printf("\nOs valores maiores que a media sao: ");
    
    if (a > media){
        printf("%i ", a);
    }
    if (b > media){
        printf("%i ", b);
    }
    if (c > media){
        printf("%i ", c);
    }
    if (d >= media){
        printf("%i ", d);
    }
}

int main(){
    
    int v1 = lerNumeroInteiro();
    int v2 = lerNumeroInteiro();
    int v3 = lerNumeroInteiro();
    int v4 = lerNumeroInteiro();
    int maior = maiorValorInteiro(v1, v2, v3, v4);
    float mediaNum = media(v1, v2, v3, v4);

    printf("\nO maior numero eh: %i", maior);
    printf("\nA media dos numeros eh: %.2f", mediaNum);
    maioresQueMedia(v1, v2, v3, v4, mediaNum);
  
    
    return 0;
}
