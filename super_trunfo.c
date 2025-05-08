#include <stdio.h>

int main()
{
    // Declarando o tipo de variavéis da carta 1
    char carta1;
    char nome_estado[50];
    int populacao, codigo_carta, numero_pontos_turisticos;
    float area_km, pib;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
    int resultado;

    // Solicitando ao usuário os dados da carta 1
    printf("Digite o nome do estado: \n");
    scanf("%s", nome_estado);

    printf("Digite o codigo da carta: \n");
    scanf("%d", &codigo_carta);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_pontos_turisticos);

    printf("Digite a área em km : \n");
    scanf("%f", &area_km);

    printf("Digite o valor do pib: \n");
    scanf("%f", &pib);

    densidade_populacional = (float)populacao / area_km;
    printf("A densidade populacional é : %.2f\n", densidade_populacional);

    pib_per_capita = (float)pib / populacao;
    printf("O pib per capita é : %.2f\n", pib_per_capita);

    super_poder = (populacao + area_km + pib + numero_pontos_turisticos + pib_per_capita), densidade_populacional = area_km / populacao;
    printf("O super poder da carta 1 é : %.2f\n", super_poder);

    char carta2;
    char nome_estado2[50];
    int populacao2, codigo_carta2, numero_pontos_turisticos2;
    float area_km2, pib2;
    float pib_per_capita2;
    float densidade_populacional2;
    float super_poder2;

    // Solicitando ao usuário os dados da carta 2

    printf("Digite o nome do estado: \n");
    scanf("%s", nome_estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%d", &codigo_carta2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_pontos_turisticos2);

    printf("Digite a área em km : \n");
    scanf("%f", &area_km2);

    printf("Digite o valor do pib: \n");
    scanf("%f", &pib2);

    densidade_populacional2 = (float)populacao2 / area_km2;
    printf("A densidade populacional é : %.2f\n", densidade_populacional2);

    pib_per_capita2 = (float)pib2 / populacao2;
    printf("O pib per capita é : %.2f\n", pib_per_capita2);

    super_poder2 = (populacao2 + area_km2 + pib2 + numero_pontos_turisticos2 + pib_per_capita2), densidade_populacional2 = area_km2 / populacao2;
    printf("O super poder da carta 1 é : %.2f\n", super_poder2);

    // menu de comparação do primeiro atributo
    int primeiroAtributo, segundoAtributo;
    int resultado1, resultado2, somaAtributos;

    printf("Bem vindo ao jogo\n");
    printf("Escolha uma atributo a ser comparado: \n");
    printf("1. Populacao\n");
    printf("2. numero de pontos turísticos\n");
    printf("3. pib\n");
    printf("4. area km\n");
    printf("5. pib per capita\n");
    printf("6. densidade populacional\n");
    printf("Escolha o atributo: \n");

    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 1:
        printf("Você escolheu a opção população\n");
        printf("nome do estado :%s\nnome do estado 2 :%s\n", nome_estado, nome_estado2);
        resultado1 = populacao > populacao2 ? 1 : 0;
        printf("populacao 1: %d\npopulacao 2: %d\n", populacao, populacao2);
        break;
    case 2:
        printf("Você escolheu a opção número de pontos turísticos\n");
        printf("nome do estado :%s\nnome do estado 2 :%s\n", nome_estado, nome_estado2);
        resultado1 = numero_pontos_turisticos > numero_pontos_turisticos2 ? 1 : 0;
        printf("numero de pontos turísticos 1: %d\nnumero de pontos turísticos 2: %d\n", numero_pontos_turisticos, numero_pontos_turisticos2);
        break;
    case 3:
        printf("Você escolheu a opção pib\n");
        printf("nome do estado :%s\nnome do estado 2 :%s\n", nome_estado, nome_estado2);
        resultado1 = pib > pib2 ? 1 : 0;
        printf("pib 1: %f\npib 2: %f\n", pib, pib2);
        break;
    case 4:
        printf("Você escolheu a opção area km\n");
        printf("nome do estado :%s\nnome do estado 2 :%s\n", nome_estado, nome_estado2);
        resultado1 = area_km > area_km2 ? 1 : 0;
        printf("area km 1: %f\narea km 2: %f\n", area_km, area_km2);
        break;
    case 5:
        printf("Você escolheu a opção pib per capita\n");
        printf("nome do estado :%s\nnome do estado 2 :%s\n", nome_estado, nome_estado2);
        resultado1 = pib_per_capita > pib_per_capita2 ? 1 : 0;
        printf("pib per capita 1: %f\npib per capita 2: %f\n", pib_per_capita, pib_per_capita2);
        break;
    case 6:
        printf("Você escolheu a opção densidade populacional\n");
        printf("nome do estado :%s\nnome do estado 2 :%s\n", nome_estado, nome_estado2);
        resultado1 = densidade_populacional < densidade_populacional2 ? 1 : 0;
        printf("densidade populacional 1: %f\ndensidade populacional 2: %f\n", densidade_populacional, densidade_populacional2);
        break;
    default:
        printf("Opção inválida\n");
        break;
    }
    // menu de comparação do segundo atributo
    printf("Escolha um segundo atributo a ser comparado\n");
    printf("1. Populacao\n");
    printf("2. numero de pontos turísticos\n");
    printf("3. pib\n");
    printf("4. area km\n");
    printf("5. pib per capita\n");
    printf("6. densidade populacional\n");
    printf("7. sair do jogo\n");
    printf("Escolha o atributo: \n");
    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo\n");
    }
    else
    {
        switch (segundoAtributo)
        {
        case 1:
            printf("Você escolheu a opção população\n");
            printf("nome do estado :%s\nnome do estado 2 :%s\n", nome_estado, nome_estado2);
            resultado2 = populacao > populacao2 ? 1 : 0;
            printf("populacao 1: %d\npopulacao 2: %d\n", populacao, populacao2);

            break;
        case 2:
            printf("Você escolheu a opção número de pontos turísticos\n");
            printf("nome do estado :%s\nnome do estado 2 :%s\n", nome_estado, nome_estado2);
            resultado2 = numero_pontos_turisticos > numero_pontos_turisticos2 ? 1 : 0;
            printf("numero de pontos turísticos 1: %d\nnumero de pontos turísticos 2: %d\n", numero_pontos_turisticos, numero_pontos_turisticos2);
            break;
        case 3:
            printf("Você escolheu a opção pib\n");
            printf("nome do estado :%s\nnome do estado 2 :%s\n", nome_estado, nome_estado2);
            resultado2 = pib > pib2 ? 1 : 0;
            printf("pib 1: %f\npib 2: %f\n", pib, pib2);
            break;
        case 4:
            printf("Você escolheu a opção area km\n");
            printf("nome do estado :%s\nnome do estado 2 :%s\n", nome_estado, nome_estado2);
            resultado2 = area_km > area_km2 ? 1 : 0;
            printf("area km 1: %f\narea km 2: %f\n", area_km, area_km2);
            break;
        case 5:
            printf("Você escolheu a opção pib per capita\n");
            printf("nome do estado :%s\nnome do estado 2 :%s\n", nome_estado, nome_estado2);
            resultado2 = pib_per_capita > pib_per_capita2 ? 1 : 0;
            printf("pib per capita 1: %f\npib per capita 2: %f\n", pib_per_capita, pib_per_capita2);
            break;
        case 6:
            printf("Você escolheu a opção densidade populacional\n");
            printf("nome do estado :%s\nnome do estado 2 :%s\n", nome_estado, nome_estado2);
            resultado2 = densidade_populacional < densidade_populacional2 ? 1 : 0;
            printf("densidade populacional 1: %f\ndensidade populacional 2: %f\n", densidade_populacional, densidade_populacional2);
            break;
        case 7:
            printf("Saindo do jogo...");
            break;
        default:
        printf("Opção inválida\n");
        break;
     }
        //Variável super de ambas as cartas é a soma de todos os atributos 
        somaAtributos = super_poder > super_poder2 ? 1 : 0;
        printf("a soma dos atributos da carta 1 é : %f\nsoma dos atributos da carta 2 é %f\n", super_poder, super_poder2);
        
        if (resultado1 && resultado2 && somaAtributos == 1)
        {
         printf("Parabéns, você venceu!");
        }
         else if (resultado1 != resultado2)
        {
        printf("Empatou");
        }
        else{
        printf("Você perdeu");
        }
    }

}   