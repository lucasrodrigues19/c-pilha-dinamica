/*
 * pilha.h
 *
 *  Created on: 10 de mai de 2020
 *      Author: lucas.rodrigues
 */

#ifndef PILHA_H_
#define PILHA_H_



#endif /* PILHA_H_ */

typedef struct Caixinha{
	int elemento;
	struct Caixinha *proximo;
}Caixinha;
typedef struct Pilha{
	Caixinha *topo;
}Pilha;

void create(Pilha *pilha);
int pop(Pilha *pilha);
void push(Pilha *pilha, int elemento);
int isEmpty(Pilha pilha);
