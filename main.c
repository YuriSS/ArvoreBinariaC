#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"


/* [INI] Fila de Arvores */

/* [FIM] Fila de Arvores */

int main() {

	Arvore* tree = novaArvore(5);
	pushTree(tree->root, 2);
	pushTree(tree->root, 7);
	printf("\n\n");
	impressoesArvore(tree->root);

	return 0;
}