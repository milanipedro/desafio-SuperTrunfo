#include <stdio.h>

int main(){
	char estado, estado2;
	char codigo_carta, codigo_carta2;
	char nome_cidade[25], nome_cidade2[25];
	int pontos_turisticos, pontos_turisticos2;
	unsigned long int populacao, populacao2; // alteracao do lvl mestre - armazenar maior numero.
	float pib, pib2, area, area2;


	printf("Estado primeira carta (A-H): ");
	scanf(" %c", &estado);
	printf("Estado segunda carta (A-H): ");
	scanf(" %c", &estado2);

	printf("Codigo da primeira carta (0-4): ");
	scanf(" %c", &codigo_carta);
	printf("Codigo da segunda carta (0-4): ");
	scanf(" %c", &codigo_carta2);

	printf("Nome da primeira cidade: ");
	scanf("%s", nome_cidade);
	printf("Nome da segunda cidade: ");
	scanf("%s", nome_cidade2);

	printf("Populacao total de %s: ", nome_cidade);
	scanf("%lu", &populacao);
	printf("Populacao total de %s: ", nome_cidade2);
	scanf("%lu", &populacao2);

	printf("Area de %s (km2): ", nome_cidade);
	scanf("%f", &area);
	printf("Area de %s (km2): ", nome_cidade2);
	scanf("%f", &area2);
	
	printf("PIB de %s: ", nome_cidade);
	scanf("%f", &pib);
	printf("PIB de %s: ", nome_cidade2);
	scanf("%f", &pib2);

	printf("Pontos turisticos de %s: ", nome_cidade);
	scanf("%i", &pontos_turisticos);
	printf("Pontos turisticos de %s: ", nome_cidade2);
	scanf("%i", &pontos_turisticos2);
	
	// acrescimos do nivel aventureiro: //
	float densidade_populacional = populacao/area, densidade_populacional2 = populacao2/area2, pib_per_capita = pib/populacao, pib_per_capita2 = pib2/populacao2;
	
	// /-------------------------------------------------------\ //
	// acrescimos do nivel mestre: //
	float superpoder = populacao + area + pib + pontos_turisticos + pib_per_capita + (1/densidade_populacional);
	float superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1/densidade_populacional2);
	
	int resultado_populacao = populacao > populacao2;
	int resultado_area = area > area2;
	int resultado_pib = pib > pib2;
	int resultado_pontos_turisticos = pontos_turisticos > pontos_turisticos2;
	int resultado_densidade_populacional = densidade_populacional < densidade_populacional2;
	int resultado_pib_per_capita = pib_per_capita > pib_per_capita2;
	int resultado_super_poder = superpoder > superpoder2;
	
	printf("\nComparando as Cartas - SuperTrunfo:");
	printf("\nPopulacao: %i", resultado_populacao);
	printf("\nArea: %i", resultado_area);
	printf("\nPIB: %i", resultado_pib);
	printf("\nPontos turisticos: %i", resultado_pontos_turisticos);
	printf("\nDensidade populacional: %i", resultado_densidade_populacional);
	printf("\nPIB per capita: %i", resultado_pib_per_capita);
	printf("\nSuper Poder: %i", resultado_super_poder);

	return 0;
}

