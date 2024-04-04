/*
// Created by Vitor Frango on 02/04/2024.

 Enunciado B - Academia

Desenvolva um programa em linguagem C para gerir os dados de uma academia de ginástica. Ao iniciar,
 o programa deve ler um ficheiro CSV contendo os dados dos clientes (nome, idade, género, plano de treino)
 e armazená-los em memória. O programa deve permitir que o utilizador adicione novos clientes, remova clientes
 existentes, edite informação sobre os clientes e pesquise por nome, idade ou plano de treino.
Recorrendo a outro ficheiro CSV e atualizando os dados em memória, o programa deve registar a presença dos
 clientes nos treinos, controlar o número de sessões frequentadas por cada cliente e calcular o pagamento
 mensal com base no plano de treino e no número de sessões frequentadas.
O programa deve ter um sistema de relatórios que mostre informação sobre os planos mais preferidos pelos
 clientes, os clientes com maior número de sessões frequentadas e os clientes com mais de sessões
 frequentadas do que as definidas no seu plano de treino.
O programa deve usar memória dinâmica. Ao fechar o programa ou quando solicitado, o programa deve gravar
 os dados, em memória, nos respetivos ficheiros CSV.
O programa deve ser modular, com cada funcionalidade implementada num módulo separado, como leitura de
 dados, escrita de dados, controlo de presença, cálculo de pagamento, relatórios, etc. O código deve ser
 organizado e documentado de acordo com as melhores práticas de programação em C, implementando
 testes de unidade e de integração.

//Modulo principal do programa.

*/

//main.c

#include "menu.h"

int main() {

    // Exibe o menu principal
    exibirMenuPrincipal();
    exibirSubMenuClientes();
    return 0;
}
