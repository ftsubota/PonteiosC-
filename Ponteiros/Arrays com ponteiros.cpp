#include <iostream>

using namespace std;

int main(){
	
	int *p; //ponteiro do tipo int
	int array[10]; //vetor do tipo int
	
	//primeiro deve associar o array com o ponteiro
	p = &array[0]; //atribuindo ao meu ponteiro p o endereço de memória do primeiro elemento do array
	cout << "Endereço de mem. da primeira posição: " << p << "\n";
	
	p = &array[1]; //atribuindo ao meu ponteiro p o endereço de memória do segundo elemento do array
	cout << "Endereço de mem. da segunda posição: " << p << "\n";
	
	p = &array[2]; //atribuindo ao meu ponteiro p o endereço de memória do terceiro elemento do array
	cout << "Endereço de mem. da terceira posição: " << p << "\n";
	
	//OUUUUUU fazer por incremento
	
	p = &array[0];
	cout << "Endereço de mem. da primeira posição: " << p << "\n";
	
	*(p+=1);
	cout << "Endereço de mem. da segunda posição: " << p << "\n";
	
	*(p+=1);
	cout << "Endereço de mem. da terceira posição: " << p << "\n";
	
	//Para atribuir valores ao ponteiro da primeira posição
	
	p = &array[0];
	*p = 10;
	cout << array[0] "\n";
	
	*(p+=1); //vai para a próxima posição do array
	*p= 20; //atribui esse valor para a posição requisitada.
	cout << array[1];
	
	return 0;
}
