//
// Created by Vitor Frango on 02/04/2024.
//

#ifndef INC_21178LABPRO_CLIENTE_H
#define INC_21178LABPRO_CLIENTE_H


typedef struct {
    char    nome[50];
    int     idade;
    char    genero;
    char    plano_treino[100];
    int     numero_de_socio;
    int     numero_de_sessoes;
    char    plano_de_treinos[100];

} Cliente; // Definição da estrutura Cliente

void adicionarCliente(Cliente **clientes, int *totalClientes, Cliente novoCliente);
void removerCliente(Cliente **clientes, int *totalClientes, char *nomeCliente);
void editarCliente(Cliente *clientes, int totalClientes, char *nomeCliente, Cliente clienteEditado);
    Cliente *pesquisarCliente(Cliente *clientes, int totalClientes, char *criterio, char *valor);
void libertarMemoriaClientes(Cliente **clientes, int *totalClientes);


#endif //INC_21178LABPRO_CLIENTE_H
