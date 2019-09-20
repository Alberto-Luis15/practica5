#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct NoDo{
	int dato;
	NoDo *puntero;
	NoDo(int Dato1){
		dato=Dato1;
		puntero=NULL;
		}
};
NoDo x1(3), x2(7), x3(9), x4(12), x5(15);
void adherir(struct NoDo*&, int);

int main(int argc, char** argv){
	int option, add;
	struct NoDo *lista(0);
	while (option!=3){
	
	cout<<"Selecciona una opcion del Menu"<<endl;
	cout<<"1. Llenar nodos"<<endl;
	cout<<"2. Mostrar datos de nodos"<<endl;
	cout<<"3. Exit"<<endl;
	cin>>option;
	switch (option){
		case 1:
			cout<<"Llenar nodos: "<<endl;
			cin>>add;
			adherir(lista,add);
			break;
		case 2:
			cout<<"Mostrando datos: "<<endl;
		
			break;
		case 3:
			cout<<"Salir del programa: "<<endl;
		default: 
			cout<<".:Bye:."<<endl;
			break;
			
	}
}
	
	
	return 0;
}

void adherir(NoDo*& lista, int add)
{
	NoDo *nuevo=new NoDo(0);
	nuevo->puntero=NULL;
	nuevo->dato=add;
	if(lista==NULL)lista=nuevo;
	else{
		NoDo *auxiliar=lista;
		while(auxiliar->puntero!=NULL){
			auxiliar=auxiliar->puntero;
		}
		auxiliar->puntero=nuevo;
	}
} 
