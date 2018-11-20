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
    printf("----------------------------------------------------\n\n\n");
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
    printf("----------------------------------------------------\n\n\n");
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
    printf("----------------------------------------------------\n\n\n");
}

void exercicio004(){
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
    printf("----------------------------------------------------\n\n\n");

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
    printf("----------------------------------------------------\n\n\n");
    
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
    printf("----------------------------------------------------\n\n\n");
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
                printf("----------------------------------------------------\n\n\n");
            } else {
                printf("\nA nao eh multiplo de B\n");
                printf("----------------------------------------------------\n\n\n");
            }
        if (b > a) {
            if (b % a == 0) {
                printf("\nB eh multiplo de A\n");
                printf("----------------------------------------------------\n\n\n");
            } else {
                printf("\nB nao eh multiplo de A\n");
                printf("----------------------------------------------------\n\n\n");
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
        printf("----------------------------------------------------\n\n\n");
    } else if (idade >= 5 && idade <=7){
        printf("\nVoce eh da categoria INFANTIL A\n");
        printf("----------------------------------------------------\n\n\n");
    } else if (idade >=8 && idade <=10){
        printf("\nVoce eh da categoria INFANTIL B\n");
        printf("----------------------------------------------------\n\n\n");
    } else if (idade >=11 && idade <=13){
        printf("\nVoce eh da categoria JUVENIL A\n");
        printf("----------------------------------------------------\n\n\n");
    } else if (idade >=14 && idade <=17){
        printf("\nVoce eh da categoria JUVENIL B\n");
        printf("----------------------------------------------------\n\n\n");
    } else (idade >=18);
        printf("\nVoce eh da categoria ADULTO\n");
        printf("----------------------------------------------------\n\n\n");
}

void exercicio009(){
    double nota1, nota2, nota3, media;
    int operacao;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_009\n");
    printf("Favor informar as suas 3 notas: ");
    printf("\nNota1: ");
    scanf("%lf", &nota1);
    printf("Nota2: ");
    scanf("%lf", &nota2);
    printf("Nota3: ");
    scanf("%lf", &nota3);
    printf("\nEscolha o tipo de media que voce deseja calcular:\n  1. para aritmetica\n  2. para ponderada\n  3. para harmonica \n\n\t");
    scanf("%i", &operacao);
    
    switch (operacao) {
        case 1:
            media = (nota1 + nota2 + nota3)/3;
            printf("\n\nA media aritmetica eh: %.2lf\n\n", media);
            printf("----------------------------------------------------\n\n\n");
            break;
        case 2:
            media = ((nota1*3) + (nota2*3) + (nota3*4))/10;
            printf("\n\nA media ponderada eh: %.2lf\n\n", media);
            printf("----------------------------------------------------\n\n\n");
            break;
        case 3:
            media = (3/((1/nota1)+(1/nota2)+(1/nota3)));
            printf("\n\nA media harmonica eh: %.2lf\n\n", media);
            printf("----------------------------------------------------\n\n\n");
            break;
    }
}

void exercicio010(){
    double precoTotal, quant;
    int codigo;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_010\n");
    printf("Favor informar a quantidade de produtos comprados: \n");
    scanf("%lf", &quant);
    printf("\nFavor informar o codigo do produto:\n 1001 Maca\n 1324 Uva\n 6548 Banana\n 1987 Pera\n 7623 Manga \n\n\t");
    scanf("%i", &codigo);
    
    switch (codigo) {

        case 1001:
            precoTotal = quant * 5.32;
            printf("\nO preco a pagar por %.2lf Kg de Maca eh: R$ %.2lf\n", quant, precoTotal);
            printf("----------------------------------------------------\n\n\n");
            break;

        case 1324:
            precoTotal = quant * 6.45;
            printf("\nO preco a pagar por %.2lf Kg de Uva eh: R$ %.2lf\n", quant, precoTotal);
            printf("----------------------------------------------------\n\n\n");
            break;

        case 6548:
            precoTotal = quant * 2.37;
            printf("\nO preco a pagar por %.2lf Kg de Banana eh: R$ %.2lf\n", quant, precoTotal);
            printf("----------------------------------------------------\n\n\n");
            break;

        case 1987:
            precoTotal = quant * 5.32;
            printf("\nO preco a pagar por %.2lf Kg de Pera eh: R$ %.2lf\n", quant, precoTotal);
            printf("----------------------------------------------------\n\n\n");
            break;
        
        case 7603:
            precoTotal = quant * 6.45;
            printf("\nO preco a pagar por %.2lf Kg de Manga eh: R$ %.2lf\n", quant, precoTotal);
            printf("----------------------------------------------------\n\n\n");
            break;
    }
}

void exercicio011(){
    double area, raio;
    double pi = 3.14159;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_011\n");
    printf("Favor informar o raio da circunferencia: \n\n\t");
    scanf("%lf", &raio);
    
    area = pi * (pow(raio, 2));
    printf("\nO resultado da AREA da circunferencia de raio %.2lf eh: %.2lf\n", raio, area);
    printf("----------------------------------------------------\n\n\n");
}

void exercicio012(){
    double area, base, altura;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_012\n");
    printf("\nFavor informar a BASE do triangulo: \n\n\t");
    scanf("%lf", &base);
    printf("\nFavor informar a ALTURA do triangulo: \n\n\t");
    scanf("%lf", &altura);
    
    area = (base * altura) / 2;
    printf("\nO triangulo de BASE %.2lf e ALTURA %.2lf tem a AREA de: %.2lf\n", base, altura, area);
    printf("----------------------------------------------------\n\n\n");
}

void exercicio013(){
    int i, n;
    int impares = 1;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_013\n");
    printf("\nDado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.");
    printf("\nFavor informar um numero: ");
    scanf("%i", &n);
  
    printf("\nOs numeros impares sao: ");
    printf("%i", impares);
    for (i=1; i<n; i++) {
        impares = impares +2;
        printf("%i", impares);
    }
    printf("\n----------------------------------------------------\n\n\n");
}

void exercicio014(){
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_014\n");
    printf("\nXXXXX\nX   X\nX   X\nX   X\nXXXXX\n");
    printf("\n----------------------------------------------------\n\n\n");
    
}

void exercicio015(){
    int x, n, potencia;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_015\n");
    printf("\nFavor informar o primeiro numero x: ");
    scanf("%i", &x);
    printf("Favor informar o a potencia que o numero x sera elevado: ");
    scanf("%i", &n);
    potencia = pow(x, n);
    printf("\nO resultado de %i elevado a %i eh: %i", x, n, potencia);
    printf("\n----------------------------------------------------\n\n\n");
}

void exercicio016(){
    char vetor[20];
    int n;
    
    printf("\nDigite uma palavra ");
    gets(vetor);
    printf("\nDigite um valor para saber qual o caracter desta posição %s ", vetor);
    getchar();
}

void exercicio017(){
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_017\n");
    printf("\n       x\n      oxo\n     xxxxx\n    oxxxxxo\n   oxxxxxxxo\n  xxxxxxxxxxx\n oxxxxxxxxxxxo\noxxxxxxxxxxxxxxo\n      xxxx\n       xx\n       xx\n      xxxx\n");
    printf("\n----------------------------------------------------\n\n\n");
    
}

void exercicio018(){
    int i, j, n;

    printf("----------------------------------------------------\n");
    printf("\nExercicio_018\n");
    printf("\nEntre com um valor de 2 a 20: ");
    printf("\nDigite um número\n");
    scanf("%d", &n);
    
    printf("\nSaida do programa: \n");
    for (i=1; i<=n; i++) {
        for (j=1; j<=i; j++)
            printf("%d", j);
        printf("\n");
    }
    
    for (i=i-2; i>0; i--) {
        for (j=1; j<=i; j++)
            printf("%d", j);
        printf("\n");
    }
    printf("\n----------------------------------------------------\n\n\n");
}

void exercicio019(){
    int l, c, mult, escolha, num, i, j;
 
    printf("----------------------------------------------------\n");
    printf("\nExercicio_019\n");
    
    printf("Digite o tamanho da matriz.\n");
    scanf("%i %i", &l, &c);
    
    int a[l][c];
    
    printf("Digite os valores da matriz.");
    for (i=0; i<l; i++){
        printf("\nDigite os valores para a linha %i\n", i+1);
        for (j=0; j<c; j++)
            scanf("%i", &a[i][j]);
    } printf("\n");
    
    printf("\nA matriz eh: \n\n");
    for (i=0; i<l; i++){
        for (j=0; j<c; j++){
            printf("\t%i", a[i][j]);
        } printf("\n");
    }
    
    printf("\nSe voce quer multiplicar uma linha DIGITE 1\nSe voce quer multiplicar uma coluna DIGITE 2.\n");
    scanf("%i",&escolha);
    if(escolha > 2 || escolha < 1)
        printf("Entrada invalida\n");
    else {
        if (escolha == 1)   {
            printf("\nDigite qual a LINHA que vai ser multiplicada\n");
            scanf("%i",&mult);
            
            printf("\nDigite o VALOR pelo qual quer multiplicar\n");
            scanf("%i",&num);
            
                for (i=0; i<c; i++) {
                    a[mult-1][i] = num * a[mult-1][i];
                }
            
            printf("\nA matriz multiplicada eh\n\n");
            for (i=0; i<l; i++) {
                for (j=0; j<c; j++) {
                    printf("\t%i ", a[i][j]);
                } printf("\n");
            } printf("\n----------------------------------------------------\n\n\n");
        }
        
        if (escolha == 2){
            printf("\nDigite qual a COLUNA que vai ser multiplicada\n");
            scanf("%i",&mult);
            
            printf("\nDigite o VALOR pelo qual quer multiplicar\n");
            scanf("%i",&num);
            
            for (j=0; j<l; j++) {
                a[j][mult-1] = num * a[j][mult-1];
            }
            
            printf("\nA matriz multiplicada eh\n\n");
            for (i=0; i<l; i++) {
                for (j=0; j<c; j++) {
                    printf("\t%i ", a[i][j]);
                } printf("\n");
            } printf("\n----------------------------------------------------\n\n\n");
        }
    }
}

void exercicio020(){
    int i, j;
    int a[3][3];
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_020\n");

    printf("Digite os valores da matriz.");
    for (i=0; i<3; i++){
        printf("\nDigite os valores para a linha %i\n", i+1);
        for (j=0; j<3; j++)
            scanf("%i", &a[i][j]);
    } printf("\n");
    
    printf("\nA matriz eh: \n\n");
    for (i=0; i<3; i++) {
        for(j=0; j<3; j++){
            printf("\t%i", a[i][j]);
        } printf("\n");
    } printf("\n----------------------------------------------------\n");
 
    printf("Troca dos números negativos pelo seu módulo:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]<0) {
                printf("%i, ", -(a[i][j]));
            } else {
                printf("%i, ",a[i][j]);
            }
        }
    }printf("\n----------------------------------------------------\n\n\n");
}

void exercicio021(){
    int n, i, soma = 0;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_021\n");
    
    printf("\nFavor informar uma quantidade de numeros: ");
    scanf("%i", &n);
    
 
    for (i = 1; i <=n; i++) {
        if(i%2 == 0) {
            soma += i;
        }
    }
    
    printf("\nA soma dos numeros pares eh: %i\n", soma);
    printf("\n----------------------------------------------------\n\n\n");
}

void exercicio022(){
    int iMatriz[3][3], i= 0, j=0;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_022\n");
    
    printf("Digite os valores da matriz.");
    for(i=0; i<3; i++){
        printf("\nDigite os valores da linha %i\n", i+1);
        for(j=0; j<3; j++){
            scanf("%i", &iMatriz[i][j]);
        } printf("\n");
    }
    printf("\nA matriz eh: \n\n");
    for (i=0; i<3; i++) {
        for(j=0; j<3; j++){
            printf("\t%i", iMatriz[i][j]);
        } printf("\n");
    } printf("\n----------------------------------------------------\n");
    
    printf("\nA matriz transposta eh: \n\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("\t%i", iMatriz[j][i]);
        }printf("\n");
    }printf("\n----------------------------------------------------\n\n\n");
}

void exercicio023(){
    double litrosUsados, tempo, velMedia, distancia, tempoConvertido;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_023\n");
    
    printf("\nFavor informar o tempo da sua viagem em minutos: ");
    scanf("%lf", &tempo);
    printf("\nFavor informar a velocidade media: ");
    scanf("%lf", &velMedia);
    tempoConvertido = tempo/60;
    distancia = tempoConvertido * velMedia;
    litrosUsados = distancia/12;
    
    printf("\nA velocidade media da viagem foi de %.2lf km/h, levou %.2lf min, a distancia percorrida foi de %.2lf Km e a quantidade de combustivel utilizada na viagem foi de %.2lf litros.\n", velMedia, tempo, distancia, litrosUsados);
    printf("\n----------------------------------------------------\n\n\n");
    
}

void exercicio024(){
    int a, b, c;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_024\n");
    
    printf("Digite o primeiro valor para A: ");
    scanf("%i", &a);
    printf("\nDigite o segundo valor para B: ");
    scanf("%i", &b);
    
    printf("\n\nOs valores para A e B sao respectivamente: %i e %i", a, b);
    
    c = a;
    a = b;
    b = c;
    
    printf("\n\nOs valores TROCADOS para A e B sao respectivamente: %i e %i\n\n", a, b);
    printf("\n----------------------------------------------------\n\n\n");

}

void exercicio025(){
    float salarioBruto, salarioLiquido;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_025\n");
    
    printf("Favor informar o seu salario: ");
    scanf("%f", &salarioBruto);
    
    float parcial = salarioBruto * 0.9;
    salarioLiquido = parcial * 0.95;
    
    printf("\nO salario liquido apos as deducoes de impostos eh: %.2f", salarioLiquido);
    printf("\n----------------------------------------------------\n\n\n");
}

void exercicio026() {
    int idade, idadeDias;
    
    printf("----------------------------------------------------\n");
    printf("\nExercicio_026\n");
    
    printf("Favor informar a sua idade: ");
    scanf("%i", &idade);
    
    idadeDias = idade * 12 * 30;
    
    printf("\nVoce viveu %i dias.", idadeDias);
    printf("\n----------------------------------------------------\n\n\n");
}

int main() {

    

}
