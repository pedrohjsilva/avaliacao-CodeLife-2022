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

    //vari�veis que ser�o manipuladas pelo pprograma
    int n, i;


    Sleep(3000);
    printf("\n\n\n\tEste programa mostra os primeiros n m�ltiplos de 3.");
    Sleep(3000);
    printf("\n\tn ser� um n�mero escolhido por voc�.");
    Sleep(3000);
    printf("\n\tPara come�ar, informe um n�mero inteiro.\n\n\t");
    scanf("%d", &n);
    system("cls");
    Sleep(300);

    printf("\n\n\n\tVoc� escolher ver on primeiros \"%d\" m�ltilos de 3.", n);
    printf("\n\tSeguem:");

    //la�o de repeti��o que multiplica 3 at� o n�mero desejado e imprime os resultados
    for(i=1; i<=n; i++){
    printf("\n\t%d", 3*i);
    }


    }

