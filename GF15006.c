#include<stdio.h>
#include<stdlib.h>

#define MAX 5

void insertarPorPrioridad(int);
void borrrarPorPrioridad(int);
void crear();
void consultar(int);
void mostrarCola();

int colaPrioridad[MAX];
int frente,fin;

int main(int argc, char const *argv[])
{
	
	int n,opcion;
	printf("\n1.Inserter un elemento\n2.Eliminar un elemento\n3.Mostrar cola\n4.Salir");

	crear();
	while(1){
printf("\n ingrese una Opción ");
scanf("%d",&opcion);

switch(opcion){

case 1:
printf("\nValor a Ingresar a la cola");
scanf("%d",&n);
insertarPorPrioridad(n);
break;
case 2:
printf("\nValor a eliminar en la cola");
scanf("%d",&n);
borrrarPorPrioridad(n);
break;
case 3:
mostrarCola();
break;
case 4:
exit(0);
break;

default:
printf("\nOpcion invalida");



}



	}


	return 0;
}


void crear(){
	frente=fin= -1;

}
void insertarPorPrioridad(int dato){
	if (fin>= MAX-1){
		printf("\nSubdesbordamiento");

return;	}


if ((frente==-1) && (fin==-1))
{
	frente++;
	fin++;
	colaPrioridad[fin]=dato;
}

else{
	consultar(dato);
	fin++;
}

}


//funcion que consulta dato y asigna

void consultar(int dato){
	int i,j;
	for ( i = 0; i <=fin; ++i)
	{
		if(dato>=colaPrioridad[i]){
			for ( j = fin+1; j >i; j--)
			{
			colaPrioridad[j]=colaPrioridad[j-1];	
			}
			colaPrioridad[i]=dato;
			return;
		}
	}
	colaPrioridad[i]=dato;
}

void borrrarPorPrioridad(int dato){
	int i;
	if ((frente==-1) && (fin==-1))
	{
	printf("\nCola vacia");
	return;
	}

	for (i = 0; i <= fin; ++i)
	{
		if (dato==colaPrioridad[i])
		{
			for (; i < fin; ++i)
			{
			colaPrioridad[i]=colaPrioridad[i+1];
			}
			colaPrioridad[i]=-99;
			fin--;

			 if (fin==-1)
			 {
			 	frente=-1;
			 	return;
			 }
		}
	
printf("\n%d elemento no encontrado");
	}
}

void mostrarCola(){

if((frente==-1) && (fin==-1))
{
	printf("\nCola vacia");
	return;
}
for (;frente<=fin; frente++)
{
	printf("\n%d",colaPrioridad[frente]);
}
frente=0;

}






