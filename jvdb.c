#include <stdio.h>

int main(int argc, char* argv[]){
FILE *archivo;
archivo = fopen("basededatos.txt", "w");
char *texto = "JVDB";
fputs(texto,archivo);
fclose(archivo);
return 0;
}