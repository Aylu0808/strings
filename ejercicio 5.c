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
        
        if(palabras[i] == 'a'){ //Se compara con cada letra del abecedario (mayusculas)
            a++;
        }
        if(palabras[i] == 'b'){
            a++;
        }
        if(palabras[i] == 'c'){
            a++;
        }
        if(palabras[i] == 'd'){
            a++;
        }
        if(palabras[i] == 'e'){
            a++;
        }
        if(palabras[i] == 'f'){
            a++;
        }
        if(palabras[i] == 'g'){
            a++;
        }
        if(palabras[i] == 'h'){
            a++;
        }
        if(palabras[i] == 'i'){
            a++;
        }
        if(palabras[i] == 'j'){
            a++;
        }
        if(palabras[i] == 'k'){
            a++;
        }
        if(palabras[i] == 'm'){
            a++;
        }
        if(palabras[i] == 'n'){
            a++;
        }
        if(palabras[i] == 'l'){
            a++;
        }
        if(palabras[i] == 'o'){
            a++;
        }
        if(palabras[i] == 'p'){
            a++;
        }
        if(palabras[i] == 'q'){
            a++;
        }
        if(palabras[i] == 'r'){
            a++;
        }
        if(palabras[i] == 's'){
            a++;
        }
        if(palabras[i] == 't'){
            a++;
        }
        if(palabras[i] == 'u'){
            a++;
        }
        if(palabras[i] == 'v'){
            a++;
        }
        if(palabras[i] == 'w'){
            a++;
        }
        if(palabras[i] == 'x'){
            a++;
        }
        if(palabras[i] == 'y'){
            a++;
        }
        if(palabras[i] == 'z'){
            a++;
        }
        
    }
    j--; a--;// Se resta uno para llegar a la cantidad
    
    printf("La palabra tiene %d minusculas y %d mayusculas",a ,j);
}
 
    
    
    
    
    
    
    
    




