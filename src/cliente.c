#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"

void cadastrarCliente() {
    Cliente cliente;
    FILE *file = fopen("data/clientes.dat", "ab");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo de clientes!\n");
        return;
    }

    printf("Código do cliente: ");
    scanf("%d", &cliente.codigo);
    printf("Nome: ");
    scanf(" %[^\n]", cliente.nome);
    printf("Endereço: ");
    scanf(" %[^\n]", cliente.endereco);
    printf("Telefone: ");
    scanf(" %[^\n]", cliente.telefone);

    fwrite(&cliente, sizeof(Cliente), 1, file);
    fclose(file);
    printf("Cliente cadastrado com sucesso!\n");
}

void consultarClientes() {
    Cliente cliente;
    FILE *file = fopen("data/clientes.dat", "rb");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo de clientes!\n");
        return;
    }

    printf("\nLista de Clientes:\n");
    while (fread(&cliente, sizeof(Cliente), 1, file)) {
        printf("Código: %d\n", cliente.codigo);
        printf("Nome: %s\n", cliente.nome);
        printf("Endereço: %s\n", cliente.endereco);
        printf("Telefone: %s\n", cliente.telefone);
        printf("--------------------\n");
    }
    fclose(file);
}
