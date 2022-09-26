#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct{
    char login[30]; // vetor login da struct pessoa
    char senha[30]; // vetor senha da struct pessoa
    char funcao_string[30];
}pessoa;pessoa p[1];

char login[100],senha[100];
char cLogin[100],cSenha[100];

int menu;
int function;


void TelaLogin(){
    
    float sn;
    
    printf("Dseja se Cadastrar?\n");
    printf("SIM[1]/ NÃO[0]");
    scanf("%f", &sn);

    if(sn == 1){
        printf("Digite o Login: ");
        scanf("%s", cLogin);

        printf("Digite a Senha: ");
        scanf("%s", cSenha);

    }
    else{
        printf("Faça o Login\n");
    }

    system("cls");  
    printf("Login: ");                  
    scanf("%s",login);                
    printf("Senha: ");                 
    scanf("%s",senha);

    strcpy(p[0].login , cLogin);
    strcpy(p[0].senha , cSenha);

    if((strcmp(login,p[0].login) == 0) && (strcmp(senha,p[0].senha)== 0)){
        printf("Logado com sucesso\n"); //se for tudo comparado certo o login sera efetuado
        printf("Conectado : %s\n",login);
        system("cls");
        printf("Escolha sua Função:\n");
        printf("[1]Funcionario\n");
        printf("[2]Gerente\n");
        printf("[3]Chefe\n");
        printf("Escolha:");
        scanf("%d",&function);
    }
    else{
        printf("ERRO\n");
    }
}

void FUNCIONARIO(){
    int estoque = 0,opcao,computador=0,mouse=0,teclado=0;
    do
    {
        system("cls");
        printf("*************************************\n\n");
        printf("************PROGRAMA PIM*************\n\n");
        printf("*************************************\n\n");
        printf("[1] Lista de Estoque\n");
        printf("[2] Perfil \n");
        printf("[0] Sair \n");
        printf("Menu:");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1:
            system("cls");
            printf("********************************\n\n");
            printf("************ESTOQUE*************\n\n");
            printf("********************************\n\n");
            printf("ESTOQUE : %d\n",estoque);
            printf("[1]COMPUTADORES: %d\n",computador);
            printf("[2]TECLADOS: %d\n",teclado);
            printf("[3]MOUSES: %d\n",mouse);
            printf("DESEJA ALTERAR\n");
            printf("SIM[1]/NAO[0]:");
            scanf("%d",&opcao);
            do
            {
                while (opcao != 0)
                {
                    system("cls");
                    printf("ESCOLHA QUAL COMPONENTE\n");
                    printf("[1]COMPUTADORES\n");
                    printf("[2]TECLADOS\n");
                    printf("[3]MOUSES\n");
                    printf("[0]SAIR\n");
                    printf("MENU:");
                    scanf("%d",&menu);
                    switch (menu)
                    {
                    case 1:
                        system("cls");
                        printf("DIGTE O NOVO VALOR:");
                        scanf("%d",&computador);
                        printf("DESEJA CONTINUAR\n");
                        printf("SIM[1]/NAO[0]:");
                        scanf("%d",&opcao);
                        break;
                    case 2:
                        system("cls");
                        printf("DIGITE O NOVO VALOR:");
                        scanf("%d",&teclado);
                        printf("DESEJA CONTINUAR\n");
                        printf("SIM[1]/NAO[0]:");
                        scanf("%d",&opcao);
                        break;
                    case 3:
                        system("cls");
                        printf("DIGITE O NOVO VALOR:");
                        scanf("%d",&mouse);
                        printf("DESEJA CONTINUAR\n");
                        printf("SIM[1]/NAO[0]:");
                        scanf("%d",&opcao);
                    default:
                        break;
                    }
                }
                
            } while (opcao != 0);
            break;
        case 2:
            do
            {
                system("cls");
                printf("CONTECTADO : %s\n",login);
                printf("FUNÇÂO : FUNCIONARIO\n");
                printf("SAIR[0]:");
                scanf("%d",&opcao);
            } while (opcao != 0);
            break; 
        default:
            break;
        }
    } while (menu != 0);  
}



int main()
{
    TelaLogin();
    switch (function)
    {
    case 1:
        FUNCIONARIO();
        break;
    case 2:
        break;
    default:
        break;
    }
    system("pause");
    return 0;
}
