#include<stdio.h>

int main(){

int tamanio,f,c,dato,num;
printf("ingrese el tamaño de las dos matrices cuadradas  ");
scanf("%d",&tamanio);

int matriz1[tamanio][tamanio];
int matriz2[tamanio][tamanio];
int suma[tamanio][tamanio];

printf("proceda al llenado de la primera matriz \n");
for(f=0;f<tamanio;f++){
 for(c=0;c<tamanio;c++){

printf("intodusca el dato en la posicion [%d][%d]",f,c);
scanf("%d",&dato);
 matriz1[f][c]=dato;
}

}

printf("proceda al llenado de la segunda matriz: \n");

for(f=0;f<tamanio;f++){
 for(c=0;c<tamanio;c++){

printf("intodusca el dato en la posicion [%d][%d]",f,c);
scanf("%d",&num);
  matriz2[f][c]=num;
}

}
//sumando las celdas de las matrices
for(f=0;f<tamanio;f++){
 for(c=0;c<tamanio;c++){

suma[f][c]=matriz1[f][c]+matriz2[f][c];

}

}


//mostrando el resultado de la suma
/*
printf("\n");
for(f=0;f<tamanio;f++){
 for(c=0;c<tamanio;c++){

printf("|%d| ",suma[f][c]);

}
printf("\n");
}*/

int divisor=1,contador,x=0,tv=tamanio*2;
int primos [tv];
int p=0;

for(f=0;f<tamanio;f++){	
 for(c=0;c<tamanio;c++){
 	contador=0;
   for(divisor=1;divisor<=suma[f][c];divisor++){

  	if(suma[f][c]%divisor==0){
  		contador++;
  	}else{
  		
  		contador=contador+0;
  	}
  	
  	
  	
  }
  if(contador==2){
  		
  		primos[x]=suma[f][c];
                 x+=1;
                 p++;
  		}
  
}
}
printf("\n\nLos numeros primos resultado de la suma de las dos matrices son:\n");

for(x=0;x<p;x++){
	
	printf("%d  ",primos[x]);

}



return 0;
}
