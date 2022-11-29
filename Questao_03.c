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

    //variáveis que serão manipuladas pelo pprograma
    int n, i;


    Sleep(3000);
    printf("\n\n\n\tEste programa mostra os primeiros n múltiplos de 3.");
    Sleep(3000);
    printf("\n\tn será um número escolhido por você.");
    Sleep(3000);
    printf("\n\tPara começar, informe um número inteiro.\n\n\t");
    scanf("%d", &n);
    system("cls");
    Sleep(300);

    printf("\n\n\n\tVocê escolher ver on primeiros \"%d\" múltilos de 3.", n);
    printf("\n\tSeguem:");

    //laço de repetição que multiplica 3 até o número desejado e imprime os resultados
    for(i=1; i<=n; i++){
    printf("\n\t%d", 3*i);
    }


    }

