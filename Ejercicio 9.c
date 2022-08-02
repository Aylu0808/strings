/******************************************************************************

9) El usuario ingresará una palabra de hasta 10 letras. Se desea mostrarla en pantalla pero encriptada según el "Código César".
Esto consiste en reemplazar cada letra con la tercera consecutiva en el abecedario. Por ejemplo, "CASA" se convierte en "FDVD".
Tener en cuenta que las últimas letras deben volver al inicio, por ejemplo la Y se convierte B.
Este mecanismo se utilizaba en el Imperio Romano.

*******************************************************************************/
#include <stdio.h> //Defino las variables
#include <stdlib.h>
#include <string.h>
#define max 10 // Defino cantidad maxima de letras 


void encriptacion(char palabra[max], int a) //Creo una funcion para encriptr la palabra
{
    int i=0;
    while(palabra[i]!='\0') //Con esta repeticion se le ira aumentando a cada letra y la mostrara en pantalla
    {
        palabra[i]=palabra[i]+a;
        i++;
    }
    printf("La palabra encriptada es: %s", palabra);
}

int main()
{
    int x=3;
    char pal[max];
    
    printf("Palabra que quiere encriptar: ");//Pido ingreso de la palabra
    scanf("%s", pal);
    
    encriptacion(pal, x);//Llamo a la funcion
   
}
