#include <iostream>
#include <string>

using namespace std;

template <class T>

class Nodo
{
	public:
		Nodo(T);
		Nodo *next;
		void print();
		~Nodo();
		T dato;
};

template<typename T>
Nodo<T>::Nodo(T dato_){
	dato=dato_;
	next=NULL;
}

template<typename T>
Nodo<T>::~Nodo()
{
}

template<typename T>
void Nodo<T>::print(){
	cout <<dato<<"->" ;
}
