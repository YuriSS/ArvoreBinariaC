/* [INI] Fila de Arvores */
	typedef struct Dado{
		Arvore* tree;
		struct Dado *prox, *ant;
	}Dado;

	typedef struct Fila{
		Dado *inicio, *fim;
	}Fila;

	/* [INI] Inicializadores */
		Dado* novoDado(Arvore* tree) {
			Dado* novo = (Dado *)malloc(sizeof(Dado));
			novo->tree = tree;
			novo->prox = novo->ant = NULL;
			return novo;
		}

		Fila* novaFila() {
			Fila* nova = (Fila *)malloc(sizeof(Fila));
			nova->inicio = nova->fim = NULL;
			return nova;
		}
	/* [FIM] Inicializadores */


	/* [INI] Insercao */
		void pushFila(Fila* f, Arvore* tree) {
			Dado* novo = novoDado(tree);
			novo->ant = f->fim;
			if(f->inicio == NULL)
				f->inicio = novo;
			else
				f->fim->prox = novo;
			f->fim = novo;
		}
	/* [FIM] Insercao */


	/* [INI] Impressão */
		void impressaoFila(Fila* f) {
			Dado* aux = f->inicio;
			int i = 1;
			while(aux != NULL) {
				printf("Case %d:\n", i);
				impressoesArvore(aux->tree->root);
				printf("\n");
				aux = aux->prox;
				i++;
			}
		}
	/* [FIM] Impressão */
/* [FIM] Fila de Arvores */