/******************************************************************************************************************************

8) El usuario ingresará nombres de personas hasta que ingrese la palabra "FIN". No sabemos cuántos nombres ingresará.
Luego de finalizar el ingreso, mostrar en pantalla cuál es el primer nombre en orden alfabético de todos los ingresados.

************************************************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main ()
{
    char nombres;
    char fin[3]={'F','I','N'};
    
    
    for(;;){
        
        printf("Ingerse un nombre:");
        scanf("%s",&nombres);
        
        if (nombres == fin ){
            
            printf("Se salio del bucle");
            break;
        }
        
       
        
    }
    
}
