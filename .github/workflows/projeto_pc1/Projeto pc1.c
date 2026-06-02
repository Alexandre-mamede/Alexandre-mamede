#include <stdio.h>
#include <string.h>
#include <time.h>
#include <struct.c>

int main(){
   
int select;

    printf("Menu Inicial\n");
    printf("1. Deposito\n");
    printf("2. produtos\n");
    printf("3. salvar e sair\n");
    
    scanf("%d",&select);
    
    switch (select){
        
        case 1:
            printf("Menu Depósitos");
            printf("1. Cadastrar novo depósito\n");
            printf("2. Consultar informações sobre um depósito\n");
            printf("3. Consultar informações sobre todos os depósitos\n");
            printf("4. Atualizar dados de um depósito\n");
            printf("5. Remover um depósito\n");
            printf("6. Voltar ao menu principal\n");
            break;
        case 2:
            printf("Menu Deposito");
            printf("1. Nome do Depósito");
            printf("2. CEP");
            printf("3. Endereço");
            printf("4. Telefone");
            printf("5. Capacidade máxima");
            printf("6. Voltar ao menu Depósito");
            break;
       case 3:
    }
    return 0;
}


}
