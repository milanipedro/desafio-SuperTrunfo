#include <stdio.h>

// Anotações de COMPARAÇÃO:
// 1 = verdadeiro.
// 0 = falso.

int escolha_menu_inicial, escolha_menu_comparacao;

unsigned long int populacao, populacao2;
float pib, pib2, area, area2;
int pontos_turisticos, pontos_turisticos2;
char nome_cidade[25], nome_cidade2[25];

int funcao_escolha_comparacao_cartas();

int funcao_jogo_inserindo_dados() {
	char estado, estado2;
	char codigo_carta, codigo_carta2;

	printf("\nEstado primeira carta (A-H): ");
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

	funcao_escolha_comparacao_cartas();
	return 0;
}

int funcao_escolha_comparacao_cartas() {
	printf("\n\n#####|- ESCOLHA O QUE PRETENDE COMPARAR: -|#####\n");

	printf("1. Populacao.\n2. Area.\n3. PIB.\n4. Pontos turisticos.\n5. Densidade demografica.\nEscolha: ");
	scanf("%i", &escolha_menu_comparacao);
	printf("\n");

	float densidade_populacional = populacao / area;
	float densidade_populacional2 = populacao2 / area2;
	float pib_per_capita = pib / populacao;
	float pib_per_capita2 = pib2 / populacao2;
	float superpoder = populacao + area + pib + pontos_turisticos + pib_per_capita + (1 / densidade_populacional);
	float superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

	int resultado_populacao = populacao > populacao2;
	int resultado_area = area > area2;
	int resultado_pib = pib > pib2;
	int resultado_pontos_turisticos = pontos_turisticos > pontos_turisticos2;
	int resultado_densidade_populacional = densidade_populacional < densidade_populacional2;

	switch (escolha_menu_comparacao) {
	case 1:
		if (resultado_populacao == 1) {
			printf("A populacao de %s (%lu) > que a populacao de %s (%lu).", nome_cidade, populacao, nome_cidade2, populacao2);
		}
		else if (resultado_populacao == 0) {
			printf("A populacao de %s (%lu) > que a populacao de %s (%lu).", nome_cidade2, populacao2, nome_cidade, populacao);
		}
		else {
			printf("%s e %s possuem populacoes iguais (%lu).", nome_cidade, nome_cidade2, populacao);
		}
		break;
	case 2:
		if (resultado_area == 1) {
			printf("A area de %s (%.2f) > que a area de %s (%.2f).", nome_cidade, area, nome_cidade2, area2);
		}
		else if (resultado_area == 0) {
			printf("A area de %s (%.2f) > que a area de %s (%.2f).", nome_cidade2, area2, nome_cidade, area);
		}
		else {
			printf("%s e %s possuem areas iguais (%.2f).", nome_cidade, nome_cidade2, area);
		}
		break;
	case 3:
		if (resultado_pib == 1) {
			printf("O pib de %s (%.2f) > que o pib de %s (%.2f).", nome_cidade, pib, nome_cidade2, pib2);
		}
		else if (resultado_pib == 0) {
			printf("O pib de %s (%.2f) > que o pib de %s (%.2f).", nome_cidade2, pib2, nome_cidade, pib);
		}
		else {
			printf("%s e %s possuem PIB's iguais (%.2f).", nome_cidade, nome_cidade2, pib);
		}
		break;
	case 4:
		if (resultado_pontos_turisticos == 1) {
			printf("Os pontos turisticos de %s (%i) > que os pontos turisticos de %s (%i).", nome_cidade, pontos_turisticos, nome_cidade2, pontos_turisticos2);
		}
		else if (resultado_pontos_turisticos == 0) {
			printf("Os pontos turisticos de %s (%i) > que os pontos turisticos de %s (%i).", nome_cidade2, pontos_turisticos2, nome_cidade, pontos_turisticos);
		}
		else {
			printf("%s e %s possuem pontos turisticos iguais (%i).", nome_cidade, nome_cidade2, pontos_turisticos);
		}
		break;
	case 5:
		if (resultado_densidade_populacional == 1) {
			printf("A densidade demografica de %s (%.2f) < que a densidade demografica de %s (%.2f).", nome_cidade, densidade_populacional, nome_cidade2, densidade_populacional2);
		}
		else if (resultado_densidade_populacional == 0) {
			printf("A densidade demografica de %s (%.2f) < que a densidade demografica de %s (%.2f).", nome_cidade2, densidade_populacional2, nome_cidade, densidade_populacional);
		}
		else {
			printf("%s e %s possuem densidades demograficas iguais (%.2f).", nome_cidade, nome_cidade2, densidade_populacional);
		}
		break;
	default:
		printf("Escolha invalida, tente novamente mais tarde.");
		break;
	}

	return 0;
}

int funcao_jogo_completo() {
	printf("\n#####|- BEM-VINDO(A) AO SUPERTRUNFO! -|#####\n");

	printf("\n1. Iniciar jogo.\n2. Sair do jogo.\n\nEscolha: ");
	scanf("%i", &escolha_menu_inicial);

	switch (escolha_menu_inicial) {
	case 1:
		funcao_jogo_inserindo_dados();
		break;
	case 2:
		printf("Fechando jogo. Ate mais!");
		break;
	default:
		printf("Escolha invalida, tente novamente mais tarde.");
		break;
	}
	return 0;
}

int main() {
	funcao_jogo_completo();
	return 0;
}
