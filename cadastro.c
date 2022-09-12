#include <stdio.h>
#include <string.h> //biblioteca usada para manipulação de strings
#include <stdlib.h>
#include <locale.h>

typedef struct{
    char login[30]; // vetor login da struct pessoa
    char senha[30]; // vetor senha da struct pessoa
    char funcao_string[30];
}pessoa;pessoa p[1]; //[1] Define o maximo de logins e senhas que podem ser usados, podemos estudar mais para implementar multiplos cadastros utilizando lista de Matrizes

int main(){
    char login[30],senha[30];
    char cadastro_senha[30],cadastro_login[30];
    char funcao_string[30];
    float sn,funcao;
    
    
    printf("Deseja se cadastrar?\n");
    printf("SIM(1)/NAO(0):");
    scanf("%f",&sn);

    if(sn == 1){             //Verificando se o Usuario quer criar um novo cadastro ou não(estudar mais essa parte);
        printf("Digite o Login a ser cadastrado: ");
        scanf("%s", cadastro_login);

        printf("Digite a Senha a ser cadastrada: ");
        scanf("%s", cadastro_senha);
    }
    else if (sn == 0 ){
        printf("Va para o Login\n");
    }
    
    strcpy(p[0].login, cadastro_login); //Armazenando a struct do Cadastro do Login na struct do Login.
    strcpy(p[0].senha, cadastro_senha);//Armazenando a struct do Cadastro de senha na struct da Senha.
    
    printf("Login: ");                  
    scanf("%s",login);                
    printf("Senha: ");                 
    scanf("%s",senha);                

    if((strcmp(login,p[0].login) == 0)&& (strcmp(senha,p[0].senha)== 0)){ //Comparando as String do Cadrastro Com a string digitada no Login
        printf("Logado com sucesso\n"); //se for tudo comparado certo o login sera efetuado
        printf("Conectado : %s\n",login);
        printf("Digite sua Função\n");
        printf("Funcionario(1)/Chefe(2)/Gerente(3):");
        scanf("%f",&funcao);

        if(funcao == 1){
            printf("você foi definido como Funcionario\n");
        }
        else if(funcao == 2){
            printf("você foi definido como Chefe\n");
        }
        else{
            printf("você foi definido como Gerente\n");
        }

    }
    else{//caso a senha ou Login esteja errado o sistema negara o Acesso
        printf("Acesso Negado\n");
    }
    system("pause");

    return 0;
}