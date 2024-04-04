//
// Created by Vitor Frango on 02/04/2024.
//

#ifndef INC_21178LABPRO_ARQUIVO_H
#define INC_21178LABPRO_ARQUIVO_H

#include "cliente.h"  // Inclui a definição da estrutura Cliente

void lerDadosClientes(Cliente **clientes, int *totalClientes);
void gravarDadosClientes(Cliente *clientes, int totalClientes);

void libertarMemoriaClientes(Cliente **clientes, int *totalClientes);




#endif //INC_21178LABPRO_ARQUIVO_H
