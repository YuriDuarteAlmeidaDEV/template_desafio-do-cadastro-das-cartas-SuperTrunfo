#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char Estado1;
    char Codigo1[4];
    char NomeCidade1[50];
    unsigned long int Populacao1;
    unsigned int Area1;
    double PIB1;
    int PontosTuristicos1;
    double Densidade_Populacional1;
    double PIB_per_Capta1;
    float SuperPoder1;

    // Variáveis da Carta 2
    char Estado2;
    char Codigo2[4];
    char NomeCidade2[50];
    unsigned long int Populacao2;
    unsigned int Area2;
    double PIB2;
    int PontosTuristicos2;
    double Densidade_Populacional2;
    double PIB_per_Capta2;
    float SuperPoder2;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Digite o estado (De A a H): \n");
    scanf(" %c", &Estado1);

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", NomeCidade1);

    printf("Digite a população: \n");
    scanf("%lu", &Populacao1);

    printf("Digite a área (em km²): \n");
    scanf("%u", &Area1);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%lf", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos1);

    Densidade_Populacional1 = Populacao1 / Area1;
    PIB_per_Capta1 = (PIB1 * 1000000000) / Populacao1;
    SuperPoder1 = Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PIB_per_Capta1 + Densidade_Populacional1);

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o estado (De A a H): \n");
    scanf(" %c", &Estado2);

    printf("Digite o código da carta (ex: B02): \n");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", NomeCidade2);

    printf("Digite a população: \n");
    scanf("%lu", &Populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%u", &Area2);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%lf", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos2);

    Densidade_Populacional2 = Populacao2 / Area2;
    PIB_per_Capta2 = (PIB2 * 1000000000) / Populacao2;
    SuperPoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIB_per_Capta2 + Densidade_Populacional2;

    float resultado = SuperPoder1 > SuperPoder2;

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2lf km²\n", Area1);
    printf("PIB: %.2lf bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2lf hab/km²\n", Densidade_Populacional1);
    printf("PIB per Capta: R$%.2lf\n", PIB_per_Capta1);
    printf("O Super Poder é de: %.2f\n", SuperPoder1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2lf km²\n", Area2);
    printf("PIB: %.2lf bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", Densidade_Populacional2);
    printf("PIB per Capta: R$%.2lf\n", PIB_per_Capta2);
    printf("O Super Poder é de: %.2f\n", SuperPoder2);

    printf("A carta %s ganhou!\n", resultado);

    return 0
}