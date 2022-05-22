/* Autor: Xavier Romero Hernández, Realizado: 09/02/2022 
	Programa que pida los datos de un trapecio y calcule su area.
	*/

#include <stdio.h>


int main (){
	float area, bmayor, bmenor, altura;
	
	printf("Calcular el area de un rombo\n");
	printf("introduce la base mayor: ");
	scanf("%f",&bmayor);
	printf("introduce la base menor: ");
	scanf("%f",&bmenor);
	printf("introduce la altura: ");
	scanf("%f",&altura);
	
	area=(bmayor+bmenor)*altura/2;
	
	printf("\nEl area del trapecio es de %.2f cm2",area);
	
	return 0;
}
