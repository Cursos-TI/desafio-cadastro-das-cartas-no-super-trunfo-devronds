#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    
    char letra; // VARIÁVEL QUE IRÁ RECEBER QUAL SERÁ A LETRA
    char num_estado[8]; // VARÍAVEL QUE IRÁ RECEBER O NÚMERO DE ESTADOS
    char nome_cidade[20]; // VARIÁVEL QUE IRÁ RECEBER O NOME DA CIDADE
    int populacao, qtde_pt; // VARIÁVEL QUE IRÁ RECEBER A POPULAÇÃO E A QUANTIDADE DE PONTOS TURÍSTICOS
    float pib, area; // VARIÁVEL QUE IRÁ REBECER PIB E AREA


    printf("DIGITE UMA LETRA DE A a H: \n"); 
    scanf(" %c", &letra); //ENTRADA DE DADOS

    printf("DIGITE UM NUMERO DE 01 a 04: \n");
    scanf(" %s", &num_estado); //ENTRADA DE DADOS

    printf("DIGITE UMA CIDADE: \n");
    scanf(" %s", &nome_cidade); //ENTRADA DE DADOS

    printf("DIGITE O TOTAL DE SUA POPULAÇÃO: \n");
    scanf("%d", &populacao); //ENTRADA DE DADOS

    printf("DIGITE SUA ÁREA EM Km²: \n");
    scanf("%f", &area); //ENTRADA DE DADOS

    printf("DIGITE SEU PIB: \n");
    scanf("%f", &pib); //ENTRADA DE DADOS

    printf("DIGITE O NÚMERO DE PONTOS TURÍSTICOS: \n");
    scanf("%d", &qtde_pt); //ENTRADA DE DADOS

    printf("\n\n------ INFORMAÇÕES DA CIDADE ------\n");

    printf("ESTADO: %c \n", letra); //SAÍDA DE DADOS
    printf("CÓDIGO: %c%s \n", letra,num_estado); //SAÍDA DE DADOS
    printf("NOME DA CIDADE: %s \n", nome_cidade); //SAÍDA DE DADOS
    printf("POPULAÇÃO: %d \n", populacao); //SAÍDA DE DADOS
    printf("ÁREA: %f Km² \n", area); //SAÍDA DE DADOS
    printf("PIB: %f Bilhões \n", pib); //SAÍDA DE DADOS
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d", qtde_pt); //SAÍDA DE DADOS

    return 0; //RETORNA COMO O FIM DO PROGRAMA (SEMPRE USAR)

    // O CODICO USA VARIÁVEIS DO TIPO CHAR, INT E FLOAT PARA RECEBER DADOS DO USUÁRIO E EXIBIR INFORMAÇÕES SOBRE UMA CIDADE.
}
