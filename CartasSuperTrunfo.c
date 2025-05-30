#include <stdio.h>

int main() {

    unsigned long int populacao; 
    int pontos_turisticos;
    char estado [30], cidade [30], carta [10];
    float area, pib, divisaoDENS, divisaoPIB;

    printf("   carta 01\n");

    printf(".\n");

    printf("qual o codigo da carta: \n");
    scanf("%s", carta); 

    printf("qual o nome da cidade? \n");
    scanf("%s", cidade);

    printf("qual o estado? \n");
    scanf("%s", estado);

    printf("qual a população: \n");
    scanf("%lu", &populacao);

    printf("qual o pib? \n");
    scanf("%f", &pib);

    printf("quantos pontos turisticos? \n");
    scanf("%d", &pontos_turisticos);

    printf("qual a area? \n");
    scanf("%f", &area);
     
    printf(".\n");

    unsigned long int populacao2; 
    int pontos_turisticos2;
    char estado2[30], cidade2[30], carta2[10];
    float area2, pib2, divisao2DENS, divisao2PIB;

    printf("   carta: 02\n");

    printf(".\n");

    printf("qual o codigo da carta: \n");
    scanf("%s", carta2);

    printf("qual o nome da cidade? \n");
    scanf("%s", cidade2);

    printf("qual o estado? \n");
    scanf("%s", estado2);

    printf("qual a população: \n");
    scanf("%lu", &populacao2);

    printf("qual o pib? \n");
    scanf("%f", &pib2);

    printf("quantos pontos turisticos? \n");
    scanf("%d", &pontos_turisticos2);

    printf("qual a area? \n");
    scanf("%f", &area2);

       printf(".\n");

    printf("  carta 01  \n");
    printf("carta: %s\n", carta);
    printf("populacao: %lu\n", populacao);
    printf("cidade: %s\n", cidade);
    printf("pib: %.2f\n", pib); 
    printf("pontos turisticos: %d\n", pontos_turisticos);
    printf("area: %.2f\n", area);
    printf("estado: %s\n", estado);
    printf("densidade populacional: %.2f \n", divisaoDENS);
    printf("pib per capita: %.2f\n", divisaoPIB);

    printf(".\n");

    printf("   carta 02  \n");
    printf("carta: %s\n", carta2);
    printf("populacao: %lu\n", populacao2);
    printf("cidade: %s\n", cidade2);
    printf("pib: %.2f\n", pib2);
    printf("pontos turisticos: %d\n", pontos_turisticos2);
    printf("area: %.2f\n", area2);
    printf("estado: %s\n", estado2);
    printf("densidade populacional: %.2f\n", divisao2DENS);
    printf("pib per capita: %.2f \n", divisao2PIB);

    return 0;
    }    
