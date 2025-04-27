#include <stdio.h>

int main(){


    char inicial;//Variável 1 - Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigo_carta[4]; //Variavel 2 - A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    char nome_cidade[10];//Variavel 3 - O nome da cidade. Tipo: char[] (string)
    int populacao;// Variavel 4 - O número de habitantes da cidade. Tipo: int
    float km_cidade;// Variavel 5 - A área da cidade em quilômetros quadrados. Tipo: float
    float pib;// Variavel 6 - O Produto Interno Bruto da cidade. Tipo: float
    int pontos_turisticos;// Variavel 7 - A quantidade de pontos turísticos na cidade. Tipo: int

    printf("==========Bem-vindo Super Trunfo de Países==========\n\n"); // Texto de identificação de apresentação da primeira carta !

    printf("*****CARTA 01***** \n\n");

    printf("Digite a Primeira letra do Estado: ");// Usuário irá inserir o a letra do estado 
    scanf(" %c", &inicial);//Leitura da letra inicial do estado, pela funcção scanf . essa leitura será jogada para a variavel 1 

    printf("Digite o codigo da carta: ");//A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    scanf("%s",codigo_carta);//Leitura do codigo da carta inserido pelo usuário

    printf("Digite o nome da cidade: ");//O nome da cidade. Tipo: char[] (string)
    scanf("%s",nome_cidade);//leitura do nome da cidade inserido pelo usuário

    printf("Digite o numero de habitantes da cidade: ");//O número de habitantes da cidade. Tipo: int
    scanf("%d",&populacao);//Leitura do numero de habitantes da cidade 

    printf("Digite o tamanho da cidade em km²: ");//A área da cidade em quilômetros quadrados. Tipo: float
    scanf("%f",&km_cidade);//Leitura do tamanho da cidade em km²

    printf("Digite o Pib: "); //O Produto Interno Bruto da cidade. Tipo: float
    scanf("%f",&pib);//Leitura do Pib inserido pelo usuário 

    printf("Digite o numero de pontos turísticos: ");//A quantidade de pontos turísticos na cidade. Tipo: int
    scanf(" %d",&pontos_turisticos);//Leitura a quatidade de pontos turisticos inseridos pelo usuário

    printf("**********RESULTADOS**********\n");

    printf("Estado: %c\n",inicial);//Impressão na tela da variável 1 - Inicial do estado 

    printf("Código: %s\n",codigo_carta);//Impressão na tela da variável 2 - Código da carta

    printf("Nome da Cidade: %s\n", nome_cidade);//Impressão na tela da variável 3 - Nome da Cidade

    printf("População: %d\n",populacao);//Impressão na tela da variável 4 - Quantida de população

    printf("Área: %.2f km²\n",km_cidade);//Impressão na tela da variável 5 - Área em Km²

    printf("PIB: R$ %.2f \n", pib);//Impressão na tela da variável 6 - PIB

    printf("Número de pontos turísticos: %d \n\n\n", pontos_turisticos); //Impressão na tela da variável 7 - Quantidades de Pontos Turisticos


    printf("*****CARTA 02*****\n");

    printf("Digite a Primeira letra do Estado: ");// Usuário irá inserir o a letra do estado 
    scanf(" %c", &inicial);//Leitura da letra inicial do estado, pela funcção scanf . essa leitura será jogada para a variavel 1 

    printf("Digite o codigo da carta: ");//A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    scanf("%s",codigo_carta);//Leitura do codigo da carta inserido pelo usuário

    printf("Digite o nome da cidade: ");//O nome da cidade. Tipo: char[] (string)
    scanf("%s",nome_cidade);//leitura do nome da cidade inserido pelo usuário

    printf("Digite o numero de habitantes da cidade: ");//O número de habitantes da cidade. Tipo: int
    scanf("%d",&populacao);//Leitura do numero de habitantes da cidade 

    printf("Digite o tamanho da cidade em km²: ");//A área da cidade em quilômetros quadrados. Tipo: float
    scanf("%f",&km_cidade);//Leitura do tamanho da cidade em km²

    printf("Digite o Pib: "); //O Produto Interno Bruto da cidade. Tipo: float
    scanf("%f",&pib);//Leitura do Pib inserido pelo usuário 

    printf("Digite o numero de pontos turísticos: ");//A quantidade de pontos turísticos na cidade. Tipo: int
    scanf(" %d",&pontos_turisticos);//Leitura a quatidade de pontos turisticos inseridos pelo usuário


    printf("**********RESULTADOS**********\n");

    printf("Estado: %c\n",inicial);//Impressão na tela da variável 1 - Inicial do estado 

    printf("Código: %s\n",codigo_carta);//Impressão na tela da variável 2 - Código da carta

    printf("Nome da Cidade: %s\n", nome_cidade);//Impressão na tela da variável 3 - Nome da Cidade

    printf("População: %d\n",populacao);//Impressão na tela da variável 4 - Quantida de população

    printf("Área: %.2f km²\n",km_cidade);//Impressão na tela da variável 5 - Área em Km²

    printf("PIB: R$ %.2f \n", pib);//Impressão na tela da variável 6 - PIB

    printf("Número de pontos turísticos: %d \n", pontos_turisticos); //Impressão na tela da variável 7 - Quantidades de Pontos Turisticos

    return 0;
}