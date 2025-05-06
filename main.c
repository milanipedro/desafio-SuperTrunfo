#include <stdio.h>

int main(){
	char estado, estado2;
	char codigo_carta, codigo_carta2;
	char nome_cidade[25], nome_cidade2[25];
	int pontos_turisticos, pontos_turisticos2, populacao, populacao2;
	float pib, pib2, area, area2;
	
	// acréscimos do nível aventureiro: //
	// calcular densidade populacional (populacao/area), pib per capita (pib/populacao), exibir novos resultados. //
	float densidade_populacional, densidade_populacional2, pib_per_capita, pib_per_capita2;
	

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
	scanf("%i", &populacao);
	printf("Populacao total de %s: ", nome_cidade2);
	scanf("%i", &populacao2);

	printf("Area de %s (km2): ", nome_cidade);
	scanf("%f", &area);
	printf("Area de %s (km2): ", nome_cidade2);
	scanf("%f", &area2);

	// calculando densidade populacional (nível aventureiro) //
	densidade_populacional = populacao/area;
	densidade_populacional2 = populacao2/area2;
	// ---------------------------------------------------- //

	printf("PIB de %s: ", nome_cidade);
	scanf("%f", &pib);
	printf("PIB de %s: ", nome_cidade2);
	scanf("%f", &pib2);
	
	// calculando pib per capita (nível aventureiro) //
	pib_per_capita = pib/populacao;
	pib_per_capita2 = pib2/populacao2;
	// -------------------------------------------- //

	printf("Pontos turisticos de %s: ", nome_cidade);
	scanf("%i", &pontos_turisticos);
	printf("Pontos turisticos de %s: ", nome_cidade2);
	scanf("%i", &pontos_turisticos2);

	printf("\nCarta 01:");
	printf("\nEstado: %c", estado);
	printf("\nCodigo: %c%c", estado, codigo_carta);
	printf("\nNome da cidade: %s", nome_cidade);
	printf("\nPopulacao: %i", populacao);
	printf("\nArea: %.2f km2", area);
	printf("\nPIB: %.2f", pib);
	printf("\nPontos turisticos: %i", pontos_turisticos);
	printf("\nDensidade Populacional: %.2f hab/km2", densidade_populacional);
	printf("\nPIB per capita: %.2f reais", pib_per_capita);

	printf("\n\nCarta 02:");
	printf("\nEstado: %c", estado2);
	printf("\nCodigo: %c%c", estado2, codigo_carta2);
	printf("\nNome da cidade: %s", nome_cidade2);
	printf("\nPopulacao: %i", populacao2);
	printf("\nArea: %.2f km2", area2);
	printf("\nPIB: %.2f", pib2);
	printf("\nPontos turisticos: %i", pontos_turisticos2);
	printf("\nDensidade Populacional: %.2f hab/km2", densidade_populacional2);
	printf("\nPIB per capita: %.2f reais", pib_per_capita2);

	return 0;
}

