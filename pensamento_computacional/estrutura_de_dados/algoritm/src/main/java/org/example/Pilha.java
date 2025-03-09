package org.example;

public class Pilha {
    private int[] list;
    private int topo;

    public Pilha() {
        list = new int[0];
        topo = -1;
    }

    public void insert(int value) {
        int[] newArray = new int[list.length + 1];

        for (int i = 0; i < list.length; i++) {
            newArray[i] = list[i];
        }

        newArray[list.length] = value;
        list = newArray;

        topo++;
    }

    public int getLastIndex() {
        if(list.length == 0) {
            System.out.println("Nenhum elemento adicionado");
            return -1;
        }

        System.out.println(list[topo]);
        return list[topo];
    }

    public void pop() {
        if(list.length == 0) {
            System.out.println("Lista já está vazia!");
            return;
        }

        int[] newArray = new int[list.length - 1];

        for (int i = 0; i < list.length - 1; i++) {
            newArray[i] = list[i];
        }

        list = newArray;

        topo--;
    }
    
    public void print() {
        for (int i = 0; i < list.length; i++) {
            System.out.println(this.list[i]);
        }
    }
}
