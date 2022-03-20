/*PONTEIROS - Armazena o endere�o na mem�ria RAM de uma outra vari�vel mapeado pelo sistema operacional,
ou seja, n�o armnazena um valor comum de vari�vel. E com endere�o, podemos manipular seu cont�udo independente do escopo do programa.
Tamb�m conseguimps alterar o valor de uma var�ivel atrav�s desse endere�o.

 | tipo = int | valor = 4 | nome = num | End = 1000 

Tipo da vari�vel * nome do apontamento  ----> int * pn
pn = &num;  ----> pn recebe o endere�o da variavel num
cout << &pn; ----> vai imprimir 1000 (endere�o da variavel)                                           
cout << *pn; ----> vai imprimir 4 (o valor da vari�vel)
*/

#include <iostream>

using namespace std;

int main(){
	
	string veiculo = "carro";
	string *pv; //ponteiro armazenando o endere�o da variavel veiculo
		
	pv = & veiculo; //ponteiro pv recebe o endere�o na mem�ria ram da vari�vel ve�culo
	cout << pv << "\n" << &veiculo; //mostrar� o endere�o da vari�vel e n�o o valor dela.
	 
	*pv = "moto"; //no endere�o apontado por *pv, adicione o valor "moto" 
	cout << veiculo << "\n" << *pv; //n�o ir� mais imprimir "carro", pois foi alterado para "moto"
	
	
	return 0;
}
