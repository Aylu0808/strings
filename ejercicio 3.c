/******************************************************************************
3) El usuario ingresa dos strings. 
Mostrar en pantalla si son iguales o no, es decir, si tienen las mismas letras en las mismas posiciones.
*******************************************************************************/
#include <stdio.h>

int main()
{
    char palabra[20];//Se declaran las variables
    char palabra2[20];
    int i=0;
    int j=0;
    int a=0;
    int c=0;
    int b=0;
    int d=0;
    
    printf("Ingrese el primer string: ");//Se ingressan las palabras
    scanf("%s",palabra);
    printf("Ingrese el segundo string: ");
    scanf("%s",palabra2);  
    
    	
	while(palabra[i] != '\0'){ //Se comparan los trings
		
		if(palabra[i] == palabra2[i]){ 
			a++;
		}
		i++;
		b++; 
	}
	
	while(palabra2[j] != '\0'){   //Se compara para saber si son iguales
		
		if(palabra[j] == palabra2[j]){ 
			c++;
		}
		j++;
		d++;
	}
	

	if(a == d && a == d){ //Si se cumplen esto son iguales
	    
		printf("Son iguales");
	}
	else
	{
		printf("No son iguales"); 
}
      
}
