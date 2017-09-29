//numero oblongo = numero que es el producto de dos numeros seguidos
#include<stdio.h>
 
 int main(){
 	int numero,multiplo;
 	printf("introdusca un numero positivo para verificar si es Oblongo");
 	scanf("%d",&numero);
 	for(multiplo=0;multiplo<numero;multiplo++){
 		if(multiplo*(multiplo+1)==numero){
 		
 		printf("el numero es Oblongo");		
 	}
 }
 	
 getch();
 return 0;
 }
 



