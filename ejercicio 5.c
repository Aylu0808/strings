/******************************************************************************
5) El usuario ingresa una palabra. Mostrar en pantalla cuántas vocales minúsculas y mayúsculas contiene.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char palabras[20];//Se declaran las variables
    int i; 
    int j=0;
    int a=0;
    
    printf("Ingrese una palabra:"); // Se pide el ingreso de la palabra
    scanf("%s", &palabras);
    
    for(i=0; i<=20; i++ ){
        
        if(palabras[i] == 'A'){ //Se compara con cada vocal (mayusculas)
            j++;
        }
        if(palabras[i] == 'E'){
            j++;
        }
        
        if(palabras[i] == 'O'){
            j++;
        }
        if(palabras[i] == 'U'){
            j++;
        }
        
        if(palabras[i] == 'a'){ //Se compara con cada vocal (minusculass)
            a++;
        }
        if(palabras[i] == 'e'){
            a++;
        }
        if(palabras[i] == 'i'){
            a++;
        }
        if(palabras[i] == 'o'){
            a++;
        }
        if(palabras[i] == 'u'){
            a++;
        }       
    }
    j--;// Se resta uno para llegar a la cantidad
    
    printf("La palabra tiene %d vocales minusculas y %d  vocales mayusculas",a ,j);
}
 
    
    
    
    
    
    
    
    




