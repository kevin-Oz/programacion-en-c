#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Stack{
int top;
unsigned capacidad;
int* arreglo;
};

struct Stack* createStack(unsigned capacidad)
{
	struct Stack* pila=(struct Stack*)malloc (sizeof(struct Stack));

	pila->top=-1;
	pila->arreglo=(int*)malloc(pila->capacidad * sizeof(int));
	 return pila;
	
}

void push(struct Stack* pila ,int valor){

	pila->arreglo[++pila->top]=valor;
	printf("valor pusheado  %d\n",valor);
}

int pop(struct Stack* pila){
	return pila-> arreglo[pila->top--];
}
int peek(struct Stack* pila){

return pila-> arreglo[pila->top];
}

int main(int argc, char const *argv[])
{
	
struct Stack* pila=createStack(10);

push(pila, 4);
push(pila, 10);
push(pila, 9);
push(pila, 15);
push(pila, 23);

int fuera =0, ultimo=0;
fuera=pop(pila);
ultimo=peek(pila);

printf("Elemento sacado %d ",fuera);
printf("Ultimo elemento  %d",ultimo);
	return 0;
}




