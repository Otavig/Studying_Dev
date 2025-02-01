package default_teste;
import java.util.Scanner;

// import java.util.Locale;
// import java.util.Scanner;

// Estrutura switch-case
// Quando se tem várias opções de fluxo a serem tratadas com base no
// valor de uma variável, ao invés de várias estruturas if-else encadeadas,
// alguns preferem utilizar a estrutura switch-case.
// Problema exemplo
// Fazer um programa para ler um valor inteiro de 1 a 7 representando um
// dia da semana (sendo 1=domingo, 2=segunda, e assim por diante).
// Escrever na tela o dia da semana correspondente, conforme exemplos.
// Entrada Saída
// 1 Dia da semana: domingo
// Entrada Saída
// 4 Dia da semana: quarta
// Entrada Saída
// 9 Dia da semana: valor inválido

public class Problema2 {
    public static void main(String[] args){
        Scanner listen = new Scanner(System.in);
		
		int listenValue = 0;
		
		while(true) {
			System.out.print("Digite um valor entre 1 a 7: ");
			listenValue = listen.nextInt();
			if(listenValue >= 1 && listenValue <= 7) {
				break;
			} else {
				System.out.println("Valor inválido...");
			}
		}
		
		System.out.println("Dia da semana é ");
		
		switch(listenValue) {
			case 1: 
				System.out.println("Domingo");
				break;
			case 2: 
				System.out.println("Segunda-Feira");
				break;
			case 3: 
				System.out.println("Terça-Feira");
				break;
			case 4: 
				System.out.println("Quarta-Feira");
				break;
			case 5: 
				System.out.println("Quinta-Feira");
				break;
			case 6: 
				System.out.println("Sexta-Feira");
				break;
			case 7: 
				System.out.println("Sábado");
				break;
		}
		listen.close();
    }
}