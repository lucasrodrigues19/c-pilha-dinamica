/*
 * pilha.c
 *
 *  Created on: 10 de mai de 2020
 *      Author: lucas.rodrigues
 */

#include "pilha.h"
#include <stdlib.h>

void create(Pilha *pilha) {
	pilha->topo = NULL;
}
int pop(Pilha *pilha) {
	Caixinha *aux = pilha->topo; //peguei o topo da pilha
	int elemento = aux->elemento; //peguei o elemento do topo
	pilha->topo = aux->proximo; //o topo vai ser o proximo elemento
	free(aux);//desaloco o topo
 	return elemento;

}
void push(Pilha *pilha, int elemento) {

	Caixinha *aux = (Caixinha *)malloc(sizeof(Caixinha));
	aux->elemento = elemento; //insere o novo elemento na pilha
	aux->proximo = pilha->topo; //o proximo vai ser o topo(o de antes)
	pilha->topo = aux; //o topo aponta pro mais novo elemento(o ultimo que entra)

}
int isEmpty(Pilha pilha) {
	return (pilha.topo == NULL);
}
