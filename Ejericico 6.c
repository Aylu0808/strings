 /**************************

6) El usuario ingresa una palabra. Determinar qué letra aparece mayor cantidad de veces.
Para simplificar el problema, trabaje solo con mayúsculas.


***************************/

#include <stdio.h>

int main()
{
    char palabras[20];//Se declaran las variables
    int i; 
    int letras[27];
    int l=0;
    int a;
    char cont[27];
    
    printf("Ingrese una palabra:"); // Se pide el ingreso de la palabra
    scanf("%s", &palabras);
    
    for(i=0; i<=27; i++ ){
    letras[i] = 0;}
    
    
    for(i=0; i<=20; i++ ){
        
        if(palabras[i] == 'A'){ //Se compara con cada letra del abecedario (mayusculas)
           letras[1]++;
           cont[1] = 'A';
        }
        
        if(palabras[i] == 'B'){
            letras[2]++;
            cont[2] = 'B';
        }
      
        if(palabras[i] == 'C'){
            letras[3]++;
            cont[3] = 'C';
        }
        if(palabras[i] == 'D'){
            letras[4]++;
            cont[4] = 'D';
        }
     
        if(palabras[i] == 'E'){
            letras[5]++;
            cont[5] = 'E';
        }
  
        
        if(palabras[i] == 'F'){ 
            cont[6] = 'F';
            letras[6]++;
        }
        
        if(palabras[i] == 'G'){
            letras[7]++;
            cont[7] = 'G';
        }
        
        if(palabras[i] == 'H'){
            letras[8]++;
            cont[8] = 'H';
        }
        if(palabras[i] == 'I'){
            letras[9]++;
            cont[9] = 'I';
        }
        
        if(palabras[i] == 'J'){
            letras[10]++;
            cont[10] = 'J';
       
    }
        if(palabras[i] == 'K'){ //Se compara con cada letra del abecedario (mayusculas)
            letras[11]++;
            cont[11] = 'K';
        }
        
        if(palabras[i] == 'L'){
            letras[12]++;
            cont[12] = 'L';
        }
      
        if(palabras[i] == 'M'){
            letras[13]++;
            cont[13] = 'M';
        }
        if(palabras[i] == 'N'){
            letras[14]++;
            cont[14] = 'N';
        }
     
        if(palabras[i] == 'Ñ'){
            letras[15]++;
            cont[15] = 'Ñ';
        }
  
        
        if(palabras[i] == 'O'){ 
            letras[16]++;
            cont[16] = 'O';
        }
        
        if(palabras[i] == 'P'){
            letras[17]++;
            cont[17] = 'P';
        }
        
        if(palabras[i] == 'Q'){
            letras[18]++;
            cont[18] = 'Q';
        }
        if(palabras[i] == 'R'){
            letras[19]++;
            cont[19] = 'R';
        }
        
        if(palabras[i] == 'S'){
            letras[20]++;
            cont[20] = 'S';
       
    }
    if(palabras[i] == 'T'){
            letras[21]++;
            cont[21] = 'T';
        }
        
        if(palabras[i] == 'U'){
            letras[22]++;
            cont[22] = 'U';
       
    }
        if(palabras[i] == 'V'){ 
            letras[23]++;
            cont[23] = 'V';
        }
        
        if(palabras[i] == 'W'){
            letras[24]++;
            cont[24] = 'W';
        }
      
        if(palabras[i] == 'X'){
            letras[25]++;
            cont[25] = 'X';
        }
        if(palabras[i] == 'Y'){
            letras[26]++;
            cont[26] = 'Y';
        }
     
        if(palabras[i] == 'Z'){
            letras[27]++;
            cont[27] = 'Z';
        }
  
        Z=0;
       mayor=letras[0];
       for(i=0; i> 27; i++){
         
         if(letras[i]>mayor){

           mayor=letras[i];
           a=i;
         }
       }
    if(z==0){

    printf( "La letra que mas se repite es la %c",cont[a] );
}

    
}
