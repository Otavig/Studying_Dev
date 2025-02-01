package default_teste;

import java.util.Locale;
import java.util.Scanner;


// Problema exemplo
// Uma operadora de telefonia cobra R$ 50.00 por um plano básico que
// dá direito a 100 minutos de telefone. Cada minuto que exceder a
// franquia de 100 minutos custa R$ 2.00. Fazer um programa para ler a
// quantidade de minutos que uma pessoa consumiu, daí mostrar o valor
// a ser pago.
// Entrada Saída
// 22 Valor a pagar: R$ 50.00
// Entrada Saída
// 103 Valor a pagar: R$ 56.00

public class Problema1 {
	public static void main(String[] args) {
//		Locale.setDefault(Locale.US);
		Locale.setDefault(new Locale("pt", "br"));
		
		System.out.print("Quanto tempo foi consumido: ");
		Scanner instantiateQuestion = new Scanner(System.in);
		
		
		float question = (float) instantiateQuestion.nextInt();
		
		float totalPay = 50;
		
		if(question > 100) {
			totalPay += (question - 100) * 2;
		}
		
		
		System.out.printf("Valor a pagar: R$ %.2f%n", totalPay);
		
		
		instantiateQuestion.close();
		
// 		Operadores de atribuição cumulativa
//		int a = 2;
//		int b = 3;
//		
//		System.out.println(" ");
//		System.out.println("A: " + " " + a + " " + "B:" + " " + b);
//		
//		a /= b;
//		
//		System.out.println("A: " + " " + a + " " + "B:" + " " + b);
	}
}
