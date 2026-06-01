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
        
        
    }
    return 0;
}


}
