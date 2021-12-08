#include <iostream>
#include "listaligada.h"
using namespace std;

int main() {
ListaLigada<int> lista;

int x;
cout<<"num: "; cin>>x;
lista.push_front(x);
lista.push_front(x);
lista.push_front(x);

int y;
cout<<"num: "; cin>>y;
lista.push_back(7);
lista.push_back(8);
cout <<"Tamano de la lista: "<< lista.size() << endl;
lista.pop_back();
cout<<"Modificado: " << lista.size() << endl;
lista.print();
lista.~ListaLigada();
cout <<"Lista Eliminada: "<< lista.size() << endl;
return 0;

}