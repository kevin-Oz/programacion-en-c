
#include<stdio.h>

void suma(int n1,int n2);
void resta(int n1, int n2);
void producto(int n1, int n2);
void divisor(int n1, int n2);

int main(int argc, char const *argv[])
{
	int num1,num2,opcion;
printf("ingrese dos numeros \n");
scanf("%d   %d",&num1,&num2);
 
 printf("Opciones:\n1.sumar\n2.multiplicar\n3.restar\n4.dividir\n:");
scanf("%d",&opcion);

if(opcion==1){
suma(num1,num2);
}
if(opcion==2){
	producto(num1,num2);
}
if(opcion==3){
resta(num1,num2);
}if(opcion==4){
divisor(num1,num2);
}

	return 0;


}

void suma (int n1,int n2){
 int suma;
 suma=(n1+n2);
 printf("La suma de los dos numeros es \n%d",suma);
}
void resta (int n1,int n2){
int restar;
restar=n1-n2;
 printf("La resta de los dos numeros es \n%d",restar);

}
void producto(int n1,int n2){
int multiplicar;
multiplicar=n1*n2;
 printf("El producto de los dos numeros es \n%d",multiplicar);

}
void divisor(int n1,int n2){
float div;
div=n1/n2;
 printf("La division entre los dos numeros es \n%f",div);

}
