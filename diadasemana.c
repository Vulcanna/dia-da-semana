#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	int dia;
	setlocale(LC_ALL, "Portuguese");
	printf("\nDigite o dia da semana (1 à 7): \n");
	scanf("%i",&dia);
	
	switch(dia){
		case 1:
			printf("Domingo\n");
			break;
		case 2:
			printf("Segunda-feira\n");
			break;
		case 3:
			printf("Terça-feira\n");	
			break;
		case 4:
			printf("Quarta-feira\n");
			break;
		case 5:
			printf("Quinta-feira\n");
			break;
		case 6:
			printf("Sexta-feira\n");	
			break;
		case 7:
			printf("Sábado\n");
			break;
			default:
				printf("Dia inválido! Digite apenas números de 1 a 7.\n");
	}
	system("pause");
	return 0;
}

