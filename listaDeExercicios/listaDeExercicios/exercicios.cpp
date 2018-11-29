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
    
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
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
   
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_011\n");
    printf("Favor informar o raio da circunferencia: \n\n\t");
    scanf("%lf", &raio);
    
    area = pi * (pow(raio, 2));
    printf("\nO resultado da AREA da circunferencia de raio %.2lf eh: %.2lf\n", raio, area);
    printf("----------------------------------------------------\n\n\n");
}

void exercicio012(){
    double area, base, altura;
    
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_014\n");
    printf("\nXXXXX\nX   X\nX   X\nX   X\nXXXXX\n");
    printf("\n----------------------------------------------------\n\n\n");
    
}

void exercicio015(){
    int x, n, potencia;
    
    printf("\n----------------------------------------------------\n");
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
    char vetor[50], i;
    int n;
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_016\n");
    
    printf("\nDigite uma palavra ");
    gets(vetor);
    printf("\nDigite um caracter para saber qual a posição dele. ");
    i = getchar();
    for (n=0; n<50; n++){
        if(vetor[n] == i) {
            printf("\nO reusultado é %i", n);
            printf("\n");
        }
    }
    printf("\n----------------------------------------------------\n\n\n");
}

void exercicio017(){
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_017\n");
    printf("\n       x\n      oxo\n     xxxxx\n    oxxxxxo\n   oxxxxxxxo\n  xxxxxxxxxxx\n oxxxxxxxxxxxo\noxxxxxxxxxxxxxxo\n      xxxx\n       xx\n       xx\n      xxxx\n");
    printf("\n----------------------------------------------------\n\n\n");
    
}

void exercicio018(){
    int i, j, n;

    printf("\n----------------------------------------------------\n");
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
 
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
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
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_026\n");
    
    printf("Favor informar a sua idade: ");
    scanf("%i", &idade);
    
    idadeDias = idade * 12 * 30;
    
    printf("\nVoce viveu %i dias.", idadeDias);
    printf("\n----------------------------------------------------\n\n\n");
}

void exercicio027() {
    int valor, valorPago, troco, cem, dezena, unidade, cemNum, dezenaNum, unidadeNum;
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_027\n");
    
    printf("Qual o valor da sua compra? ");
    scanf("%i", &valor);
    printf("Qual o valor pago? ");
    scanf("%i", &valorPago);
    
    troco = valorPago - valor;
    
    cem = troco % 100;
    cemNum = troco / 100;
    dezena = cem % 10;
    dezenaNum = cem / 10;
    unidade = cem % 1;
    unidadeNum = dezena / 1;

    printf("\nO valor da compra foi R$ %i e o valor do troco eh de R$ %i.", valor, troco);
    printf("\nO número mínimo de notas que o caixa deve fornecer como troco sao: %i notas.", cemNum+dezenaNum+unidadeNum);
    printf("\nA quantidade de cada tipo de nota do troco eh: %i notas de CEM reais, %i notas de DEZ reais e %i notas de UM real.", cemNum, dezenaNum, unidadeNum);
     printf("\n----------------------------------------------------\n\n\n");
    
}

void exercicio028() {
    double salMin, salTotal, comissao = 50, quantCarroVendido, valorCarro, valorVenda;
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_028\n");
    
    printf("Informe o valor do salario minimo: R$ ");
    scanf("%lf", &salMin);
    printf("Quantos carros este vendedor vendeu? ");
    scanf("%lf", &quantCarroVendido);
    printf("Qual o valor de venda do carro? ");
    scanf("%lf", &valorCarro);
    
    valorVenda = quantCarroVendido * valorCarro;
    salTotal = (salMin * 2) + (comissao * quantCarroVendido) + (valorVenda * 0.05);
    
    printf("\nO salario total do vendedor sera de: R$ %.2lf", salTotal);
    printf("\n----------------------------------------------------\n\n\n");
    
}

void exercicio029() {
    double x, y, z;
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_029\n");
    
    printf("Informe a primeira medida para um triangulo: ");
    scanf("%lf", &x);
    printf("Informe a segunda medida para um triangulo: ");
    scanf("%lf", &y);
    printf("Informe a terceira medida para um triangulo: ");
    scanf("%lf", &z);
    
    if((x<y+z) && (y<x+z) && (z<x+y)){
        printf("\nEstas medidas formam um triangulo.\n\n");
    }
    
    if(x == y && x == z && y == z){
        printf("\nEste eh um triangulo EQUILATERO");
    } else if (x == y || y == z || x == z) {
        printf("\nEste eh um triangulo ISOSCELES");
    } else if (x != y && x != z && y != z) {
        printf("\nEste eh um tringulo ESCALENO");
    } else {
        printf("\nEstas medidas nao formam um triangulo");
    }
     printf("\n----------------------------------------------------\n\n\n");
}

void exercicio030() {
    int n, i, j, x;
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_030\n");
    
    printf("\nFavor digitar um numero inteiro de 2 a 20: ");
    scanf("%i", &n);
    
    for (i=1; i<=n; i++) {
        printf("%i", i);
    } printf("\n");
    
    for(i=1; i<n; i++){
        x = 0;
        for(j=0; j<n; j++){
            if(j < i) {
                printf("x");
            } else
                printf("%i", x);
                x = x + 1;
            
        } printf("\n");
    }
}

void exercicio031() {
    int vet[5], a = 0, i;
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_031\n");
    
    for (i=0; i<5; i++) {
        printf("Informe um numero: ");
        scanf("%i", &vet[i]);
        if (vet[i] < 0) {
            a += 1;
        }
    } printf("\nA quantidade de numeros negativos eh: %i", a);
    printf("\n----------------------------------------------------\n\n\n");
}

void exercicio032() {
    double mediaSalario, somaSalario = 0, percent;
    int n, numFilhos, i, somaFilhos = 0, mediaFilhos;
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_032\n");
    
    printf("Quantas pessoas serao entrevistadas? ");
    scanf("%i", &n);
    
    double salario[n];
    
    for (i=0; i<n; i++) {
        printf("Informe o valor do salario da pessoa %i: ", i+1);
        scanf("%lf", &salario[i]);
        somaSalario += salario[i];
        mediaSalario = somaSalario / n;
    }
    for (i=0; i<n; i++) {
        printf("Informe a quantidade de filhos da pessoa %i ", i+1);
        printf("%i", &numFilhos);
        somaFilhos += numFilhos + 1;
        mediaFilhos = somaFilhos / n;
    }
    printf("\nA media do salario da populacao eh de R$ %.2lf", mediaSalario);
    printf("\nA media do numero de filhos eh %i", mediaFilhos);

}

void exercicio033() {
    double alturaChico = 1.50, alturaZe = 1.10;
    int ano;
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_033\n");
    
    ano = 0;
    
    do {
        alturaZe = alturaZe + 0.03;
        alturaChico = alturaChico + 0.02;
        ano = ano + 1;
        
    } while (alturaChico > alturaZe);
    
    printf("\n%d anos deverao ser necessarios para que Ze seja maior que Chico.\n" , ano);
    printf("\nZe tera %.2lf metros de altura daqui %i anos", alturaZe, ano);
    printf("\nChico tera %.2lf metros de altura daqui %i anos", alturaChico, ano);
    
    printf("\n----------------------------------------------------\n\n\n");
}

void exercicio034() {
    int num = 0, maior = 0, menor = 0, i;
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_034\n");

    menor = num;
    maior = num;
    
    for(i=0; i<50; i++) {
        printf("Digite um numero: ");
        scanf("%i",&num);
        if(num > maior) {
            maior = num;
        }
        if(num < menor) {
            menor = num;
        }
    }
    
    printf ("\nO MENOR valor eh: %i e o MAIOR valor eh: %i\n",menor, maior);
    printf("\n----------------------------------------------------\n\n\n");
}

void exercicio035() {
    
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_035\n");

}

void exercicio036() {
    
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_036\n");
    
}

void exercicio037() {
    double precoTotal, quant;
    int codigo;
    
    printf("\n----------------------------------------------------\n");
    printf("\nExercicio_037\n");
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

int main() {
    int exercicio, resp;
    
    do
    {
        printf("\nQual exercicio você deseja executar?\nDigite de 1 a 37 para escolher. ");
        scanf("%i", &exercicio);
        switch (exercicio) {
            case 1 :{
                printf("\n\nConstrua um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano, P(x1,y1) e P(x2,y2), escreva a distância entre eles.\n\n");
                exercicio001();
            }
                break;
                
            case 2: {
                printf("\n\nEscreva um algoritmo que leia três números inteiros e positivos (A, B, C) e calcule a seguinte expressão: D=(R+S)/2, onde R=(A+B)^2 e S(B+C)^2\n\n");
                exercicio002();
            }
                break;
                
            case 3 : {
                printf("\n\nFaça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.\n\n");
                exercicio003();
            }
                break;
                
            case 4 : {
                printf("\n\nFaça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno. Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente.\n\n");
                exercicio004();
            }
                break;
            
            case 5 : {
                printf("\n\nO custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 28%% e os impostos de 45%%, escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor.\n\n");
                exercicio005();
            }
                break;
                
            case 6 : {
                printf("\n\nDado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.\n\n");
                exercicio006();
            }
                break;
            
            case 7 : {
                printf("\n\nElaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem: \"SÃO MULTIPLOS\" ou \"NÃO SÃO MULTIPLOS\".");
                exercicio007();
            }
                break;
                
            case 8 : {
                printf("\n\nElabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias:\nInfantil A - 5 - 7 anos\nInfantil B - 8 -10 anos\nJuvenil A - 11 - 13 anos\nJuvenil B - 14 - 17 anos\nAdulto - maiores de 18 anos.");
                exercicio008();
            }
                break;
                
            case 9 : {
                printf("\n\nUm usuário deseja um algoritmo onde possa escolher que tipo de média deseja calcular a partir de 3 notas. Faça um algoritmo que leia as notas, a opção escolhida pelo usuário e calcule a média.\n1 - aritmética\n2 - ponderada (3,3,4)\n3 - harmônica");
                exercicio009();
            }
                break;
                
            case 10 : {
                printf("\n\nUm vendedor necessita de um algoritmo que calcule o preço total devido por um cliente. O algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo:\n\nCódigo do Produto\t\tPreço unitário\n1001\t\t\t\t\tR$ 5,32\n1324\t\t\t\t\tR$ 6,45\n6548\t\t\t\t\tR$ 2,37\n1987\t\t\t\t\tR$ 5,32\n7623\t\t\t\t\tR$ 6,45");
                exercicio010();
            }
                break;
                
            case 11 : {
                printf("\n\nFaça um algoritmo para calcular a área de uma circunferência, considerando a fórmula AREA = π * RAIO^2​. Utilize as variáveis AREA e RAIO, a constante π (pi = 3.14159) e os operadores aritméticos de multiplicação.");
                exercicio011();
            }
                break;
                
            case 12 : {
                printf("\n\nFaça um algoritmo que calcule a área de um triângulo, considerando a fórmula Area = (BASE*ALTURA)/2. Utilize as variáveis AREA, BASE e ALTURA e os operadores aritméticos de multiplicação e divisão.");
                exercicio012();
            }
                break;
               
            case 13 : {
                printf("\n\nDado um número inteiro positivo n, imprimir os n primeiros naturais ímpares. Exemplo: Para n=4 a saída deverá ser 1,3,5,7.");
                exercicio013();
            }
                break;
                
            case 14 : {
                printf("\n\nEscrever um programa que mostre a seguinte figura no alto da tela: \nXXXXX\nX   X\nX   X\nX   X\nXXXXX");
                exercicio014();
            }
                break;
                
            case 15 : {
                printf("\n\nDados um inteiro x e um inteiro não-negativo n, calcular x^n​ ​.");
                exercicio015();
            }
                break;
            
            case 16 : {
                printf("\n\nFaça uma função que retorne a posição de um dado caracter dentro de uma string.");
                exercicio016();
            }
                break;
                
            case 17 : {
                printf("\n\nImplemente um programa que desenhe um \"pinheiro\" na tela, similar ao abaixo.(Enriqueça o desenho com outros caracteres, simulando enfeites)\n       x\n      oxo\n     xxxxx\n    oxxxxxo\n   oxxxxxxxo\n  xxxxxxxxxxx\n oxxxxxxxxxxxo\noxxxxxxxxxxxxxxo\n      xxxx\n       xx\n       xx\n      xxxx\n");
                exercicio017();
            }
                break;
                
            case 18 : {
                printf("\n\nCrie um programa que leia um número entre 2 e 20 e gere uma tela com a seguinte configuração:\n                       Digite um número: 4\nSaida do programa:\n1\n12\n123\n1234\n123\n12\n1");
                exercicio018();
            }
                break;
                
            case 19 : {
                printf("\n\nCrie uma função capaz de multiplicar uma linha de uma matriz por um dado número. Faça o mesmo para uma coluna.");
                exercicio019();
            }
                break;
                
            case 20 : {
                printf("\n\nCrie uma função capaz de substituir todos os números negativos de uma matriz por seu módulo.");
                exercicio020();
            }
                break;
                
            case 21 : {
                printf("\n\nDados ​n ​e uma seqüência de ​n​ números inteiros, determinar a soma dos números pares.");
                exercicio021();
            }
                break;
                
            case 22 : {
                printf("\n\nEscreva um programa que lê uma matriz quadrada 3x3 e apresenta na tela a sua matriz transposta.");
                exercicio022();
            }
                break;
                
            case 23 : {
                printf("\n\nFaça um algoritmo que calcule a quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que faz 12Km por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto na viagem e a velocidade média durante ela. Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distância, basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula: LITROS_USADOS = DISTANCIA / 12. O programa deve apresentar os valores da velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na viagem.");
                exercicio023();
            }
                break;
                
            case 24 : {
                printf("\n\nFaça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresente os valores trocados.");
                exercicio024();
            }
                break;
                
            case 25 : {
                printf("\n\nConsidere a seguinte situação: descontam-se inicialmente 10%% do salário bruto do trabalhador como contribuição à previdência social. Após esse desconto, há um outro desconto de 5%% sobre o valor restante do salário bruto, a título de um determinado imposto. Faça um algoritmo que leia o salário bruto de um cidadão e imprima o seu salário líquido.");
                exercicio025();
            }
                break;
                
            case 26 : {
                printf("\n\nEscreva um algoritmo que determine o número de dias que uma pessoa já viveu. Considere que um mês tenha 30 dias.");
                exercicio026();
            }
                break;
                
            case 27 : {
                printf("\n\nSuponha que um caixa disponha apenas de notas de 1, 10 e 100 reais. Considerando que alguém está pagando uma compra, escreva um algoritmo que mostre o número mínimo de notas que o caixa deve fornecer como troco. Mostre também: o valor da compra, o valor do troco e a quantidade de cada tipo de nota do troco. Suponha que o sistema monetário não utilize moedas.");
                exercicio027();
            }
                break;
                
            case 28 : {
                printf("\n\nA revendedora de carros Pica-Pau Ltda. paga aos seus funcionários vendedores dois salários mínimos fixos, mais uma comissão fixa de R$ 50,00 por carro vendido e mais 5%% do valor das vendas. Faça um algoritmo que determine o salário total de um vendedor.");
                exercicio028();
            }
                break;
                
            case 29 : {
                printf("\n\nDados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo, e se forem, verificar se é um triângulo equilátero, isóscele ou escaleno. Se eles não formarem um triângulo, escrever uma mensagem.");
                exercicio029();
            }
                break;
                
            case 30 : {
                printf("\n\nCrie um programa que leia um número entre 2 e 20 e gere uma tela com a seguinte configuração:\nDigite um número: 7\nSaida do programa:\n1234567\nx123456\nxx12345\nxxx1235\nxxxx123\nxxxxx12\nxxxxxx1\n");
                exercicio030();
            }
                break;
                
            case 31 : {
                printf("\n\nEscrever um algoritmo que lê 5 valores para a, um de cada vez, e conta quantos destes valores são negativos, escrevendo esta informação.");
                exercicio031();
            }
                break;
                
            case 32 : {
                printf("\n\nA prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:\n\ta) média do salário da população;\n\tb) média do número de filhos;\n\tc) maior salário;\n\td) percentual de pessoas com salário até R$100,00. O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando WHILE)");
                exercicio032();
            }
                break;
                
            case 33 : {
                printf("\n\nChico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.");
                exercicio033();
            }
                break;
                
            case 34 : {
                printf("\n\nEscreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o resultado.");
                exercicio034();
            }
                break;
                
            case 35 : {
                printf("\n\nFoi realizada uma pesquisa de algumas características físicas da população de uma certa região, a qual coletou os seguintes dados referentes a cada habitante para serem analisados:\n\t- idade\n\t- sexo (masculino e feminino)\n\t- cor dos olhos (1 - azuis, 2 - verdes ou 3 - castanhos)\n\t- cor dos cabelos (1 - louros, 2 - castanhos, 3 - pretos)\n\nFaça um algoritmo que determine e escreva:\n\t\t- a maior idade dos habitantes\n\t\t- a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos inclusive e que tenham olhos verdes e cabelos louros.\n\t\tO final do conjunto de habitantes é reconhecido pelo valor -1 entrada como idade.");
                exercicio035();
            }
                break;
                
            case 36 : {
                printf("\n\nEscrever um algoritmo que leia 20 valores para uma variável n e, para cada um deles, calcule a tabuada de 1 até n. Mostre a tabuada na forma:\n\t1xn=n\n\t2 x n = 2n\n\t3 x n = 3n\n\t.......\n\tn x n = n^2");
                exercicio036();
            }
                break;
                
            case 37 : {
                printf("\n\nUm vendedor necessita de um algoritmo que calcule o preço total devido por um cliente. O algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total (deve receber estas informações até o usuário digitar -1 para o código) e apresentar o total da compra, usando a tabela abaixo:\n\nCódigo do produto\t\tPreço unitário\n1001\t\t\t\t\tR$ 5,32\n1324\t\t\t\t\tR$ 6,45\n6548\t\t\t\t\tR$ 2,37\n1987\t\t\t\t\tR$ 5,32\n7623\t\t\t\t\tR$ 6,45");
                exercicio037();
            }
                break;
                
            default:
                
                break;
        }
        printf("\nVoce deseja fazer outro exercicio?\n");
        printf("\nDigite 1 para continuar ou 2 para sair.");
        scanf("%i", &resp);
        
    } while (resp == 1);
    

}
