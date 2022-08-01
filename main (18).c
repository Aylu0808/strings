/******************************************************************************
1) Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cuántas letras tiene la palabra ingresada.
Por ejemplo "CASA" debe indicar 4 letras.

*******************************************************************************/
#include <stdio.h>

int main()

{
    char palabras[20];//Se declaran las variables
    int i; 
    int j=0;
    
    printf("Ingrese una palabra:"); // Se pide el ingreso de la palabra
    scanf("%s", &palabras);
    
    for(i=0; i<=21; i++ ){
        
        if(palabras[i] == 'A'){ //Se compara con cada letra del abecedario (mayusculas)
            j++;
        }
        if(palabras[i] == 'B'){
            j++;
        }
        if(palabras[i] == 'C'){
            j++;
        }
        if(palabras[i] == 'D'){
            j++;
        }
        if(palabras[i] == 'E'){
            j++;
        }
        if(palabras[i] == 'F'){
            j++;
        }
        if(palabras[i] == 'G'){
            j++;
        }
        if(palabras[i] == 'H'){
            j++;
        }
        if(palabras[i] == 'I'){
            j++;
        }
        if(palabras[i] == 'J'){
            j++;
        }
        if(palabras[i] == 'K'){
            j++;
        }
        if(palabras[i] == 'M'){
            j++;
        }
        if(palabras[i] == 'N'){
            j++;
        }
        if(palabras[i] == 'L'){
            j++;
        }
        if(palabras[i] == 'O'){
            j++;
        }
        if(palabras[i] == 'P'){
            j++;
        }
        if(palabras[i] == 'Q'){
            j++;
        }
        if(palabras[i] == 'R'){
            j++;
        }
        if(palabras[i] == 'S'){
            j++;
        }
        if(palabras[i] == 'T'){
            j++;
        }
        if(palabras[i] == 'U'){
            j++;
        }
        if(palabras[i] == 'V'){
            j++;
        }
        if(palabras[i] == 'W'){
            j++;
        }
        if(palabras[i] == 'X'){
            j++;
        }
        if(palabras[i] == 'Y'){
            j++;
        }
        if(palabras[i] == 'Z'){
            j++;
        }
        
    }
    
    j--;//Se le resta uno para que de la cantidad
    
    printf("La palabra tiene: %d", j);
}