/*****************************************
 * Nombre: ExportarFichero
 * Argumentos: LIBRO **Fichas:   Puntero al array de libros
 *             WINDOW *Wfichero: Ventana para capturar el nombre del fichero
 * Descripción: Lee el nombre del fichero que contendrá los datos a exportar. Exporta los datos de la estructura
 *              de todos los libros en el fichero.
 * Reglas de uso: 
 * Código de Retorno:
 * Programador: JMSM (Sept-24)
 *****************************************/

#include "Ficheros.h"

void ExportarFichero(LIBRO **Fichas,WINDOW *Wfichero)
{
    int len_array=sizeof(*Fichas)/sizeof(LIBRO);
    int i = 0;
    FILE *archivo = fopen("exportar_archivo.csv", 'w');
    for (i = 0; i < len_array; i++){
        /*
            Titulo;
            Autor - Apellido;
            Autor - Nombre;
            Genero;
            Editorial;
            Coleccion
        */
        fprintf(archivo, "%s;", *Fichas[i]->Titulo);
        fprintf(archivo, "%s;", *Fichas[i]->ApellAutor);
        fprintf(archivo, "%s;", *Fichas[i]->NomAutor);
        fprintf(archivo, "%s;", *Fichas[i]->Genero);
        fprintf(archivo, "%s;", *Fichas[i]->Editorial);
        fprintf(archivo, "%s\n", *Fichas[i]->Coleccion);
    }
    fclose(archivo);
}