/******************************************************************************

3) El usuario ingresa dos strings. 
Mostrar en pantalla si son iguales o no, es decir, si tienen las mismas letras en las mismas posiciones.


*******************************************************************************/
#include <stdio.h>

int main()
{
    char palabras[20];//Se declaran las variables
    char palabras2[20];
    int i=0;

    printf("Ingrese el primer string: ");
    scanf("%s",palabras);
    printf("Ingrese el segundo string: ");
    scanf("%s",palabras2);    
    
    if(palabras[i]==palabras2[i]){ //Compara los dos strings
        
        printf("Los strings son iguales");
    }
    else
    {
        printf("No son iguales");

    }

}