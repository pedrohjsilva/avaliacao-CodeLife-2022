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
    //a fun��o abaixo garante a correta exibi��o de caracteres do idioma brasileiro

    setlocale (LC_ALL,"");
    setlocale (LC_CTYPE,"pt_BR.UTF-8" );

    //a fun��o abaixo inicia o programa em tela cheia
    keybd_event(VK_MENU, 0x36, 0, 0);
    keybd_event(VK_RETURN, 0x1C, 0, 0);
    keybd_event(VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);

    //vari�veis que ser�o manipuladas pelo programa
    int n1, n2, n3;

    //aqui  ocorre a exibi��o de instru��es ao usu�rio, seguida da leitura dos valores pretendidos

    Sleep(3000);
    printf("\n\n\n\tEste programa ler� tr�s n�meros que voc� escolher.");
    Sleep(3000);
    printf("\n\tFeito isso, ele informa o maior, o menor e a mediana desses tr�s n�meros.");
    Sleep(3000);
    printf("\n\tPara come�ar, informe um n�mero inteiro.\n\n\t");
    scanf("%d", &n1);
    printf("\n\tAgora, informe o segundo n�mero inteiro.\n\n\t");
    scanf("%d", &n2);
    printf("\n\tPor fim, informe o �ltimo n�mero inteiro.\n\n\t");
    scanf("%d", &n3);
    system("cls");
    Sleep(300);

    printf("\n\n\n\tVoc� digitou os n�meros \"%d\", \"%d\" e \"%d\"", n1, n2, n3);

    //aqui s�o testados onde cada n�mero se "encaixa" em rela��o aos outros
    if(n1> n2 && n1>n3){
    printf("\n\tO maior n�mero que voc� digitou �: %d", n1);
    } else
    if(n2>n1 && n2>n3){
    printf("\n\tO maior n�mero que voc� digitou �: %d", n2);
    } else {
    printf("\n\tO maior n�mero que voc� digitoou �: %d", n3);
    }

    if(n1<n2 && n1<n3){
    printf("\n\tO menor n�mero que voc� digitou �: %d", n1);
    } else
    if(n2<n1 && n2<n3){
    printf("\n\tO menor n�mero que voc� digitou �: %d", n2);
    } else {
    printf("\n\tO menor n�mero que voc� digitoou �: %d", n3);
    }

    if(n1<n2<n3 || n1>n2>n3){
    printf("\n\tO n�mero do meio �: %d", n2);
    } else
    if(n2<n1<n3 || n2>n1>n3){
    printf("\n\tO n�mero do meio �: %d", n1);
    } else {
    printf("\n\tO n�mero do meio �: %d", n3);
    }

    //aqui eu fefini um ponto flutuante para calcular a m�dia dos n�meros informados, respeitando a convers�o impl�cita
    float media = (n1+n2+n3)/3.0;
    printf("\n\tA m�dia aritm�tica desses tr�s n�meros �: %f", media);
    }

