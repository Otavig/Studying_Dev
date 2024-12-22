package default_teste;

import java.util.Locale;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        // Configura o Locale para utilizar ponto como separador decimal (US padrão)
        Locale.setDefault(Locale.US);
        
        // Criação de um único Scanner para todas as leituras
        Scanner sc = new Scanner(System.in);

        // Para ler uma palavra (TEXTO SEM ESPAÇOS)
        System.out.print("Digite uma palavra (sem espaços): ");
        String x = sc.next();
        System.out.println("Palavra digitada: " + x);

        // Para ler um número inteiro
        System.out.print("Digite um número inteiro: ");
        int y = sc.nextInt();
        System.out.println("O número inteiro digitado foi: " + y);

        // Para ler um número double
        System.out.print("Digite um número decimal: ");
        double z = sc.nextDouble();
        System.out.printf("O número decimal digitado foi: %.2f%n", z);

        // Para ler um caractere
        System.out.print("Digite um caractere: ");
        char c = sc.next().charAt(0); // Pega o primeiro caractere da entrada
        System.out.println("Caractere digitado: " + c);

        // Para realizar várias leituras consecutivas
        System.out.print("Digite uma palavra, um número decimal e um número inteiro (separados por espaço): ");
        String l = sc.next();
        double p = sc.nextDouble();
        int o = sc.nextInt();

        System.out.printf("Valores digitados -> Texto: %s, Decimal: %.2f, Inteiro: %d%n", l, p, o);

        // Fecha o Scanner para liberar recursos
        sc.close();
    }
}
