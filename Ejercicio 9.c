/* 

9) El usuario ingresará una palabra de hasta 10 letras. Se desea mostrarla en pantalla pero encriptada según el "Código César".
Esto consiste en reemplazar cada letra con la tercera consecutiva en el abecedario. Por ejemplo, "CASA" se convierte en "FDVD".
Tener en cuenta que las últimas letras deben volver al inicio, por ejemplo la Y se convierte B.

*/

#include<stdio.h>//Se declaran las bibliotecas
#include <string.h>

int main(){
	
	char pal[20]; //Se declaran las variables
	char A[20];
	int i = 0;
	
	printf("Ingrese la palabra que se quiere encriptar: "); //Se hace el ingreso de la palabra 
	scanf("%s", pal);
	
	while(pal[i] != '\0') //El bucle se repite hasta que finaliza la palabra.
	{
		A[i] = pal[i]+3; 
		
		if(pal[i] == 'x'){//Se compara con las ultimas letras para que empiece de nuevo el abecedario
			A[i] = 'a'; 
		}
		if(pal[i] == 'y'){
			A[i] = 'b';
		}
		if(pal[i] == 'z'){
			A[i] = 'c';
		}
		if(pal[i] == 'X'){   
			A[i] = 'A'; 
		}
		if(palabra[i] == 'Y'){
			A[i] = 'B';
		}
		if(pal[i] == 'Z'){
			A[i] = 'C';
		}
		i++;
	}
	
	printf("La palabra encriptada es: %s\n", A); //Se imprime la palabra encriptada.

}
   
