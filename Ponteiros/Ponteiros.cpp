/*PONTEIROS - Armazena o endereço na memória RAM de uma outra variável mapeado pelo sistema operacional,
ou seja, não armnazena um valor comum de variável. E com endereço, podemos manipular seu contéudo independente do escopo do programa.
Também conseguimps alterar o valor de uma varáivel através desse endereço.

 | tipo = int | valor = 4 | nome = num | End = 1000 

Tipo da variável * nome do apontamento  ----> int * pn
pn = &num;  ----> pn recebe o endereço da variavel num
cout << &pn; ----> vai imprimir 1000 (endereço da variavel)                                           
cout << *pn; ----> vai imprimir 4 (o valor da variável)
*/

#include <iostream>

using namespace std;

int main(){
	
	string veiculo = "carro";
	string *pv; //ponteiro armazenando o endereço da variavel veiculo
		
	pv = & veiculo; //ponteiro pv recebe o endereço na memória ram da variável veículo
	cout << pv << "\n" << &veiculo; //mostrará o endereço da variável e não o valor dela.
	 
	*pv = "moto"; //no endereço apontado por *pv, adicione o valor "moto" 
	cout << veiculo << "\n" << *pv; //não irá mais imprimir "carro", pois foi alterado para "moto"
	
	
	return 0;
}
