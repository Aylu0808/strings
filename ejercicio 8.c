/******************************************************************************************************************************

8) El usuario ingresará nombres de personas hasta que ingrese la palabra "FIN". No sabemos cuántos nombres ingresará.
Luego de finalizar el ingreso, mostrar en pantalla cuál es el primer nombre en orden alfabético de todos los ingresados.

************************************************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main ()
{
    char nombres[30];

    for(;;){
        
    printf("Ingerse un nombre:");
    fgets(nombres, 30, stdin);
    
    nombres[strcspn(nombres, "\r\n")] = 0;
    
    if(strcmp(nombres, "FIN") == 0) break;
    
    }
 
}
