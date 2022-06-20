#include <iostream>
#include <string>
#include "lista.h"

using namespace std;

int main(){
	Lista<int> pilas;
	pilas.anadir(9);
	pilas.anadir(6);
	pilas.anadir(8);
	pilas.anadir(1);
	pilas.anadir(4);
	pilas.imprimir();
	pilas.buscar(6);

	system("pause");
	return 0;
}
