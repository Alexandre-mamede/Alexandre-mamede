#include <stdio.h>
#include <string.h>
#include <time.h>
#include <struct.h>

void salvar_produto(produto produtos[], int total){
    
    FILE *fp = fopen("produtos_salvos.txt","w");
    
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo para salvar.\n");
    return;
    }
    
    for(int i = 0; i < total; i++){
        fprintf(fp,"%d;%d;%.2f\n",
                produtos[i].nome,
                produtos[i].quantidade_itens,
                produtos[i].valor_Unitario);
    }
    
    fclose(fp);
    printf("Arquivo salvo com sucesso!!!\n");
}

int main(){

produto produtos[100];
int total = 0;
int opcao;

    printf("\n=== MENU ===\n\n");
    printf("1. Deposito\n");
    printf("2. Produtos\n");
    printf("3. salvar e sair\n");
    scanf("%d",&opcao);
    
    switch (opcao){
        
        case 1:
            printf("\n===Menu Depósitos===\n\n");
            printf("1. Cadastrar novo depósito\n");
            printf("2. Consultar informações sobre um depósito\n");
            printf("3. Consultar informações sobre todos os depósitos\n");
            printf("4. Atualizar dados de um depósito\n");
            printf("5. Remover um depósito\n");
            printf("6. Voltar ao menu principal\n");
            break;
           
        case 2:
            printf("\n===Menu Produtos===\n\n");
            printf("1. Cadastrar novo produto\n");
            printf("2. Consultar produto\n");
            printf("3. Atualizar dados de um produto\n");
            printf("4. Remover produto\n");
            printf("5. Transferir produto para outro depósito\n");
            printf("6. Voltar ao menu principal\n");
            break;
       case 3:
            salvar_produto(produtos,total);
            printf("saindo......");
            break;
    }
    return 0;
}
