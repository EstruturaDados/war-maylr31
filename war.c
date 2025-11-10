#include <stdio.h>
#include <string.h>

#define QTD_TERRITORIOS 5

// Definição da struct Territorio
struct Territorio {
    char nome[50];
    char corExercito[20];
    int tropas;
};

int main() {
    struct Territorio territorios[QTD_TERRITORIOS];
    
    printf("=== Cadastro de Territórios ===\n");

    // Cadastro dos 5 territórios
    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("\n--- Território %d ---\n", i + 1);

        printf("Nome: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0'; // remove o \n

        printf("Cor do Exército: ");
        fgets(territorios[i].corExercito, sizeof(territorios[i].corExercito), stdin);
        territorios[i].corExercito[strcspn(territorios[i].corExercito, "\n")] = '\0';

        printf("Número de Tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); // consome o '\n' deixado pelo scanf
    }

    // Exibição dos dados cadastrados
    printf("\n=== Estado Atual do Mapa ===\n");
    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("\nTerritório %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].corExercito);
        printf("Número de Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
