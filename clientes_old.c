//
// Created by Vitor Frango on 02/04/2024.
//Codigo fonte do programa clientes que le fichero clientes.csv


#include <stdio.h>
#include <string.h>
#include <string.h>

typedef struct {
    char nome[50];
    int  idade;
    char genero;
    char plano_treino[20];
    int numero_de_socio;
    int numero_de_sessoes;
    char plano_de_treinos[50];
} Cliente;

int main() {
    FILE *ficheiro;
    ficheiro = fopen("clientes.csv", "r");
    if (ficheiro == NULL) {
        printf("Erro ao abrir o ficheiro\n");
        return 1;
    }
    Cliente cliente;
    char linha[200];

    // le a linha do cabeçalho
    fgets(linha, 200, ficheiro);

    // le cada linha e preenche a estrutura do cliente
    while (fgets(linha, 200, ficheiro)) {
        sscanf(linha, "%[^,],%d,%c,%[^,],%d,%d,%[^\n]",
               cliente.nome, &cliente.idade, &cliente.genero,
               cliente.plano_treino, &cliente.numero_de_socio, &cliente.numero_de_sessoes,
               cliente.plano_de_treinos);


        // imprime os dados do cliente
        printf("Nome: %s\nIdade: %d\n"
               "Genero: %c\n"
               "Plano de treino: %s\n"
               "Numero de socio: %d\n"
               "Numero de sessoes: %d\n"
               "Plano de treinos: %s\n",
               cliente.nome,
               cliente.idade,
               cliente.genero,
               cliente.plano_treino,
               cliente.numero_de_socio,
               cliente.numero_de_sessoes,
               cliente.plano_de_treinos);
    }

    fclose(ficheiro);
    return 0;
}