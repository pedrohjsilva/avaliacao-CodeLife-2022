//programa desenvolvido em Java

package questao_java;
//importei a biblioteca de leitura da linguagem Java
import java.util.Scanner;
public class mainclass
{
    public static void main(String[] args)
    {
    //defini o tipo de classe para a leitura de informação
    Scanner ler = new Scanner(System.in);
    
    //declarei as variáveis a serem manipuladas pelo programa
    //n será o número lido e i será o "auxiliar", que chamamos de variável contadora
    int n, i;
    
    //dei as instruções ao usuário
    System.out.printf("Esse programa irá ler um número par e dirá todos os números pares menores que ele\n");
    System.out.printf("Para começar, informe um número par\n\n");
   
    //solicitei a informação desejada, e a armazenei em n
    n = ler.nextInt();

    //tratei as respostas:
    //caso n seja ímpar, o programa informa o fato e não prosegue
    if(n%2!=0){
    System.out.printf("O número \"%d\" é um número ímpar\n", n)}
    else{
    
    //caso n seja par, o programa calcula os valores menores que n e que sejam divísiveis por dois com resto 0    
    System.out.printf("Os números pares menores que \"%d\" são:\n", n);
    
    //para os dados a serem impressos, iniciei i como 2, uma vez que 0 é um número neutro
    for(i=2; i<n; i=i+2){
    System.out.printf("[%d]\n", i);}
        }
    }
    
    
}