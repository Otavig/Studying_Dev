package org.example;

import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
//        List<Integer> list = Arrays.asList(5, 2, 9, 1, 5, 6);
//        System.out.println("Antes: " + list);
//        List<Integer> sortedList = new QuickSort(list);
//        System.out.println("Depois: " + sortedList);


//        Integer[] listaa = {1,5,3,12,5,6,0};
//
//        System.out.println("Antes");
//        for (int x : listaa) {
//            System.out.println(x);
//        }
//
////        new BubbleSort().bubbleSort(listaa);
//
//        QuickSort teste = new QuickSort();
//
//        teste.quickSort(listaa, 0, listaa.length-1);
//
//        System.out.println("Depois");
//        for (int x : listaa) {
//            System.out.println(x);
//        }


//        int[][] matriz = {{1,2,3}, {3,2,1}, {7,4,5}};
//
//        for (int i = 0; i < matriz.length; i++) {
//            for (int j = 0; j < matriz[0].length; j++) {
//                System.out.printf("Coluna [%d] e linha [%d] = %d \n", i, j, matriz[i][j]);
//            }
//        }
//
//        System.out.println("Versão fácil");
//
//        int colunas = matriz.length;
//        int linhas = matriz[0].length;
//
//        for (int i = 0; i < colunas * linhas; i++) {
//            int coluna = i / colunas;
//            int linha = i % colunas;
//            System.out.printf("Coluna [%d] e linha [%d] = %d \n", coluna, linha, matriz[coluna][linha]);
//        }
//
//        BubbleSort<String> sorterStr = new BubbleSort<>();
//        List<String> words = new ArrayList<>(Arrays.asList("banana", "apple", "cherry", "date"));
//        sorterStr.bubbleSort(words);
//        System.out.println(words); // Saída: [apple, banana, cherry, date]


//        Matriz<Integer> matriz1 = new Matriz<Integer>(Integer.class,3, 3);
//
//        matriz1.setElement(20, 0, 0);
//        System.out.print(matriz1.getIndexElement(0, 0));

        Pilha list = new Pilha();

        list.insert(5);
        list.insert(2);
        list.insert(10);

        list.getLastIndex();

        list.print();


    }

}