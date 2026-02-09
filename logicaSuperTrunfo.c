#include <stdio.h>

int main() {
   
    char estado1[3], codigo1[10], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1;
    
  
    char estado2[3], codigo2[10], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2;

   
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    
    densidade1 = (float)populacao1 / area1;

    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = (float)populacao2 / area2;

   
    printf("Comparação de cartas (PIB):\n");

   
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib2);

    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}