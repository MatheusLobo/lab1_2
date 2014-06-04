#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#define N 11 
  
struct Funcionario { 
    char nome[20]; 
    int id; 
    char dept[4]; 
    float salario; 
    struct Funcionario *prox; 
    struct Funcionario *ant; 
}; 
  
typedef struct Funcionario TFuncionario; 
typedef struct Funcionario *PFuncionario; 
  
void init(PFuncionario vFunc[]) 
{ 
    int i; 
    PFuncionario aux; 
  
    for (i=0; i<N; i++) { 
        *(vFunc + i) = NULL; 
    } 
} 
  
PFuncionario buscar(PFuncionario vFunc[], int id) 
{ 
    int x; 
    PFuncionario aux; 
  
    if (id >= 1 && id <= 1000) { 
        x = id % N; 
  
        aux = *(vFunc + x); 
        while(aux != NULL && aux->id != id) { 
            aux = aux->prox; 
        } 
  
        return aux; 
    } 
  
    return NULL; 
} 
  
void inserir(PFuncionario vFunc[], PFuncionario func, int i) 
{ 
    PFuncionario aux; 
    PFuncionario ant; 
  
    if (*(vFunc + i) == NULL) { 
        func->prox = NULL; 
        *(vFunc + i) = func; 
    } else { 
        if (! buscar(vFunc, func->id)) { 
            aux = *(vFunc + i); 
  
            if (aux->id > func->id) { 
                func->prox = aux; 
                *(vFunc + i) = func; 
            } else { 
                while(aux != NULL && aux->id < func->id) { 
                    ant = aux; 
                    aux = aux->prox; 
                } 
  
                ant->prox = func; 
                func->prox = aux; 
            } 
        } 
    } 
} 
  
void remover(PFuncionario vFunc[], int id) 
{ 
    int n = id % N; 
    PFuncionario aux; 
    PFuncionario aux2; 
  
    if (buscar(vFunc, id)) { 
        aux = *(vFunc + n); 
  
        if (aux->id == id) { 
            *(vFunc + n) = aux->prox; 
            free(aux); 
        } else { 
            while (aux != NULL && aux->id != id) { 
                aux2 = aux; 
                aux = aux->prox; 
            } 
  
            if (aux != NULL) { 
                aux2->prox = aux->prox; 
                free(aux); 
            } 
        } 
    } 
} 
  
void commandI(PFuncionario vFunc[]) 
{ 
    int n; 
    int x; 
    int i; 
    PFuncionario func; 
  
    scanf("%d",&n); 
  
    for (x=0; x<n; x++) { 
        if (func = malloc(sizeof(TFuncionario))) { 
            scanf("%20s", func->nome); 
            scanf("%d", &func->id); 
            scanf("%4s", func->dept); 
            scanf("%f", &func->salario); 
  
            if (func->id >= 1 && func->id <= 1000) { 
                i = func->id % N; 
  
                inserir(vFunc, func, i); 
            } 
        } 
    } 
} 
  
void commandR(PFuncionario vFunc[]) 
{ 
    int x; 
  
    scanf("%d", &x); 
    remover(vFunc, x); 
} 
  
void commandC(PFuncionario vFunc[]) 
{ 
    int n; 
    PFuncionario aux; 
  
    scanf("%d", &n); 
  
    if (aux = buscar(vFunc, n)) { 
        printf("%s\n", aux->nome); 
        printf("%d\n", aux->id); 
  
        if (strcmp(aux->dept, "adm") == 0) { 
            printf("administrativo\n"); 
        } 
  
        if (strcmp(aux->dept, "ped") == 0) { 
            printf("pesquisa-e-desenvolvimento\n"); 
        } 
  
        if (strcmp(aux->dept, "prod") == 0) { 
            printf("producao\n"); 
        } 
  
        printf("%.2f\n", aux->salario); 
    } 
} 
  
void commandL(PFuncionario vFunc[]) 
{ 
    int n; 
    PFuncionario aux; 
  
    scanf("%d", &n); 
  
    if (n >= 0 && n < N) { 
        for (aux = *(vFunc + n); aux != NULL; aux = aux->prox) { 
            if (aux != NULL) { 
                printf("%d\n", aux->id); 
            } 
        } 
    } 
} 
void commandO(PFuncionario vFunc[], char ord) 
{ 
    PFuncionario ListaNome, aux, aux2, aux3, ant; 
    int x; 
    char ini, fim; 
  
    ListaNome = NULL; 
  
    for (x = 0; x < N; x++) { 
        for (aux = *(vFunc + x); aux != NULL; aux = aux->prox) { 
            if (aux2 = malloc(sizeof(TFuncionario))) { 
                strcpy(aux2->nome, aux->nome); 
                strcpy(aux2->dept, aux->dept); 
                aux2->id = aux->id; 
                aux2->salario = aux->salario; 
  
                if (ListaNome == NULL) { 
                    ListaNome = aux2; 
                    aux2->ant = NULL; 
                    aux2->prox = NULL; 
                } else { 
                    if (strcmp(aux2->nome, ListaNome->nome) < 0) { 
                        aux2->prox = ListaNome; 
                        aux2->ant = NULL; 
                        ListaNome->ant = aux2; 
                        ListaNome = aux2; 
                    } else { 
                        aux3 = ListaNome; 
                        ant = NULL; 
  
                        while(aux3 != NULL && strcmp(aux2->nome, aux3->nome) > 0) { 
                            ant = aux3; 
                            aux3 = aux3->prox; 
                        } 
  
                        ant->prox = aux2; 
                        aux2->ant = ant; 
                        aux2->prox = NULL; 
  
                        if (aux3 != NULL) { 
                            aux2->prox = aux3; 
                            aux3->ant = aux2; 
                        } 
                    } 
                } 
            } 
        } 
    } 
  
    __fpurge(stdin); 
    ini = getchar(); 
    __fpurge(stdin); 
    fim = getchar(); 
    __fpurge(stdin); 
  
    aux2 = ListaNome; 
    aux3 = ListaNome; 
    while (aux3->prox != NULL) { 
            aux3 = aux3->prox; 
    } 
  
    switch(ord) { 
        case 'c': 
            while(aux2 != NULL) { 
                if (aux2->nome[0] >= ini && aux2->nome[0] <= fim) { 
                    printf("%s\n", aux2->nome); 
                } 
                aux2 = aux2->prox; 
            } 
            break; 
        case 'd': 
            while(aux3 != NULL) { 
                if (aux3->nome[0] >= ini && aux3->nome[0] <= fim) { 
                    printf("%s\n", aux3->nome); 
                } 
                aux3 = aux3->ant; 
            } 
            break; 
    } 
  
} 
  
int main() 
{ 
    char command, ord; 
    int i; 
    PFuncionario vFunc[N]; 
  
    init(vFunc); 
  
    scanf("%c", &command); 
    __fpurge(stdin); 
  
    while(command != 'e') { 
        switch(command) { 
            case 'i': 
                  commandI(vFunc); 
                  break; 
            case 'r': 
                  commandR(vFunc); 
                  break; 
            case 'c': 
                  commandC(vFunc); 
                  break; 
            case 'l': 
                  commandL(vFunc); 
                  break; 
            case 'o': 
                  __fpurge(stdin); 
                  scanf("%c", &ord); 
                  __fpurge(stdin); 
                  commandO(vFunc, ord); 
                  break; 
        } 
  
        __fpurge(stdin); 
        scanf("%c", &command); 
        __fpurge(stdin); 
    } 
  
    return(EXIT_SUCCESS); 
} 
