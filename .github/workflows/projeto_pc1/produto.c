#include<stdio.h>
#include <time.h>

typedef struct{
	char nome_produto[101];
	char codigo_barras[13];
	int tipo_produto;
	int perecivel;
	char data_fabricacao[11];
	float volume_unidade;
	int quantidade_itens;
	float valor_unitario;
	char data_validade[11];
}produto;

int verificar_data(produto prod) {
    int dia_val, mes_val, ano_val;
    int dia_atual, mes_atual, ano_atual;

    // Pega a data atual do sistema
    time_t agora = time(NULL);
    struct tm data_atual = *localtime(&agora);

    dia_atual = data_atual.tm_mday;
    mes_atual = data_atual.tm_mon + 1;
    ano_atual = data_atual.tm_year + 1900;

    // Lê a data de validade do produto
    if (sscanf(prod.data_validade, "%d/%d/%d", &dia_val, &mes_val, &ano_val) != 3) {
        return -1; 
	    }

    if (ano_val < ano_atual) {
        return 1;  
    } 
    else if (ano_val > ano_atual) {
        return 0;  
    } 
    else { 
        if (mes_val < mes_atual) {
            return 1;  
        } 
        else if (mes_val > mes_atual) {
            return 0;  
        } 
        else { 
            if (dia_val < dia_atual) {
                return 1; 
            } else {
                return 0; 
            }
        }
    }
}
char categoria[10][50] = {"Eletrônico","Moda e Vestuário","Casa e Decoração","Esporte e Lazer","Livros e Músicas","Automotivo","Saúde e Bem-estar","Briquedos e Jogos","Alimentos e Bebidas"};

char cadastrar_produto(produto produtos){
	
	printf("Digite o nome do produto");
	scanf("%s",produtos.nome_produto);
	
	printf("Digite o codigo de barras do produto: ");
	scanf("%s",produtos.codigo_barras);
	
	printf("===== Digite o tipo do produto ======");
	printf("1- %s\n",categoria[0]);
	printf("2- %s\n",categoria[1]);	
	printf("3- %s\n",categoria[2]);
	printf("4- %s\n",categoria[3]);
	printf("5- %s\n",categoria[4]);
	printf("6- %s\n",categoria[5]);
	printf("7- %s\n",categoria[6]);
	printf("8- %s\n",categoria[7]);
	printf("9- %s\n",categoria[8]);
	printf("10- %s\n",categoria[9]);
	scanf("%d",&produtos.tipo_produto);
	if(produtos.tipo_produto == 10){
		produtos.perecivel = 1;
	}else {
		produtos.perecivel = 0;
	}

	if(produtos.perecivel == 1){
		printf("Digite a data de fabricação");
		scanf("%s",produtos.data_fabricacao);
		
		printf("\nDigite a data de vencimento do produto:");
		scanf("%s",produtos.data_validade);
	
		int status = verificar_produto(produtos);
		
		if(status == 1){
			printf("Cadastro inválido. Produto vencido!");
			return -1;
		}
		
		printf("\nDigite o volume da unidade:");
		scanf("%f",&produtos.volume_unidade);
		
		printf("\nDigite a quantidade de itens do produto:");
		scanf("%d",&produtos.quantidade_itens);
		
		printf("\nDigite o valor do produto:");
		scanf("%f",produtos.valor_unitario);

		printf("===== Produto Cadastrado com Sucesso =====");

	}else if(produtos.perecivel == 0){
		
		printf("Digite a data de fabricação");
		scanf("%s",produtos.data_fabricacao);
		
		printf("\nDigite o volume da unidade:");
		scanf("%f",&produtos.volume_unidade);
		
		printf("\nDigite a quantidade de itens do produto:");
		scanf("%d",&produtos.quantidade_itens);
		
		printf("\nDigite o valor do produto:");
		scanf("%f",produtos.valor_unitario);

		printf("===== Produto Cadastrado com Sucesso =====");
	}
}#include<stdio.h>

typedef struct{
	char nome_produto[101];
	char codigo_barras[13];
	int tipo_produto;
	int perecivel;
	char data_fabricacao[11];
	float volume_unidade;
	int quantidade_itens;
	float valor_unitario;
	char data_validade[11];
}produto;

int verifcar_data(produto produtos){ 
    int dia, mes, ano;
    int dia2, mes2, ano2;
    

    time_t agora = time(NULL);           
    struct tm data_atual = *localtime(&agora);  

    dia2 = data_atual.tm_mday;            
    mes2 = data_atual.tm_mon + 1;        
    ano2 = data_atual.tm_year + 1900;    

     sscanf(produtos.data_validade, "%d/%d/%d", &dia, &mes, &ano);
    
}
char categoria[10][50] = {"Eletrônico","Moda e Vestuário","Casa e Decoração","Esporte e Lazer","Livros e Músicas","Automotivo","Saúde e Bem-estar","Briquedos e Jogos","Alimentos e Bebidas"};

char cadastrar_produto(produto produtos){
	
	printf("Digite o nome do produto");
	scanf("%s",produtos.nome_produto);
	
	printf("Digite o codigo de barras do produto: ");
	scanf("%s",produtos.codigo_barras);
	
	printf("===== Digite o tipo do produto ======");
	printf("1- %s\n",categoria[0]);
	printf("2- %s\n",categoria[1]);	
	printf("3- %s\n",categoria[2]);
	printf("4- %s\n",categoria[3]);
	printf("5- %s\n",categoria[4]);
	printf("6- %s\n",categoria[5]);
	printf("7- %s\n",categoria[6]);
	printf("8- %s\n",categoria[7]);
	printf("9- %s\n",categoria[8]);
	printf("10- %s\n",categoria[9]);
	scanf("%d",&produtos.tipo_produto);
	if(produtos.tipo_produto == 10){
		produtos.perecivel = 1;
	}else {
		produtos.perecivel = 0;
	}

	if(produtos.perecivel == 1){
		printf("Digite a data de fabricação");
		scanf("%s",produtos.data_fabricacao);
		
		printf("\nDigite a data de vencimento do produto:");
		scanf("%s",produtos.data_validade);
		
		printf("\nDigite o volume da unidade:");
		scanf("%f",&produtos.volume_unidade);
		
		printf("\nDigite a quantidade de itens do produto:");
		scanf("%d",&produtos.quantidade_itens);
		
		printf("\nDigite o valor do produto:");
		scanf("%f",produtos.valor_unitario);

		printf("===== Produto Cadastrado com Sucesso =====");

	}else if(produtos.perecivel == 0){
		
		printf("Digite a data de fabricação");
		scanf("%s",produtos.data_fabricacao);
		
		printf("\nDigite o volume da unidade:");
		scanf("%f",&produtos.volume_unidade);
		
		printf("\nDigite a quantidade de itens do produto:");
		scanf("%d",&produtos.quantidade_itens);
		
		printf("\nDigite o valor do produto:");
		scanf("%f",produtos.valor_unitario);

		printf("===== Produto Cadastrado com Sucesso =====");
	}
}
