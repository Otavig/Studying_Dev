package default_teste;

import java.time.LocalTime;
import java.util.ArrayList;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        // 1. Array fixo
        byte[] cinto = {0, 0, 0, 0, 0};
        System.out.println("Sem adicionar nada:");
        for (int i = 0; i < cinto.length; i++) {
            System.out.println(cinto[i]);
        }

        // Atualizar valores no array fixo
        for (int i = 0; i < cinto.length; i++) {
            cinto[i] = (byte) (i + 1);
        }

        System.out.println("\nDepois de adicionar tudo:");
        for (int i = 0; i < cinto.length; i++) {
            System.out.println(cinto[i]);
        }

        // 2. Trabalhando com Locale
        Locale currentLocale = Locale.getDefault();
        System.out.println("\nNúmero máximo entre 1 e 2: " + Math.max(1, 2));
        System.out.println("Idioma atual: " + currentLocale.getLanguage());
        System.out.println("País atual: " + currentLocale.getCountry());
        System.out.println("Local atual: " + currentLocale);

        Locale.setDefault(new Locale("en", "US"));
        currentLocale = Locale.getDefault();
        System.out.println("\nIdioma novo: " + currentLocale.getLanguage());
        System.out.println("País novo: " + currentLocale.getCountry());
        System.out.println("Local novo: " + currentLocale);

        // 3. Trabalhando com Math e método customizado
        double num1 = 20.00, num2 = 30.00;
        System.out.printf(
            "\nO maior número entre %.2f e %.2f é %.2f.%nAgora o resultado feito por mim: %.2f%n",
            num1, num2, Math.max(num1, num2), numberMaxCreate(num1, num2)
        );

        // 4. Obter a hora atual
        LocalTime now = LocalTime.now();
        System.out.println("Hora atual: " + now);

        // 5. Exemplo de array infinito usando ArrayList
        System.out.println("\nArray dinâmico (infinito):");
        ArrayList<Integer> dynamicArray = new ArrayList<>();
        dynamicArray.add(10);
        dynamicArray.add(20);
        dynamicArray.add(30);
        dynamicArray.add(40);

        System.out.println("Antes de adicionar novos elementos: " + dynamicArray);

        // Adicionando elementos ao array dinâmico
        for (int i = 50; i <= 70; i += 10) {
            dynamicArray.add(i);
        }

        System.out.println("Depois de adicionar novos elementos: " + dynamicArray);
    }

    // Método customizado para encontrar o maior número
    public static double numberMaxCreate(double a, double b) {
        return a > b ? a : b;
    }
}
