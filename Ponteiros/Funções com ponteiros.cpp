#include <iostream>

using namespace std;

void somar(float *variavel, float valor);

void ponteiroArray(float *v);

int main(){
	
	float num = 0;
	float vetor[5];
	
	somar(&num,15);
	cout << num << "\n";
	
	ponteiroArray(vetor);
	for(int i=0; i<5; i++){
		cout << vetor[i] << "\n";
	}
	
	return 0;
}

//criando função para somar valores à varíavel num

void somar(float *variavel, float valor){  //variavel para indicar qual variavel receberá o valor
	*variavel+= valor;
	
}

void ponteiroArray(float *v){
	v[0] = 0;
	v[1] = 0;
	v[2] = 0;
	v[3] = 0;
	v[4] = 0;
}
	
