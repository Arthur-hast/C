#include <stdio.h>

int main() {
    // -> MONTAGEM DA CARTA 1 <-

    // Caracteristicas da carta 1:

    char Estado_1[5]; // A UF do estado escolhido.
    char Codigo_carta_1[5]; // Letra inicial do estado + um numero.
    char nome_cidade_1[15]; // Nome da cidade.
    unsigned long int Populacao_1; // Quantidade da população.
    int Pontos_turisticos_1; //Quantidade de pontos turísticos.
    float Area_1, PIB_1; // Tamanho da área e o valor do PIB da cidade.
    float Densidade_Populacional_1;
    float Pib_per_capita_1;
    float superPoder_1;

    // Usuário colocará os dados da carta 1:
    printf("\n");
    printf("->>> PRIMEIRA CARTA <<<-: \n");
    printf("\n");

    printf("Digite a UF do estado [Ex.: Pernambuco = (PE), São Paulo = (SP)...]: ");
    scanf(" %s", Estado_1);

    printf("Digite o código da carta [Letra inicial do Estado + 01 - ex: A01, A02]: ");
    scanf("%s", Codigo_carta_1);

    printf("Insira o nome da Cidade (Que pertence ao estado escolhido): ");
    scanf("%s", nome_cidade_1);

    printf("Digite o número da população: ");
    scanf("%lu", &Populacao_1);

    printf("Digite a área territorial da cidade (km²): ");
    scanf("%f", &Area_1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB_1);

    printf("Insira quantos pontos turísticos há na cidade: ");
    scanf("%d", &Pontos_turisticos_1);

    //<< Cálculo da DENSIDADE POPULACIONAL e PIB PER CAPITA da carta 1 >>

    Densidade_Populacional_1 = (float) (Populacao_1 / Area_1);
    Pib_per_capita_1 = (float) ((PIB_1 *1000000000.0) / Populacao_1);

    //<< Cálculo do "Super Poder" da carta 1 >>

    superPoder_1 = (float)Populacao_1 + Area_1 + PIB_1 + (float)Pontos_turisticos_1 + Pib_per_capita_1 - (1.0 / Densidade_Populacional_1);
    
    // -> MONTAGEM DA CARTA 2 <-

    //Caracteristicas da carta 2:

    char Estado_2[5];
    char Codigo_carta_2[5];
    char nome_cidade_2[15];
    unsigned long int Populacao_2;
    int Pontos_turisticos_2;
    float Area_2, PIB_2;
    float Densidade_populacional_2, Pib_per_capita_2, superPoder_2;

    //Usuário colocará os dados da carta 2:
    printf("\n");
    printf("->>> SEGUNDA CARTA <<<-: \n");
    printf("\n");

    printf("Digite a UF do estado [Ex.: Pernambuco = (PE), São Paulo = (SP)...]: ");
    scanf(" %s", Estado_2);

    printf("Digite o código da carta [Letra inicial do Estado + 01 - ex: A01, A02]: ");
    scanf("%s", Codigo_carta_2);

    printf("Insira o nome da Cidade (Que pertence ao estado escolhido): ");
    scanf("%s", nome_cidade_2);

    printf("Digite o número da população: ");
    scanf("%lu", &Populacao_2);

    printf("Digite a área territorial da cidade (km²): ");
    scanf("%f", &Area_2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB_2);

    printf("Insira quantos pontos turísticos há na cidade: ");
    scanf("%d", &Pontos_turisticos_2);

    //<< Cálculo da "DENSIDADE POPULACIONAL" e "PIB PER CAPITA" da carta 1 >>

    Densidade_populacional_2 = (float) (Populacao_2 / Area_2);
    Pib_per_capita_2 = (float) ((PIB_2 *1000000000.0) / Populacao_2);

    //<< Cálculo do "Super Poder" da Carta 2 >>

    superPoder_2 = (float)Populacao_2 + Area_2 + PIB_2 + (float)Pontos_turisticos_2 + Pib_per_capita_2 - (1.0 / Densidade_populacional_2);


    //<<DADOS DA CARTA 1>>
    printf("\n");
    printf("<<< CARTA 01 >>> \n");
    printf("\n");
    printf("Estado: %s\n", Estado_1);
    printf("Código: %s\n", Codigo_carta_1);
    printf("Nome da cidade: %s\n", nome_cidade_1);
    printf("População: %lu\n", Populacao_1);
    printf("Área: %.2fKm²\n", Area_1);
    printf("PIB: R$%.1f bilhões de reais\n", PIB_1);
    printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional_1);
    printf("PIB Per Capita: R$%.2f reais\n", Pib_per_capita_1);
    printf("Super Poder: %.2f\n",  superPoder_1);

    //<<DADOS DA CARTA 2>>
    printf("\n");
    printf("<<< CARTA 2 >>> \n");
    printf("\n");
    printf("Estado: %s\n", Estado_2);
    printf("Código: %s\n", Codigo_carta_2);
    printf("Nome da cidade: %s\n", nome_cidade_2);
    printf("População: %lu\n", Populacao_2);
    printf("Área: %.2fKm²\n", Area_2);
    printf("PIB: R$%.1f bilhões de reais\n", PIB_2);
    printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional_2);
    printf("PIB Per Capita: R$%.2f reais\n", Pib_per_capita_2);
    printf("Super Poder: %.2f\n",  superPoder_2);

    //<< ELABORÇÃO DE COMPARAÇÃO ENTRE OS ATRIBUTOS DAS CARTAS >>
    
    int atributo1, atributo2; // Variavel para armazenar a escolha que o jogador fizer no menu interativo.

    printf("\n");
    printf("Escolha qual atributo você quer comparar:"); // Menu interativo para a escolha do atributo de comparação.
    printf("\n");
    
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder\n");

    printf("\n");
    printf("Escolha o primeiro atributo:");
    scanf("%d", &atributo1);
    printf("\n");
    
    switch (atributo1)
    {
    case 1:
        printf("\n");
        printf("<< Comparação de cartas: (Primeiro Atributo - População) >>\n"); // TITULO
        printf("\n");

       if (Populacao_1 > Populacao_2){ //DADOS DE DECISÃO USANDO "IF/ELSE"
        printf("Carta 1 - %s (%s): %lu\n", nome_cidade_1, Estado_1, Populacao_1); // DADOS DE CONFIRMAÇÃO POSITIVA.
        printf("Carta 2 - %s (%s): %lu\n", nome_cidade_2, Estado_2, Populacao_2);
        printf("Resultado: Carta 1 (%s) venceu!", nome_cidade_1);
    } else if (Populacao_1 < Populacao_2) { 
        printf("Carta 1 - %s (%s): %lu\n", nome_cidade_1, Estado_1, Populacao_1); // DADOS DE CONFIRMAÇÃO POSITIVA.
        printf("Carta 2 - %s (%s): %lu\n", nome_cidade_2, Estado_2, Populacao_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
    } else {
        printf("Carta 1 - %s (%s): %lu\n", nome_cidade_1, Estado_1, Populacao_1); // DADOS DE CONFIRMAÇÃO NEGATIVA.
        printf("Carta 2 - %s (%s): %lu\n", nome_cidade_2, Estado_2, Populacao_2);
        printf("Resultado: Empate!\n");
    }
        break;

    case 2:
        printf("\n");
        printf("<< Comparação de cartas: (Primeiro Atributo - Área Km²) >>\n");
        printf("\n");

        if (Area_1 > Area_2){
        printf("Carta 1 - %s (%s): %.2fKm²\n", nome_cidade_1, Estado_1, Area_1);
        printf("Carta 2 - %s (%s): %.2fkm²\n", nome_cidade_2, Estado_2, Area_2);
        printf("Resultado: Carta 1 (%s) venceu!", nome_cidade_1);
    } else if (Area_1 < Area_2) {
        printf("Carta 1 - %s (%s): %.2fKm²\n", nome_cidade_1, Estado_1, Area_1);
        printf("Carta 2 - %s (%s): %.2fKm²\n", nome_cidade_2, Estado_2, Area_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
    } else {
        printf("Carta 1 - %s (%s): %.2fKm²\n", nome_cidade_1, Estado_1, Area_1);
        printf("Carta 2 - %s (%s): %.2fKm²\n", nome_cidade_2, Estado_2, Area_2);
        printf("Resultado: Empate!\n");
    }
        break;

    case 3:
        printf("\n");
        printf("<< Comparação de cartas: (Primeiro Atributo - PIB) >>\n");
        printf("\n");

    if (PIB_1 > PIB_2){
        printf("Carta 1 - %s (%s): %.1f Bilhões de Reais\n", nome_cidade_1, Estado_1, PIB_1);
        printf("Carta 2 - %s (%s): %.1f Bilhões de Reais\n", nome_cidade_2, Estado_2, PIB_2);
        printf("Resultado: Carta 1 (%s) venceu!", nome_cidade_1);
    } else if (PIB_1 < PIB_2){
        printf("Carta 1 - %s (%s): %.1f Bilhões de Reais\n", nome_cidade_1, Estado_1, PIB_1);
        printf("Carta 2 - %s (%s): %.1f Bilhões de Reais\n", nome_cidade_2, Estado_2, PIB_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
    } else {
        printf("Carta 1 - %s (%s): %.1f Bilhões de Reais\n", nome_cidade_1, Estado_1, PIB_1);
        printf("Carta 2 - %s (%s): %.1f Bilhões de Reais\n", nome_cidade_2, Estado_2, PIB_2);
        printf("Resultado: Empate!\n");
    }
        break;

    case 4:
        printf("\n");
        printf("<< Comparação de cartas: (Primeiro Atributo - Pontos Turísticos) >>\n");
        printf("\n");

    if (Pontos_turisticos_1 > Pontos_turisticos_2){
        printf("Carta 1 - %s (%s): %d\n", nome_cidade_1, Estado_1, Pontos_turisticos_1);
        printf("Carta 2 - %s (%s): %d\n", nome_cidade_2, Estado_2, Pontos_turisticos_2);
        printf("Resultado: Carta 1 (%s) venceu!", nome_cidade_1);
    } else if (Pontos_turisticos_1 < Pontos_turisticos_2){
        printf("Carta 1 - %s (%s): %d\n", nome_cidade_1, Estado_1, Pontos_turisticos_1);
        printf("Carta 2 - %s (%s): %d\n", nome_cidade_2, Estado_2, Pontos_turisticos_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
    } else {
        printf("Carta 1 - %s (%s): %d\n", nome_cidade_1, Estado_1, Pontos_turisticos_1);
        printf("Carta 2 - %s (%s): %d\n", nome_cidade_2, Estado_2, Pontos_turisticos_2);
        printf("Resultado: Empate!\n");
    }
        break;

    case 5:
        printf("\n");
        printf("<< Comparação de cartas: (Primeiro Atributo - Densidade Populacional) >>\n");
        printf("\n");

    if (Densidade_Populacional_1 < Densidade_populacional_2){
        printf("Carta 1 - %s (%s): %.2f Hab/km²\n", nome_cidade_1, Estado_1, Densidade_Populacional_1);
        printf("Carta 2 - %s (%s): %.2f Hab/Km²\n", nome_cidade_2, Estado_2, Densidade_populacional_2);
        printf("Resultado: Carta 1 (%s) venceu!", nome_cidade_1);
    } else if (Densidade_Populacional_1 > Densidade_populacional_2){
        printf("Carta 1 - %s (%s): %.2f Hab/km²\n", nome_cidade_1, Estado_1, Densidade_Populacional_1);
        printf("Carta 2 - %s (%s): %.2f Hab/km²\n", nome_cidade_2, Estado_2, Densidade_populacional_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
    } else {
        printf("Carta 1 - %s (%s): %.2f Hab/km²\n", nome_cidade_1, Estado_1, Densidade_Populacional_1);
        printf("Carta 2 - %s (%s): %.2f Hab/km²\n", nome_cidade_2, Estado_2, Densidade_populacional_2);
        printf("Resultado: Empate!\n");
    }
        break;

    case 6:
        printf("\n");
        printf("<< Comparação de cartas: (Primeiro Atributo - PIB Per Capita) >>\n");
        printf("\n");

    if (Pib_per_capita_1 > Pib_per_capita_2){
        printf("Carta 1 - %s (%s): %.2f Reais\n", nome_cidade_1, Estado_1, Pib_per_capita_1);
        printf("Carta 2 - %s (%s): %.2f Reais\n", nome_cidade_2, Estado_2, Pib_per_capita_2);
        printf("Resultado: Carta 1 (%s) venceu!", nome_cidade_1);
    } else if (Pib_per_capita_1 < Pib_per_capita_2){
        printf("Carta 1 - %s (%s): %.2f Reais\n", nome_cidade_1, Estado_1, Pib_per_capita_1);
        printf("Carta 2 - %s (%s): %.2f Reais\n", nome_cidade_2, Estado_2, Pib_per_capita_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
    } else {
        printf("Carta 1 - %s (%s): %.2f Reais\n", nome_cidade_1, Estado_1, Pib_per_capita_1);
        printf("Carta 2 - %s (%s): %.2f Reais\n", nome_cidade_2, Estado_2, Pib_per_capita_2);
        printf("Resultado: Empate!\n");
    }
        break;

    case 7:
        printf("\n");
        printf("<< Comparação de cartas: (Primeiro Atributo - Super Poder) >>\n");
        printf("\n");

    if (superPoder_1 > superPoder_2){
        printf("Carta 1 - %s (%s): %.2f\n", nome_cidade_1, Estado_1, superPoder_1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_cidade_2, Estado_2, superPoder_2);
        printf("Resultado: Carta 1 (%s) venceu!", nome_cidade_1);
    } else if (superPoder_1 < superPoder_2){
        printf("Carta 1 - %s (%s): %.2f\n", nome_cidade_1, Estado_1, superPoder_1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_cidade_2, Estado_2, superPoder_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
    } else {
        printf("Carta 1 - %s (%s): %.2f\n", nome_cidade_1, Estado_1, superPoder_1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_cidade_2, Estado_2, superPoder_2);
        printf("Resultado: Empate\n");
    }
        break;
    
    default:
        printf("A opção inválida\n"); // CASO O USUÁRIO ESCOLHA OUTRA OPÇÃO QUE NÃO ESTEJA NO MENU INTERATIVO. 
        break;
    }


    printf("\n\n");
    printf("Escolha o segundo atributo:");
    scanf("%d", &atributo2);
    printf("\n");

    if (atributo1 == atributo2){ // USANDO O OPERADOR LÓGICO "IF/ELSE" PARA IMPEDIR QUE O USUÁRIO ESCOLHA O MESMO ATRIBUTO.
        printf("Você escolheu o mesmo atributo.\n");
    } else {

    switch (atributo2) // SEGUNDO ATRIBUTO ESCOLHIDO.
    {
    case 1:
        printf("\n");
        printf("<< Comparação de cartas: (Segundo Atributo - População) >>\n"); // TITULO
        printf("\n");

       if (Populacao_1 > Populacao_2) { //DADOS DE DECISÃO USANDO "IF/ELSE"
        printf("Carta 1 - %s (%s): %lu\n", nome_cidade_1, Estado_1, Populacao_1); // DADOS DE CONFIRMAÇÃO POSITIVA.
        printf("Carta 2 - %s (%s): %lu\n", nome_cidade_2, Estado_2, Populacao_2);
        printf("Resultado: Carta 1 (%s) venceu!", nome_cidade_1);
    } else if (Populacao_1 < Populacao_2) { 
        printf("Carta 1 - %s (%s): %lu\n", nome_cidade_1, Estado_1, Populacao_1); // DADOS DE CONFIRMAÇÃO POSITIVA.
        printf("Carta 2 - %s (%s): %lu\n", nome_cidade_2, Estado_2, Populacao_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
    } else {
        printf("Carta 1 - %s (%s): %lu\n", nome_cidade_1, Estado_1, Populacao_1); // DADOS DE CONFIRMAÇÃO NEGATIVA.
        printf("Carta 2 - %s (%s): %lu\n", nome_cidade_2, Estado_2, Populacao_2);
        printf("Resultado: Empate!\n");
    }
        break;

    case 2:
        printf("\n");
        printf("<< Comparação de cartas: (Segundo Atributo - Área Km²) >>\n");
        printf("\n");

        if (Area_1 > Area_2){
        printf("Carta 1 - %s (%s): %.2fKm²\n", nome_cidade_1, Estado_1, Area_1);
        printf("Carta 2 - %s (%s): %.2fkm²\n", nome_cidade_2, Estado_2, Area_2);
        printf("Resultado: Carta 1 (%s) venceu!", nome_cidade_1);
    } else if (Area_1 < Area_2) {
        printf("Carta 1 - %s (%s): %.2fKm²\n", nome_cidade_1, Estado_1, Area_1);
        printf("Carta 2 - %s (%s): %.2fKm²\n", nome_cidade_2, Estado_2, Area_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
    } else {
        printf("Carta 1 - %s (%s): %.2fKm²\n", nome_cidade_1, Estado_1, Area_1);
        printf("Carta 2 - %s (%s): %.2fKm²\n", nome_cidade_2, Estado_2, Area_2);
        printf("Resultado: Empate!\n");
    }
        break;

    case 3:
        printf("\n");
        printf("<< Comparação de cartas: (Segundo Atributo - PIB) >>\n");
        printf("\n");

    if (PIB_1 > PIB_2){
        printf("Carta 1 - %s (%s): %.1f Bilhões de Reais\n", nome_cidade_1, Estado_1, PIB_1);
        printf("Carta 2 - %s (%s): %.1f Bilhões de Reais\n", nome_cidade_2, Estado_2, PIB_2);
        printf("Resultado: Carta 1 (%s) venceu!", nome_cidade_1);
    } else if (PIB_1 < PIB_2){
        printf("Carta 1 - %s (%s): %.1f Bilhões de Reais\n", nome_cidade_1, Estado_1, PIB_1);
        printf("Carta 2 - %s (%s): %.1f Bilhões de Reais\n", nome_cidade_2, Estado_2, PIB_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
    } else {
        printf("Carta 1 - %s (%s): %.1f Bilhões de Reais\n", nome_cidade_1, Estado_1, PIB_1);
        printf("Carta 2 - %s (%s): %.1f Bilhões de Reais\n", nome_cidade_2, Estado_2, PIB_2);
        printf("Resultado: Empate!\n");
    }
        break;

    case 4:
        printf("\n");
        printf("<< Comparação de cartas: (Segundo Atributo - Pontos Turísticos) >>\n");
        printf("\n");

    if (Pontos_turisticos_1 > Pontos_turisticos_2){
        printf("Carta 1 - %s (%s): %d\n", nome_cidade_1, Estado_1, Pontos_turisticos_1);
        printf("Carta 2 - %s (%s): %d\n", nome_cidade_2, Estado_2, Pontos_turisticos_2);
        printf("Resultado: Carta 1 (%s) venceu!", nome_cidade_1);
    } else if (Pontos_turisticos_1 < Pontos_turisticos_2){
        printf("Carta 1 - %s (%s): %d\n", nome_cidade_1, Estado_1, Pontos_turisticos_1);
        printf("Carta 2 - %s (%s): %d\n", nome_cidade_2, Estado_2, Pontos_turisticos_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
    } else {
        printf("Carta 1 - %s (%s): %d\n", nome_cidade_1, Estado_1, Pontos_turisticos_1);
        printf("Carta 2 - %s (%s): %d\n", nome_cidade_2, Estado_2, Pontos_turisticos_2);
        printf("Resultado: Empate!\n");
    }
        break;

    case 5:
        printf("\n");
        printf("<< Comparação de cartas: (Segundo Atributo - Densidade Populacional) >>\n");
        printf("\n");

    if (Densidade_Populacional_1 < Densidade_populacional_2){
        printf("Carta 1 - %s (%s): %.2f Hab/km²\n", nome_cidade_1, Estado_1, Densidade_Populacional_1);
        printf("Carta 2 - %s (%s): %.2f Hab/Km²\n", nome_cidade_2, Estado_2, Densidade_populacional_2);
        printf("Resultado: Carta 1 (%s) venceu!", nome_cidade_1);
    } else if (Densidade_Populacional_1 > Densidade_populacional_2){
        printf("Carta 1 - %s (%s): %.2f Hab/km²\n", nome_cidade_1, Estado_1, Densidade_Populacional_1);
        printf("Carta 2 - %s (%s): %.2f Hab/km²\n", nome_cidade_2, Estado_2, Densidade_populacional_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
    } else {
        printf("Carta 1 - %s (%s): %.2f Hab/km²\n", nome_cidade_1, Estado_1, Densidade_Populacional_1);
        printf("Carta 2 - %s (%s): %.2f Hab/km²\n", nome_cidade_2, Estado_2, Densidade_populacional_2);
        printf("Resultado: Empate!\n");
    }
        break;

    case 6:
        printf("\n");
        printf("<< Comparação de cartas: (Segundo Atributo - PIB Per Capita) >>\n");
        printf("\n");

    if (Pib_per_capita_1 > Pib_per_capita_2){
        printf("Carta 1 - %s (%s): %.2f Reais\n", nome_cidade_1, Estado_1, Pib_per_capita_1);
        printf("Carta 2 - %s (%s): %.2f Reais\n", nome_cidade_2, Estado_2, Pib_per_capita_2);
        printf("Resultado: Carta 1 (%s) venceu!", nome_cidade_1);
    } else if (Pib_per_capita_1 < Pib_per_capita_2){
        printf("Carta 1 - %s (%s): %.2f Reais\n", nome_cidade_1, Estado_1, Pib_per_capita_1);
        printf("Carta 2 - %s (%s): %.2f Reais\n", nome_cidade_2, Estado_2, Pib_per_capita_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
    } else {
        printf("Carta 1 - %s (%s): %.2f Reais\n", nome_cidade_1, Estado_1, Pib_per_capita_1);
        printf("Carta 2 - %s (%s): %.2f Reais\n", nome_cidade_2, Estado_2, Pib_per_capita_2);
        printf("Resultado: Empate!\n");
    }
        break;

    case 7:
        printf("\n");
        printf("<< Comparação de cartas: (Segundo Atributo - Super Poder) >>\n");
        printf("\n");

    if (superPoder_1 > superPoder_2){
        printf("Carta 1 - %s (%s): %.2f\n", nome_cidade_1, Estado_1, superPoder_1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_cidade_2, Estado_2, superPoder_2);
        printf("Resultado: Carta 1 (%s) venceu!", nome_cidade_1);
    } else if (superPoder_1 < superPoder_2){
        printf("Carta 1 - %s (%s): %.2f\n", nome_cidade_1, Estado_1, superPoder_1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_cidade_2, Estado_2, superPoder_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
    } else {
        printf("Carta 1 - %s (%s): %.2f\n", nome_cidade_1, Estado_1, superPoder_1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_cidade_2, Estado_2, superPoder_2);
        printf("Resultado: Empate\n");
    }
        break;
    
    default:
        printf("A opção inválida\n");
        break;
    }
}

    return 0;
}