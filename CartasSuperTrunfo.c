#include <stdio.h>

int main(){
    //Variáveis
    char estado,cidade[20],codigo[5],estado2,cidade2[20],codigo2[5];
    int populacao,pontos,populacao2,pontos2;
    float area,pib,area2,pib2;
    
    //Comandos da carta 1

    printf("Carta 1\n");
    printf("Digite a letra do estado de A a H:");
    scanf("%c", &estado);
    printf("Digite o código do estado:");
    scanf("%s", &codigo);
    printf("Digite a cidade:");
    scanf("%s", &cidade);
    printf("Digite a população:");
    scanf("%i", &populacao);
    printf("Digite a área:");
    scanf("%f", &area);
    printf("Digite o PIB:");
    scanf("%f", &pib);
    printf("Qauntidade de pontos turísticos:");
    scanf("%i",&pontos);

    //Comandos carta 2

    printf("Carta 2\n");
    printf("Digite a letra do estado de A a H:");
    scanf(" %c", &estado2); //Espaço antes do especificador de formato, pois o scanf estava lendo a próximo scanf causando um loop
    printf("Digite o código do estado:");
    scanf(" %s", &codigo2);
    printf("Digite a cidade:");
    scanf("%s", &cidade2);
    printf("Digite a população:");
    scanf("%i", &populacao2);
    printf("Digite a área:");
    scanf("%f", &area2);
    printf("Digite o PIB:");
    scanf("%f", &pib2);
    printf("Qauntidade de pontos turísticos:");
    scanf("%i",&pontos2);
    
    //Finalização expondo os dados das cartas ao usuário 

    printf("Carta 1:\nEstado:%c\nCodigo:%s\nCidade:%s\nPopulação:%i\nÁrea:%.2f Km²\nPIB:%.2f Bilhões de reais\nQuantidade de pontos turístcos:%i\n\n",estado,codigo,cidade,populacao,area,pib,pontos);
    printf("Carta 2:\nEstado:%c\nCodigo:%s\nCidade:%s\nPopulação:%i\nÁrea:%.2f Km²\nPIB:%.2f Bilhões de reais\nQuantidade de pontos turístcos:%i\n",estado2,codigo2,cidade2,populacao2,area2,pib2,pontos2);

    return 0;

} 
