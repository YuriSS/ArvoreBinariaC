/* [INI] Árvore Binária */
	typedef struct Node{
		int num;
		struct Node *esq, *dir;
	}Node;

	typedef struct Arvore{
		Node *root;
	}Arvore;

	/* [INI] Inicialização da Árvore */
		Node* novoNode(int num) {
			Node* novo = (Node *)malloc(sizeof(Node));
			novo->num = num;
			novo->esq = novo->dir = NULL;
			return novo;
		}

		Arvore* novaArvore(int num) {
			Arvore* nova = (Arvore *)malloc(sizeof(Arvore));
			nova->root = novoNode(num);
			return nova;
		}
	/* [FIM] Inicialização da Árvore */


	/* [INI] Inserção na Árvore */
		void pushTree(Node* no, int num) {
			if(no != NULL) {
				if(num < no->num) {
					if(no->esq == NULL) {
						Node* novo = novoNode(num);
						no->esq = novo;
					} else
						pushTree(no->esq, num);
				} else {
					if(no->dir == NULL) {
						Node* novo = novoNode(num);
						no->dir = novo;
					} else
						pushTree(no->dir, num);
				}
			}
		}
	/* [FIM] Inserção na Árvore */


	/* [INI] Impressão da Árvore */
		void preorder(Node* no) {
			if(no != NULL) {
				printf(" %d", no->num);
				preorder(no->esq);
				preorder(no->dir);
			}
		}

		void inorder(Node* no) {
			if(no != NULL) {
				inorder(no->esq);
				printf(" %d", no->num);
				inorder(no->dir);
			}
		}

		void posorder(Node* no) {
			if(no != NULL) {
				posorder(no->esq);
				posorder(no->dir);
				printf(" %d", no->num);
			}
		}

		void impressoesArvore(Node* no) {
			printf("Pre.:");
			preorder(no);
			printf("\nIn..:");
			inorder(no);
			printf("\nPost:");
			posorder(no);
			printf("\n");
		}
	/* [FIM] Impressão da Árvore */
/* [FIM] Árvore Binária */