/* 7) El usuario ingresará 5 nombres de personas y sus edades (número entero). 
Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona más joven.
El ingreso se realiza de este modo: nombre y edad de la primera persona, luego nombre y edad de la segunda, etc...
Nota: no hay que almacenar todos los nombres y todas las edades. */

#include <stdio.h>//Se declaran las bibliotecas
#include <string.h>

int main(){
	
	char nombre[19];  //Se declaran las variables
	char joven[19]; 
	int i = 0;
	int edad; 
	int menor = 200; 
	
	for(i=0; i<=4; i++) //El ingreso de datos se hace para 5 personas.
	{
		printf("Ingrese el nombre: ");//Se pide el ingreso del nombre y de la edad
		scanf("%s", nombre);
		
		printf("Ingrese la edad: ");
		scanf("%d", &edad);
		
		if(edad < menor){     //Se compara la edad 
			menor = edad;    //Si la edad ingresada es menor, esta ocupa el lugar de la variable menor para ser comparada con los proximos ingresos.
			strcpy(joven, nombre); 
		}
	}
	printf("La persona mas joven es: %s", joven);//Se imprime el nombre de la persona mas joven
	
	return 0;
} 
