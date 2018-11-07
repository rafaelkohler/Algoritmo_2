#include <iostream>

void exercicio001(){
    //vetor Par
    int par [10];
    
    for (int i = 0; i < 10; i++) {
        par[i] = (i + 1) * 2;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", par[i]);
    }
}

void exercicio002(){
    int par[10], iVet2[10];
    
    for (int i = 0; i < 10; i++) {
        par[i] = (i + 1) * 2;
        
    }
    printf("Numeros Pares      -->>   ");
    for (int i = 0; i < 10; i++) {
        printf("%2d  ", par[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        iVet2[i] = i + 10;
    }
    printf("\nNumeros de 10 a 19 -->>   ");
    for (int i = 0; i < 10; i++) {
        printf("%d  ", iVet2[i]);
    }
    
    printf("\nSoma               -->>   ");
    for (int i = 0; i < 10; i++) {
        printf("%d  ", iVet2[i] + par[i]);
    }

}

void exercicio003(){
    int iVet[8], soma=0, iQtde=0, somaTotal=0;
    
    for(int i=0; i<8; i++){
        printf("Entre com o numero %i = ", i + 1);
        scanf("%d", &iVet[i]);
    }
    for(int i=0; i<8; i++){
        somaTotal += iVet[i];
        if(iVet[i] > 30){
            iQtde++;
            printf("\nNumero maior que 30 = %i", iVet[i]);
            soma += iVet[i];
        }
    }
    printf("\n\nA quantidade de numeros maior que 30 eh: %d", iQtde);
    printf("\nA soma dos numeros maiores que 30 eh: %d", soma);
    printf("\nA soma de todos os numeros eh: %d\n\n", somaTotal);
    
}

void exercicio004(){
    int iMatrizA[2][2], iMatrizB[2][2], iMatrizResultado[2][2], i=0, j=0, soma=0;
   
    
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Digite os valores da linha %i coluna %i = ", i, j);
            scanf("%i", &iMatrizA[i][j]);
        } printf("\n");
    }
    
    printf("\nEsta eh a primeira matriz\n\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("\t%3i", iMatrizA[i][j]);
        } printf("\n\n");
    }
    
    for(i=0; i<2; i++){
        soma = soma +iMatrizA [i][i];
    } printf("\nA soma da diagonal da matriz 1 eh = %i \n\n\n\n", soma);
    
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Digite os valores da SEGUNDA matriz, linha %i coluna %i = ", i, j);
            scanf("%i", &iMatrizB[i][j]);
        } printf("\n");
    }
    
    printf("\nEsta eh a segunda matriz\n\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("\t%3i", iMatrizB[i][j]);
        } printf("\n\n");
    }
    
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            iMatrizResultado[i][j] = iMatrizA[i][j] + iMatrizB[i][j];
        }
    }

    printf("\nEsta eh a SOMA das duas matrizes\n\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("\t%3i", iMatrizResultado[i][j]);
        } printf("\n\n");
    }
    
}

void exercicio005(){
    int iMatrizA[3][3], i=0, j=0, somaPrincipal=0, somaSecundaria=0, somaTotal=0;
    
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite os valores da linha %i coluna %i = ", i, j);
            scanf("%i", &iMatrizA[i][j]);
        } printf("\n");
    }
    
    printf("\nEsta eh a matriz\n\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("\t%3i", iMatrizA[i][j]);
        } printf("\n\n");
    }
    
    for(i=0; i<3; i++){
        somaPrincipal += iMatrizA[i][i];
    }
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i!=j){
                somaSecundaria += iMatrizA[i][j];
            }
        }
    }
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            somaTotal += iMatrizA[i][j];
        }
    }
    
    printf("\nA soma da diagonal principal eh = %i\n", somaPrincipal);
    printf("\nA soma das diagonais secundarias eh = %i\n", somaSecundaria);
    printf("\nA soma de todos os valores da matriz eh = %i\n\n", somaTotal);
}

int main() {
    exercicio005();
}
