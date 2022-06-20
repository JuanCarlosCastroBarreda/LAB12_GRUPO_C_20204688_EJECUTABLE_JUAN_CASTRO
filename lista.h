#include <iostream>
#include <string>
#include "nodo.h"

using namespace std;

template <class T>
class Lista{
	private:
		Nodo<T> *Ini;
		Nodo<T> *Fin;
	public:
		Lista();
		~Lista();
		void anadir(T);
        void eliminar();
		void imprimir();
		void buscar(T);
	
};

template<typename T>
Lista<T>::Lista()
{
	Ini=NULL;
	Fin=NULL;
}

template<typename T>
Lista<T>::~Lista()
{
}

template<typename T>
void Lista<T>::anadir(T dato_){
	Nodo<T> *nodo=new Nodo<T>(dato_);
	if(Ini==NULL){
		Ini=nodo;
	}
    else{
		Fin->next=nodo;
	}
	Fin=nodo;
}
template<typename T>
void Lista<T>::eliminar()
{	
    Nodo<T> *aux= Ini;
    if(Ini==Fin){
    	Ini=NULL;
    	Fin=NULL;
	}
    else{
		Ini=Ini->next;
	}
}

template<typename T>
void Lista<T>::imprimir(){
	Nodo<T> *temp = Ini;
	if (!Ini) {
		cout<<"Lista vacia, ingresa valores"<<endl;	
	}
    else {
		while (temp!=NULL){
			temp->print();
			temp = temp->next;
		}
	}
}

template<typename T>
void Lista<T>::buscar(T dato_){
    Nodo<T> *aux = Ini;
    int cont = 1;
    int conta = 0;
 
    while (aux) {
        if (aux->dato == dato_) {    	
            cout<<"\nEl "<<dato_<<" esta en la posicion "<<cont<<endl;
            conta++;
        }
        aux=aux->next;
        cont++;
    }
    if (conta==0) {
        cout<<"No se registro ese dato"<< endl;
    }
}
