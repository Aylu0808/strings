/******************************************************************************************************************************

8) El usuario ingresará nombres de personas hasta que ingrese la palabra "FIN". No sabemos cuántos nombres ingresará.
Luego de finalizar el ingreso, mostrar en pantalla cuál es el primer nombre en orden alfabético de todos los ingresados.

************************************************************************************************************/
#include <stdio.h>
#include <string.h>
 
int main() {
    
  char nombre[15];
  char minimo[15];
  char mensaje[20]={'F', 'I', 'N', 'A', 'L', 'I', 'Z', 'A', 'D', 'O'};
  int s=0;
 
  do {
    printf("Ingrese nombre [FIN] para terminar: ");
    scanf("%s",nombre);
    
    if(strcmp(nombre,"FIN") == 0){
        strcpy(minimo, mensaje);
    }
    else{
        if(s == 0){
        strcpy(minimo, nombre);
    }
    else{
        if(strcmp(nombre, minimo) < 0)
        {
            strcpy(minimo, nombre);
        }
    } 
    }
    
    s++;
  } while (strcmp(nombre,"FIN") != 0);
    
    printf("%s",minimo);
 
}
