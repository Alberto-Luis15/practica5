#include <stdio.h>
#include <conio.h>
#include <iostream>

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
int main(int argc, char** argv){
	struct NoDo *inicio;
	struct NoDo *auxiliar;
	inicio=NULL;
	auxiliar=new NoDo(0);
	
	cout<<"Nodos: \n"<<endl;
	auxiliar->dato=10;
	auxiliar->puntero=NULL;
	cout<<auxiliar->dato<<endl;
	cout<<endl;
	
	inicio=auxiliar;
	auxiliar=new NoDo(0);
	auxiliar->dato=31;
	auxiliar->puntero=NULL;
	cout<<auxiliar->dato<<endl;
	cout<<endl;
	
	
	inicio->puntero=auxiliar;
	auxiliar=new NoDo(0);
	auxiliar->dato=11;
	auxiliar->puntero=NULL;
	cout<<auxiliar->dato<<endl;
	cout<<endl;
	
	
	inicio->puntero->puntero=auxiliar;
	auxiliar=new NoDo(0);
	auxiliar->dato=21;
	auxiliar->puntero=NULL;
	cout<<auxiliar->dato<<endl;
	cout<<endl;
	
	
	inicio->puntero->puntero->puntero=auxiliar;
	auxiliar=new NoDo(0);
	auxiliar->dato=45;
	auxiliar->puntero=NULL;
	cout<<auxiliar->dato<<endl;
	cout<<endl;
	


	
	cout<<"Valores:1\n"<<endl;
	cout<<x1.dato<<endl<<endl;
	cout<<x2.dato<<endl<<endl;
	cout<<x3.dato<<endl<<endl;
	cout<<x4.dato<<endl<<endl;
	cout<<x5.dato<<endl<<endl;
	
	x1.puntero=&x2;
	x2.puntero=&x3;
	x3.puntero=&x4;
	x4.puntero=&x5;
	cout<<"Valores: \n"<<endl;
	cout<<x1.dato<<endl;
	cout<<(x1.puntero)->dato<<endl;
	cout<<(x1.puntero)->puntero->dato<<endl;
	cout<<(x1.puntero)->puntero->puntero->dato<<endl;
	cout<<(x1.puntero)->puntero->puntero->puntero->dato<<endl;
	cout<<(x1.puntero)->puntero->puntero->puntero->puntero->dato<<endl;
	
	cout<<"Lista dinamica: \n"<<endl;
	cout<<inicio->dato<<endl;
	cout<<(inicio->puntero)->dato<<endl;
	cout<<(inicio->puntero)->puntero->dato<<endl;
	cout<<(inicio->puntero)->puntero->puntero->dato<<endl;
	cout<<(inicio->puntero)->puntero->puntero->puntero->dato<<endl;
	
	return 0;
}

