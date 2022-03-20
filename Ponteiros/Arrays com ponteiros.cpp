#include <iostream>

using namespace std;

int main(){
	
	int *p; //ponteiro do tipo int
	int array[10]; //vetor do tipo int
	
	//primeiro deve associar o array com o ponteiro
	p = &array[0]; //atribuindo ao meu ponteiro p o endere�o de mem�ria do primeiro elemento do array
	cout << "Endere�o de mem. da primeira posi��o: " << p << "\n";
	
	p = &array[1]; //atribuindo ao meu ponteiro p o endere�o de mem�ria do segundo elemento do array
	cout << "Endere�o de mem. da segunda posi��o: " << p << "\n";
	
	p = &array[2]; //atribuindo ao meu ponteiro p o endere�o de mem�ria do terceiro elemento do array
	cout << "Endere�o de mem. da terceira posi��o: " << p << "\n";
	
	//OUUUUUU fazer por incremento
	
	p = &array[0];
	cout << "Endere�o de mem. da primeira posi��o: " << p << "\n";
	
	*(p+=1);
	cout << "Endere�o de mem. da segunda posi��o: " << p << "\n";
	
	*(p+=1);
	cout << "Endere�o de mem. da terceira posi��o: " << p << "\n";
	
	//Para atribuir valores ao ponteiro da primeira posi��o
	
	p = &array[0];
	*p = 10;
	cout << array[0] "\n";
	
	*(p+=1); //vai para a pr�xima posi��o do array
	*p= 20; //atribui esse valor para a posi��o requisitada.
	cout << array[1];
	
	return 0;
}
