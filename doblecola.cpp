// zzz.cpp : Defines the entry point for the console application.
//

// coladoble.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct nodo{
	char dato;
	struct nodo *sgte;
};
struct cola{
	nodo *delante;
	nodo *atras;
};
struct nodo *crearNodo(char x){
	struct nodo *nuevoNodo = new(struct nodo);
	nuevoNodo->dato=x;
	return nuevoNodo;
};
void encolar(struct cola &q, char x, int pos){
	struct nodo *aux = crearNodo(x);
	if(pos==1){
		if(q.delante==NULL){
			aux->sgte=q.delante;
			q.delante=aux;
			q.atras=aux;
		}
		else{
			aux->sgte=q.delante;
			q.delante=aux;
		}
	}else{
		if(q.atras==NULL){
			aux->sgte=q.atras;
			q.delante=aux;
			q.atras=aux;
		}else{
			aux->sgte=(q.atras)->sgte;
			(q.delante)->sgte=aux;
		}
	}
}
char desencolar(struct cola &q, int pos){
	char __c;
	struct nodo *aux=q.delante;
	if(pos==1){
		__c=(q.delante)->dato;
		q.delante=aux->sgte;
		delete(aux);
	}else{
		__c=(q.delante)->dato;
		while(aux->sgte !=q.atras)
			aux=aux->sgte;
		aux->sgte=(q.atras)->sgte;
		delete(q.atras);
		q.atras=aux;
	}
	return __c;
}
void mostrarCola(struct cola q){
	struct nodo *aux;
	aux=q.delante;
	while(aux !=NULL){
		cout<<" "<<aux->dato;
		aux=aux->sgte;
	}
}
void menu(){
	cout<<"\n\t implementacion de colas dobles en c++ \n\n";
	cout<<"1.insertar					"<<endl;
	cout<<"2.eliminar					"<<endl;
	cout<<"3.mostrar cola				"<<endl;
	cout<<"4.salir						"<<endl;
	cout<<"\n ingrese opcion: ";
}
int main()
{
	struct cola q;
	q.delante=NULL;
	q.atras;
	char c,x;
	int op;
	int pos;
	do{
		menu();
		cin>>op;
		switch(op){
		case 1: cout<<"ingrese caracter: "<<endl;
			cin>>c;
			cout<<"[1] insertar inicio"<<endl;
			cout<<"[2] insertar final"<<endl;
			cin>>pos;
			encolar(q,c,pos);
			break;
		case 2: cout<<"[1] insertar inicio"<<endl;
			    cout<<"[2] insertar final"<<endl;
				cout<<"opcion ";
				cin>>pos;
				x=desencolar(q,pos);
				cout<<x<<"desencolado..."<<endl;
				break;
		case 3:
				cout<<"cola"<<endl;
				if(q.delante!=NULL)
					mostrarCola(q);
				else
					cout<<"Cola vacia"<<endl;
				break;

		}
		cout<<endl;
		system("pause");
		system("cls");
	}
	while(op!=4);
	return 0;	
}

