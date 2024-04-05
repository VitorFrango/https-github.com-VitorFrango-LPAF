//
// Created by Vitor Frango on 04/04/2024.
//


#include "menu.h"
#include "cliente.h"
#include "arquivo.h"
#include "presenca.h"
#include "pagamento.h"


#include <stdio.h>

void exibirMenuPrincipal() {
    int escolha;
    do{
        printf("\n Menu Principal\n");
        printf("1. Clientes\n");
        printf("2. Presenças\n");
        printf("3. Pagamentos\n");
        printf("4. Relatórios\n");
        printf("5. Sair\n");
        printf("Selecione uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                exibirSubMenuClientes();
                break;
            case 2:
                printf("Gerir presenças...\n");
                break;
            case 3:
                printf("Gerir pagamentos...\n");
                break;
            case 4:
                printf("Gerir relatórios...\n");
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 5);
}

void exibirSubMenuClientes(){
    int escolha;
    do{
        printf("\nMenu Clientes\n");
        printf("1. Adicionar cliente\n");
        printf("2. Remover cliente\n");
        printf("3. Listar clientes\n");
        printf("4. Voltar\n");
        printf("Selecione uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Adicionar cliente...\n");
                break;
            case 2:
                printf("Remover cliente...\n");
                break;
            case 3:
                printf("Listar clientes...\n");
                break;
            case 4:
                printf("Voltando...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 4);
}


void exibirSubMenuPresencas(){
    int escolha;
    do{
        printf("\nMenu Presenças\n");
        printf("1. Adicionar presença\n");
        printf("2. Remover presença\n");
        printf("3. Listar presenças\n");
        printf("4. Voltar\n");
        printf("Selecione uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Adicionar presença...\n");
                break;
            case 2:
                printf("Remover presença...\n");
                break;
            case 3:
                printf("Listar presenças...\n");
                break;
            case 4:
                printf("Voltando...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 4);
}

void exibirSubMenuPagamentos(){
    int escolha;
    do{
        printf("\nMenu Pagamentos\n");
        printf("1. Adicionar pagamento\n");
        printf("2. Remover pagamento\n");
        printf("3. Listar pagamentos\n");
        printf("4. Voltar\n");
        printf("Selecione uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Adicionar pagamento...\n");
                break;
            case 2:
                printf("Remover pagamento...\n");
                break;
            case 3:
                printf("Listar pagamentos...\n");
                break;
            case 4:
                printf("Voltando...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 4);
}

void exibirSubMenuRelatorios(){
    int escolha;
    do{
        printf("\nMenu Relatórios\n");
        printf("1. Relatório de clientes\n");
        printf("2. Relatório de presenças\n");
        printf("3. Relatório de pagamentos\n");
        printf("4. Voltar\n");
        printf("Selecione uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Relatório de clientes...\n");
                break;
            case 2:
                printf("Relatório de presenças...\n");
                break;
            case 3:
                printf("Relatório de pagamentos...\n");
                break;
            case 4:
                printf("Voltando...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 4);
}