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
	return 0;
}

