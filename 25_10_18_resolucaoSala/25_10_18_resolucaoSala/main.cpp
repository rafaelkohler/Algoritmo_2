#include <iostream>

// ler 5 valores inteiros, apenas 1 scanf.
// apos a leitura informe se os valores estavam em ordem crescente.
// utilizar apenas 4 variaveis.

int lerNumeroInteiro(){
    int a;
    printf("Favor digitar um numero inteiro: ");
    scanf("%i", &a);
    return a;
}

void detectarValoresEmOrdem() {
    int i = 0; //i iterado
    int anterior = 0, numero = 0;
    int crescente = 1; //1 eh crescente.
    
    while (i < 5) {
        numero = lerNumeroInteiro();
        if (i != 0) {
            if (anterior >= numero){
                crescente = 0;
            }
        }
        anterior = numero;
        i++;
    }
    if(crescente == 1){
        printf("Os numeros estao em ordem crescente");
    } else {
        printf("Os numeros nao estavam em ordem crescente");
    }
}

int main() {

    detectarValoresEmOrdem();
    
}
