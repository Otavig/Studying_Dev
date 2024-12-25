package default_teste;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.println(sc);

		int x = sc.nextInt();
		String s1, s2, s3;
		
		sc.nextLine();

		s1 = sc.nextLine(); // Se fosse apenas o next, ele iria ler apenas uma palavra!
		s2 = sc.nextLine();
		s3 = sc.nextLine();

		System.out.printf("Zero: %d, Primeiro: %s, Segundo: %s e Terceiro: %s", x, s1, s2, s3);

		sc.close();

		
		// Estudo de casting
		
//		double var = 20.5;
//		
//		
//		System.out.println((int )var);
		
		
//		char text = 'A';
//		
//		int textAtive = (int) text;
//		
//		System.out.println(textAtive);
	}
}
