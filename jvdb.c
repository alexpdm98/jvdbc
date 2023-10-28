#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
    FILE *archivo;
    char *basededatos = argv[1];
    char *nombrearchivo = argv[2];
    char *texto = argv[3];
    char ruta[100];
    strcpy(ruta,basededatos);
    strcat(ruta,"-");
    strcat(ruta,nombrearchivo);
    strcat(ruta,".txt");
    archivo = fopen(ruta, "a");
    fputs(strcat(texto,"\n"),archivo);
    fclose(archivo);
return 0;
}