#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>


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

    int A[4][5];

    //intru��es para o usu�rio
    Sleep(3000);
    printf("\n\n\n\tEste programa permite que voc� escreva uma matriz A de ordem 4x5.");
    Sleep(3000);
    printf("\n\tVoc� ir� inserir as entradas da matriz, e, em seguida, ela ser� exibida.");
    Sleep(3000);

    //vari�veis usadas nos la�os de repeti��o
    int i, j;
    //o la�o duplo abaixo garante que ao chegar no n�mero de colunas desejadas,
    //passaremos a inserir dados na linha subsequente
    for(i=0; i<4; i++){
    for(j=0; j<5; j++){
    printf("\n\n\tInsira a entrada[%d][%d]\n\n\t", i+1, j+1);
    scanf(" %d", &A[i][j]);
    }
    }

    system("cls");

    printf("\n\n\n\tVoc� digitou a matriz:\n\n");

    //exibi��o da matriz
    //note que as linhas s�o impressas uma a uma
    for(i=0; i<5; i++){
    printf("\t%d ", A[0][i]);}
    printf("\n");

    for(i=0; i<5; i++){
    printf("\t%d ", A[1][i]);}
    printf("\n");

    for(i=0; i<5; i++){
    printf("\t%d ", A[2][i]);}
    printf("\n");

    for(i=0; i<5; i++){
    printf("\t%d ", A[3][i]);}
    printf("\n");


    printf("\n\n");
    }

