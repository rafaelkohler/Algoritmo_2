#include <iostream>

int main() {
    
    //while (true) { //laco infinito, )jogos, relogio, sistema de seguranca, seervicos secundario do windows)
    //    printf("a");
    //}
    
    int a = 0;
    while (a < 5) {
        printf("%i\t", a);
        a++; // a = a +1; incremento
    }
    printf("\n\n=============================\n\n");
    
    while (a <= 5) { // a variavel saiu do laco anterior com o valor de 5, por isso imprime somente o 5 na tela.
        printf("%i\t", a);
        a++; // a = a +1; incremento
    }
    
    printf("\n\n=========  DO WHILE  =========\n\n");
    
    
    do { // a variavel a chega com 5 neste DoWhile - por isso printa o 6
        printf("%i\t", a);
        a++; // a = a +1; incremento
    } while (a <= 5);
    
    printf("\n\n=========  DO WHILE  =========\n\n");
    
    
    do { // a variavel a chega com 5 neste DoWhile - por isso printa o 6
        a++; // a = a +1; incremento
        printf("%i\t", a);
    } while (a <= 5);
}
