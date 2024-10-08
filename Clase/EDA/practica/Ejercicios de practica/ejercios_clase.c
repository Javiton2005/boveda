#include <stdio.h>
#include <stdlib.h>

#define MAX_CAR 50

void ejercicio1 (){

    int VA[4] = {15, 38, 46, 10};

    int *PtrVa;
    int i = 0;
    for (i = 0; i < (sizeof(VA) / sizeof(VA[1])); i++)
    {
        PtrVa = &VA[i];
        printf("La direccion del Puntero %x\n", &PtrVa);
        printf("La direccion que tiene al macenada del puntero: %x\n", PtrVa);
        printf("El dato que tiene almacenado la direccion a la que apunta el puntero %d\n", *PtrVa);
        printf("\n");
    }
}

void ejercicio2(){

    typedef struct {
        char NomCiudad[MAX_CAR];
        double Habitantes;
        double HabitantesH;
        double HabitantesM;
        double GDP;
    }Tciudad;
    int ciudades,i;
    Tciudad *p;

    printf("Cuantas ciudades vas a insertar?: ");
    scanf("%d", &ciudades);

    p = (Tciudad *)malloc(ciudades * sizeof(Tciudad));
    if(p != NULL){
        for (i = 0; i < ciudades; i++)
        {
            fflush(stdin);
            printf("Nombre de la ciudad: ");
            scanf("%s", &((p+i) -> NomCiudad));
            // fgets((p+i)->NomCiudad, MAX_CAR, stdin);
            printf("Habitantes: ");
            scanf("%lf", &((p + i)->Habitantes));
            printf("Habitantes Hombres: ");
            scanf("%lf", &((p + i)->HabitantesH));
            printf("Habitantes mujeres: ");
            scanf("%lf", &((p + i)->HabitantesM));
            printf("GDP: ");
            scanf("%lf", &((p + i)->GDP));
        }
        for (i = 0; i < ciudades; i++){
            printf("Nombre de la ciudad: %s\n", (p + i)->NomCiudad);
            printf("Nombre de la ciudad: %lf\n", (p + i)->Habitantes);
            printf("Nombre de la ciudad: %lf\n", (p + i)->HabitantesH);
            printf("Nombre de la ciudad: %lf\n", (p + i)->HabitantesM);
            printf("Nombre de la ciudad: %.2lf\n", (p + i)->GDP);
        }
    }
}

void main(){
    ejercicio1();
    ejercicio2();
}