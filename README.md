#include <stdio.h>
#include <string.h>

// Constantes para seções, gôndolas e produtos
#define SECTIONS 5
#define GONDOLAS 10
#define PRODUCTS 20

// Vetores multidimensionais para armazenar código e nome do produto
int codigoProduto[SECTIONS][GONDOLAS][PRODUCTS] = {0};
char nomeProduto[SECTIONS][GONDOLAS][PRODUCTS][30] = {""};

// Função para cadastrar um produto
void cadastrarProduto(int secao, int gondola, int produto, char *nome, int codigo) {
    if (secao < SECTIONS && gondola < GONDOLAS && produto < PRODUCTS) {
        codigoProduto[secao][gondola][produto] = codigo;
        strcpy(nomeProduto[secao][gondola][produto], nome);
        printf("Produto cadastrado com sucesso em S%d-G%d-P%d\n", secao + 1, gondola + 1, produto + 1);
    } else {
        printf("Localização inválida.\n");
    }
}

// Função para listar todos os produtos
void listarProdutos() {
    printf("Lista de Produtos no Armazém:\n");
    for (int s = 0; s < SECTIONS; s++) {
        for (int g = 0; g < GONDOLAS; g++) {
            for (int p = 0; p < PRODUCTS; p++) {
                if (codigoProduto[s][g][p] != 0) { // Verifica se há um produto cadastrado
                    printf("Seção S%d - Gôndola G%d - Produto P%d: %s (Código: %d)\n",
                           s + 1, g + 1, p + 1, nomeProduto[s][g][p], codigoProduto[s][g][p]);
                }
            }
        }
    }
}

// Função para consultar um único produto
void consultarProduto(int secao, int gondola, int produto) {
    if (secao < SECTIONS && gondola < GONDOLAS && produto < PRODUCTS) {
        int codigo = codigoProduto[secao][gondola][produto];
        if (codigo != 0) {
            printf("Produto encontrado em S%d-G%d-P%d: %s (Código: %d)\n",
                   secao + 1, gondola + 1, produto + 1, nomeProduto[secao][gondola][produto], codigo);
        } else {
            printf("Nenhum produto encontrado em S%d-G%d-P%d.\n", secao + 1, gondola + 1, produto + 1);
        }
    } else {
        printf("Localização inválida.\n");
    }
}

// Função principal
int main() {
    // Exemplo de cadastro e consulta
    cadastrarProduto(0, 1, 2, "Produto A", 1001);
    cadastrarProduto(0, 1, 3, "Produto B", 1002);
    listarProdutos();
    consultarProduto(0, 1, 2);

    return 0;
}
