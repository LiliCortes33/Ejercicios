 #include <stdio.h> //Standr Input Output
 #define vacio 0= //Macro o constante
 /*
   Descripcion: Uso de variables 
   Autor: Lili Cortes
   Date: 19-09-21 
 */   
void main(void){
	//tipoDato identificador= valor inicial;
	int Ody=0; //Declarando Entero e inicializando variable 
	const int Olga =0; //Declarando Constante entera e inicializando en 0 
	#define vacio 0 
	
	//printf("Etiqueta formatos", variable);
	printf("Mi variable Ody tiene el valor de %i", Ody);
	printf("\nMi variable Olga tiene el valor de %i", Olga);
	printf("Mi variable vacio tiene el valor de %i", vacio);
	
	Ody=100;
	//Olga= 200;
	#define vacio 100
	
	printf("\nMi variable Ody tiene el valor de %i", Ody);
	printf("\nMi variable Olga tiene el valor de %i", Olga);
	printf("\nMi variable vacio tiene el valor de %i", vacio);
		
}

