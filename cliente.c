//
// Created by Vitor Frango on 03/04/2024.
//

#include "cliente.h"
#include "menu.h"
#include "arquivo.h"

#include <stdlib.h>
#include <string.h>



void adicionarCliente(Cliente **clientes, int *totalClientes, Cliente novoCliente) {
    *clientes = (Cliente *) realloc(*clientes, (*totalClientes + 1) * sizeof(Cliente));
    (*clientes)[*totalClientes] = novoCliente;
    (*totalClientes)++;
}

void removerCliente(Cliente **clientes, int *totalClientes, char *nomeCliente) {
    for (int i = 0; i < *totalClientes; i++) {
        if (strcmp((*clientes)[i].nome, nomeCliente) == 0) {
            for (int j = i; j < *totalClientes - 1; j++) {
                (*clientes)[j] = (*clientes)[j + 1];
            }
            *clientes = (Cliente *) realloc(*clientes, (*totalClientes - 1) * sizeof(Cliente));
            (*totalClientes)--;
            break;
        }
    }
}

void editarCliente(Cliente *clientes, int totalClientes, char *nomeCliente, Cliente clienteEditado) {
    for (int i = 0; i < totalClientes; i++) {
        if (strcmp(clientes[i].nome, nomeCliente) == 0) {
            clientes[i] = clienteEditado;
            break;
        }
    }
}


// Alterando o tipo de retorno para Cliente* e ajustando a lógica de retorno.
Cliente* pesquisarCliente(Cliente *clientes, int totalClientes, char *criterio, char *valor) {
    for (int i = 0; i < totalClientes; i++) {
        if (strcmp(criterio, "nome") == 0 && strcmp(clientes[i].nome, valor) == 0) {
            return &clientes[i];
        } else if (strcmp(criterio, "numero_de_socio") == 0 && clientes[i].numero_de_socio == atoi(valor)) {
            return &clientes[i];
        } else if (strcmp(criterio, "plano_de_treinos") == 0 && strcmp(clientes[i].plano_de_treinos, valor) == 0) {
            return &clientes[i];
        }
    }
    return NULL; // Retornando NULL se nenhum cliente for encontrado.
}

void libertarMemoriaClientes(Cliente **clientes, int *totalClientes) {
    free(*clientes);
    *clientes = NULL;
    *totalClientes = 0;
}

int main() {
    Cliente *clientes = NULL;
    int totalClientes = 0;


  /*
    // teste de uso das funções
    lerDadosClientes(&clientes, &totalClientes);
    exibirMenuPrincipal();
    gravarDadosClientes(clientes, totalClientes);
    libertarMemoriaClientes(&clientes, &totalClientes);

    */

    return 0;
}
