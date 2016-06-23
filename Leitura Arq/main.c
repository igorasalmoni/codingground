#include <stdio.h>
int main() {

	FILE *arq, *arq2;
	char codigo1[4], aux, nomeArq[100], nomeArq2[100], codigo_arq2;
	int i, j,mat_i=0, mat_j=0, codigo2=0, mat_1[50][50], mat_2[3][3];
	
	
	
	printf("Entre com nome do arquivo de entrada um: ");
	scanf("%s", nomeArq);
	/* abre arquivo para leitura */
	
	arq = fopen(nomeArq, "r");
	if (arq == NULL) {
		printf("Erro ao abrir o arquivo ’%s’ para leitura.\n", nomeArq);
	}else{
	
		printf("\n\n------Inicio do arquivo 1-------\n\n");
		
		fscanf(arq,"%s\n", codigo1);
		fscanf(arq, "%d %d\n", &mat_j, &mat_i);
		fscanf(arq, "%d\n", &codigo2);
		
		for(i = 0; i < mat_i; i++){
			for(j = 0; j < mat_j - 1 ; j++)
				fscanf(arq, "%d%c", &mat_1[i][j], &aux);
			fscanf(arq, "%d\n", &mat_1[i][j]);	
		}	
			
		printf("Codigo: %s\n", &codigo1);
		printf("Mat_i: %d\n", mat_i);
		printf("Mat_j: %d\n", mat_j);
		printf("Codigo 2: %d\n", codigo2);
		
		
		printf("\n\n------ Matriz 1 ------\n\n");
		for(i = 0; i < mat_i; i++){
			for(j = 0; j < mat_j - 1 ; j++)
				printf("%d ", mat_1[i][j]);
			printf("%d\n", mat_1[i][j]);	
		}	
		printf("\n\n------Fim do arquivo 1-------\n\n\n");	
	
	}
	
	printf("Entre com nome do arquivo de entrada dois: ");
	scanf("%s", nomeArq2);
	
	arq2 = fopen(nomeArq2, "r");
	if (arq2 == NULL) {
		printf("Erro ao abrir o arquivo ’%s’ para leitura.\n", nomeArq);
	}else{
		
		printf("\n\n------Inicio do arquivo 2-------\n\n");
		
		fscanf(arq2,"%d\n", &codigo_arq2);
		printf("Codigo Arq 2: %d\n", codigo_arq2);
		
		for(i = 0; i < 3; i++){
			for(j = 0; j < 2 ; j++)
				fscanf(arq2, "%d%c", &mat_2[i][j], &aux);
			fscanf(arq2, "%d\n", &mat_2[i][j]);	
		}	
		
		printf("\n\n------ Matriz 2 ------\n\n");
		for(i = 0; i < 3; i++){
			for(j = 0; j < 2 ; j++)
				printf("%d ", mat_2[i][j]);
			printf("%d\n", mat_2[i][j]);	
		}	
		
		printf("\n\n------Fim do arquivo 2-------\n\n");
	
	}
}