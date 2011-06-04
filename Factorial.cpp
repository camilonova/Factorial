#include <iostream.h>

int factorial(int a){
	
	int resultado = 1;

	for(int i = 1; i <= a; i++){
		resultado *= i;
	}

	return resultado;
}

void main(){
	int numero;

	cout<< "Digite un numero:\t";
	cin>> numero;

	cout<< "\nEl factorial es: " << factorial(numero);

}