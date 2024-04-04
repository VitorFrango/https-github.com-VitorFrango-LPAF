//
// Created by Vitor Frango on 03/04/2024.
//


// arquivo.c


#include "arquivo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerDadosClientes(Cliente **clientes, int *totalClientes) {
    FILE *file = fopen("clientes.csv", "r");
    if (!file) {
        perror("Falha ao abrir arquivo");
        return;
    }

    // Inicializa contagem de clientes
    *totalClientes = 0;
    Cliente tempCliente;  // Usado para contar quantas linhas o arquivo tem

    // Conta quantas linhas o arquivo tem para determinar o total de clientes
    char ch;
    while(!feof(file)) {
        ch = fgetc(file);
        if(ch == '\n') {
            (*totalClientes)++;
        }
    }

    // Volta ao início do arquivo para começar a leitura dos dados
    rewind(file);

    // Aloca memória para todos os clientes
    *clientes = (Cliente*) malloc(sizeof(Cliente) * (*totalClientes));
    if (*clientes == NULL) {
        fclose(file);
        perror("Falha na alocação de memória");
        return;
    }

    // Lê cada linha do arquivo e armazena nos campos da estrutura Cliente
    for (int i = 0; i < *totalClientes; i++) {
        fscanf(file, "%[^,],%d,%c,%[^,],%d,%d,%[^\n]\n",
               (*clientes)[i].nome,
               &(*clientes)[i].idade,
               &(*clientes)[i].genero,
               (*clientes)[i].plano_treino,
               &(*clientes)[i].numero_de_socio,
               &(*clientes)[i].numero_de_sessoes,
               (*clientes)[i].plano_de_treinos);
    }

    fclose(file);
}

void gravarDadosClientes(Cliente *clientes, int totalClientes) {
    FILE *file = fopen("clientes.csv", "w");
    if (!file) {
        perror("Falha ao abrir arquivo para escrita");
        return;
    }

    // Grava cada cliente no arquivo
    for (int i = 0; i < totalClientes; i++) {
        fprintf(file, "%s,%d,%c,%s,%d,%d,%s\n",
                clientes[i].nome,
                clientes[i].idade,
                clientes[i].genero,
                clientes[i].plano_treino,
                clientes[i].numero_de_socio,
                clientes[i].numero_de_sessoes,
                clientes[i].plano_de_treinos);
    }

    fclose(file);
}


// Created by Vitor Frango on 03/04/2024.