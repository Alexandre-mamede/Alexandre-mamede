typedef struct {
   char nome[101];
   char codigoBarras[13];
   int tipo_produto;
   int perecivel;
   char data_Fabricacao[11];
   char data_Validade[11];
   float volume;
   int quantidade_itens;
   float valor_Unitario;
} produto;

typedef struct {
   char nome[51];
   char cep[10];
   char endereco[51];
   char telefone[20];
   float capacidade_Maxima;
   float estoque_Atual;
   produto produtos[100];
   int total_Produtos;
} Deposito;
