#include<stdio.h>
#include <stdlib.h>


float x, y, res;
char wait, sn, senha[20], tardis[20]="tardis", aviso[100]="Sem avisos no momento";
int inv=0, avis=1;

void soma();
void subtracao();
void multiplicacao();
void divisao();
void digitos();
void avisos();


int main(){
    int opt;
    system("clear");
    printf("Software para Realização de Operações Matemáticas\n\nMenu de Operações:\n\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Contagem de Dígitos\n6-Cadastro de Avisos\n7-Sair\n\n");
    printf("%s\n", aviso);
    if(inv==1){
        printf("\nValor inválido!");
        inv=0;
    }
    printf("\nDigite a opção desejada\nOpção: ");
    scanf("%d", &opt);
    switch (opt){

        case 1:
            soma();
            break;

        case 2:
            subtracao();
            break;

        case 3:
            multiplicacao();
            break;

        case 4:
            divisao();
            break;

        case 5:
            digitos();
            break;

        case 6:
            avisos();
            break;

        case 7:
            return 0;
            break;

        default:
            inv=1;
            main();
        }
    return 0;
    }

    void soma(){
        system("clear");
        printf("SOMA\n\n");
        printf("Digite o primeiro valor: ");
        scanf("%f", &x);
        printf("Digite o segundo valor: ");
        scanf("%f", &y);
        res=x+y;
        printf("%.2f + %.2f = %.2f\n",x, y, res);
        printf("Pressione Enter para retornar ao menu principal\n");
        __fpurge(stdin);
        scanf("%c", &wait);
        main();
    }

    void subtracao(){
        system("clear");
        printf("SUBTRAÇÃO\n\n");
        printf("Digite o primeiro valor: ");
        scanf("%f", &x);
        printf("Digite o segundo valor: ");
        scanf("%f", &y);
        res=x-y;
        printf("%.2f - %.2f = %.2f\n",x, y, res);
        printf("Pressione Enter para retornar ao menu principal\n");
        __fpurge(stdin);
        scanf("%c", &wait);
        main();
    }

    void multiplicacao(){
        system("clear");
        printf("MULTIPLICAÇÃO\n\n");
        printf("Digite o primeiro valor: ");
        scanf("%f", &x);
        printf("Digite o segundo valor: ");
        scanf("%f", &y);
        res=x*y;
        printf("%.4f * %.4f = %.4f\n",x, y, res);
        printf("Pressione Enter para retornar ao menu principal\n");
        __fpurge(stdin);
        scanf("%c", &wait);
        main();
    }

    void divisao(){
        system("clear");
        printf("DIVISÃO\n\n");
        printf("Digite o primeiro valor: ");
        scanf("%f", &x);
        printf("Digite o segundo valor: ");
        scanf("%f", &y);
        res=x/y;
        printf("%.4f / %.4f = %.4f\n",x, y, res);
        printf("Pressione Enter para retornar ao menu principal\n");
        __fpurge(stdin);
        scanf("%c", &wait);
        main();
    }

    void digitos(){
        system("clear");
        printf("CONTAGEM DE DÍGITOS\n\n");
        int contaDigitos = 0, valor, numero;
        printf("Digite o valor que terá os dígitos contados\n");
        scanf("%d", &numero);
        valor=numero;
        if (valor == 0) contaDigitos = 1;
        else
            while (valor != 0)
           {
              contaDigitos = contaDigitos + 1;
               valor = valor / 10;
          }
      printf("O número %d tem %d dígitos\n", numero, contaDigitos);
      printf("Pressione Enter para retornar ao menu principal\n");
        __fpurge(stdin);
        scanf("%c", &wait);
      main();
    }

    void avisos(){
        system("clear");
        printf("CADASTRO DE AVISOS\n\n");
        printf("ACESSO RESTRITO A PROFESSORES\n\nDigite sua senha de acesso: ");
        __fpurge(stdin);
        scanf("%s", senha);
        if (strcmp(senha,tardis) == 0){
            if (avis=1)
                printf("\nNão há avisos no momento, deseja cadastrar um?[s/n]\n");
            else
                printf("\nO aviso atual é '%s', gostaria de alterá-lo?[s/n]\n", aviso);
            __fpurge(stdin);
            scanf("%c", &sn);
            if(sn=='s'){
                printf("Digite o novo aviso:\n");
                __fpurge(stdin);
                gets(aviso);
                printf("Aviso cadastrado. ");
                avis=3;
            }
            else
                printf("Aviso não cadastrado. ");
        }
        else
            printf("Senha incorreta. ");
        printf("Pressione Enter para retornar ao menu principal\n");
        __fpurge(stdin);
        scanf("%c", &wait);
        main();
    }






