#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


int main ( )
    {
    setlocale (LC_ALL,"");
    setlocale (LC_CTYPE,"pt_BR.UTF-8" );

    keybd_event(VK_MENU, 0x36, 0, 0);
    keybd_event(VK_RETURN, 0x1C, 0, 0);
    keybd_event(VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);

    //a variavel declarada abaixo � o que nosso programa manipular�
    int n;

    Sleep(3000);
    printf("\n\n\n\tEste programa ler� um n�mero que voc� escolher e te dir� se ele � positivo ou negativo.");
    Sleep(3000);
    printf("\n\tAl�m disso, ele informa se esse n�mero � par ou �mpar.");
    Sleep(3000);
    printf("\n\tPara come�ar, informe um n�mero inteiro.\n\n\t");
    Sleep(3000);
    //o comando abaixo garante a limpeza do buffer do prompt de comando
    fflush;
    //ap�s p programa fornecer infos e instru��es ao usu�rio, kusamos o comando scanf para "ler" o n�mero escolhido
    scanf("%d", &n);
    Sleep(3000);
    system("cls");
    Sleep(300);


    //aqui o programa testa para verificar paridade/imparidade do n�mero
    if (n%2==0){
    printf("\n\n\n\tO n�mero que voc� escolheu, \"%d\", � par.", n);
    } else
    if (n%2!=0){
    printf("\n\n\n\tO n�mero que voc� escolheu, \"%d\", � �mpar", n);
    } else
    if (n==0){
    printf("\n\n\n\tVoc� escolheu o n�mero zero. Normalmente, dizemos que ele � um n�mero neutro.");
    }

    //aqui o programa testa para verificar se o n�mero � positivo ou negativo
    if(n>0){
    printf("\n\n\tEsse n�mero � positivo, pois ele � maior que zero.\n\n");
    } else
    if(n<0){
    printf("\n\n\tEsse n�mero � negativo, pois ele � maior que zero.\n\n");
    } else
    if (n==0){
    printf("\n\n\tZero n�o � positivo nem negativo.\n\n");
    }

    //adicionei testes para caso o n�mero inteiro fornecido seja zero, j� que ele n�o �  par, nem �mpar e nem positivo ou negativo.
    }
