#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


int main ( )
    {
    //programa desenvolvido em linguagem C
    //a função abaixo garante a correta exibição de caracteres do idioma brasileiro

    setlocale (LC_ALL,"");
    setlocale (LC_CTYPE,"pt_BR.UTF-8" );

    //a função abaixo inicia o programa em tela cheia
    keybd_event(VK_MENU, 0x36, 0, 0);
    keybd_event(VK_RETURN, 0x1C, 0, 0);
    keybd_event(VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);

    //variáveis que serão manipuladas pelo programa
    int n1, n2, n3;

    //aqui  ocorre a exibição de instruções ao usuário, seguida da leitura dos valores pretendidos

    Sleep(3000);
    printf("\n\n\n\tEste programa lerá três números que você escolher.");
    Sleep(3000);
    printf("\n\tFeito isso, ele informa o maior, o menor e a mediana desses três números.");
    Sleep(3000);
    printf("\n\tPara começar, informe um número inteiro.\n\n\t");
    scanf("%d", &n1);
    printf("\n\tAgora, informe o segundo número inteiro.\n\n\t");
    scanf("%d", &n2);
    printf("\n\tPor fim, informe o último número inteiro.\n\n\t");
    scanf("%d", &n3);
    system("cls");
    Sleep(300);

    printf("\n\n\n\tVocê digitou os números \"%d\", \"%d\" e \"%d\"", n1, n2, n3);

    //aqui são testados onde cada número se "encaixa" em relação aos outros
    if(n1> n2 && n1>n3){
    printf("\n\tO maior número que você digitou é: %d", n1);
    } else
    if(n2>n1 && n2>n3){
    printf("\n\tO maior número que você digitou é: %d", n2);
    } else {
    printf("\n\tO maior número que você digitoou é: %d", n3);
    }

    if(n1<n2 && n1<n3){
    printf("\n\tO menor número que você digitou é: %d", n1);
    } else
    if(n2<n1 && n2<n3){
    printf("\n\tO menor número que você digitou é: %d", n2);
    } else {
    printf("\n\tO menor número que você digitoou é: %d", n3);
    }

    if(n1<n2<n3 || n1>n2>n3){
    printf("\n\tO número do meio é: %d", n2);
    } else
    if(n2<n1<n3 || n2>n1>n3){
    printf("\n\tO número do meio é: %d", n1);
    } else {
    printf("\n\tO número do meio é: %d", n3);
    }

    //aqui eu fefini um ponto flutuante para calcular a média dos números informados, respeitando a conversão implícita
    float media = (n1+n2+n3)/3.0;
    printf("\n\tA média aritmética desses três números é: %f", media);
    }

