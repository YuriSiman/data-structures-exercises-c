typedef enum opcoes opcoes;
enum opcoes {fibonacci = 1, fatorial = 2, sair = 3};

typedef union escolha escolha;
union escolha{
  int menu;
  int numero;
};

typedef struct execucao execucao;
struct execucao {
    int resultado;
    int termo;
};

void menu();
int validaInteiro(escolha *num);
void calcularFibonacci(execucao *valor);
void calcularFatorial(execucao *valor);