typedef struct {
    char nome[40];
    int codigo;
    float preco;
    int quantidade;
} produto;

#define RANDOMICO rand() % 51 

void menu();
int totalProdutos();
void preencherDados(produto *prod, int quantidade);
void cadastrarNomeProduto(produto *prod, int i);
void cadastrarPrecoProduto(float *valor, int i);
void cadastrarQuantidadeProduto(produto *prod, int i);
void produtosFaltandoNoEstoque(produto *prod, int quantidade);
void listarProdutos(produto *prod, int quantidade);