Tema: [[EDA]]
Apartado: #Leer_Ficheros

## Apuntes:
```c
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <strings.h>

//#define MAX_LINEA 130
//#define MAX_NUM_LINEAS 3000

int main()
{
	FILE *fichero;
	
	//char Lineas [MAX_NUM_LINEAS][MAX_LINEA];
	char **lineas;
	char *Auxiliar;
	
	int i,j;
	int maxNumLineas =0, MaxLineas=0;
	if ((fichero = fopen("Libro.csv","r"))== NULL){
		fprintf(stderr,"Error %d añ abrir\n", errno);
		exit(1);
	}
	for(i=0;(caracter = fgetc(fichero))!=EOF;i++){
		if(caracter == '\n'){
			maxNumLineas ++;
			if(i>MaxLineas)
				MaxLineas=i;
			i=-1
		}
	}
	Lineas = malloc(MaxNumLineas*sizeof(char*));
	Auxiliar = malloc(MaxLineas*sizeof(char));
	rewind(fichero);
	
	/*for(i=0; fgets(Lineas[i], MAX_LINEA, fichero)!=NULL;i++){
		j=strlen(Lineas[i]);
		if(Lineas[i][j-1]=='\n'){
			Lineas[i][j-i]=0;
			j--;
		}
	}*/
	
	for(i=0; fgets(Auxiliar, MaxLineas+1, fichero)!=NULL;i++){
		j=strlen(Auxiliar);
		if(Auxiliar[j-1]=='\n'){
			Auxiliar[j-1]=0;
			j--;
		}
		Lineas[i]=malloc((j+1)*sizeof(char));
		strcpy(lineas[i],Auxiliax);
	}
	
	fclose(ficherogh);
	
	for(i--;i>=0; i--)
		printf("%s\n", Lineas[i]);
	
	for(i=0; i<MaxNumLineas; i++)
		free(lineas[i]);
	free(lineas);
	free(auxiliar);
	
	exit(0);
	
}
```