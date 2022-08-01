/******************************************************************************
4) El usuario ingresa una palabra. Mostrar en pantalla cuántas letras A minúsculas contiene.
*******************************************************************************/
#include <stdio.h>

int main()
{
    char palabras[20];//Se declaran las variables
    int i; 
    int j=0;

    
    printf("Ingrese una palabra:"); // Se pide el ingreso de la palabra
    scanf("%s", palabras);
    
    for(i=0; i<=21; i++ ){
        
    if(palabras[i] == 'a'){ //Se compara con la letra a
    
            j++;//suma cada vez que aparece una a
        }
    }
    printf("La palabra tiene %d ", j);
}
