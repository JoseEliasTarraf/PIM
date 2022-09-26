#include <stdio.h>
#include <string.h> //biblioteca usada para manipulação de strings
#include <stdlib.h>
#include <locale.h>

typedef struct{
    char login[30]; // vetor login da struct pessoa
    char senha[30]; // vetor senha da struct pessoa
    char funcao_string[30];
}pessoa;pessoa p[1];



int main(){
 
    char login[100];
    char senha[100];
    char cadastro_senha[100],cadastro_login[100];
    float sn,funcao,estoque = 0,funcionarios;
    int menu,sn1,retornar,i;
    
    
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
    
    system("cls");  
    printf("Login: ");                  
    scanf("%s",login);                
    printf("Senha: ");                 
    scanf("%s",senha);                
   
    strcpy(p[0].login , cadastro_login);
    strcpy(p[0].senha , cadastro_senha);

    if((strcmp(login,p[0].login) == 0) && (strcmp(senha,p[0].senha)== 0)){ //Comparando as String do Cadrastro Com a string digitada no Login
        printf("Logado com sucesso\n"); //se for tudo comparado certo o login sera efetuado
        printf("Conectado : %s\n",login);
        printf("Digite sua Função\n");
        printf("Funcionario(1)/Chefe(2)/Gerente(3):");
        scanf("%f",&funcao);
        system("cls");
        if(funcao == 1){
            do
            {
                printf("Conectado: %s\n",login);
                printf("Função: Funcionario\n");
                printf(" __________________________\n");
                printf("| [1] Lista de Estoque     |\n");
                printf("| [2] Perfil               |\n");
                printf("| [0] Sair                 |\n");
                printf("|__________________________|\n");
                printf("Menu:");
                scanf("%d",&menu);
                switch (menu)
                {
                case 1:
                    do
                    {
                        system("cls");
                        printf("Estoque:%0.0f\n",estoque);
                        printf("Deseja Mexer no Estoque?\n");
                        printf("SIM[1]/NAO[0]:");
                        scanf("%f",&sn);
                        while (sn != 0)
                        {
                            printf("Digite o novo Valor do Estoque:");
                            scanf("%f",&estoque);
                            printf("Estoque:%0.0f\n",estoque);
                            printf("Deseja continuar no Estoque?\n");
                            printf("SIM[1]/NAO[0]:");
                            scanf("%f",&sn);
                            system("cls");
                        }
                    } while (sn != 0);
                    break;
                case 2:
                    system("cls");
                    printf("Perfil:\n");
                    printf("%s\n",login);
                    break;
                default:
                    break;
                }
            } while (menu != 0 );        
        }
        else if(funcao == 2){
           do
            {
                system("cls");
                printf("Conectado: %s\n",login);
                printf("Função: Chefe\n");
                printf(" _______________________________\n");
                printf("| [1] Registrar Funcionario     |\n");
                printf("| [2] Definir Salario           |\n");
                printf("| [0] Sair                      |\n");
                printf("|_______________________________|\n");
                printf("Menu:");
                scanf("%d",&menu);
                switch (menu)
                {
                case 1:
                    do
                    {
                        system("cls");
                        printf("Quantos Funcionario deseja Registrar:");                      
                        scanf("%f",&funcionarios);
                        for (i = 1; i <= funcionarios; i++)
                        {
                            printf("Digite o Login a ser cadastrado: ");
                            scanf("%s", cadastro_login);

                            printf("Digite a Senha a ser cadastrada: ");
                            scanf("%s", cadastro_senha);
                        }
                        printf("Deseja Continuar Registrando?\n");
                        printf("SIM[1]/NAO[0]\n");
                        scanf("%d",&sn);
                    } while (sn != 0);
                    break;
                case 2:
                    system("cls");
                    printf("Perfil:\n");
                    printf("%s\n",login);
                    break;
                default:
                    break;
                }
            } while (menu != 0 );
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