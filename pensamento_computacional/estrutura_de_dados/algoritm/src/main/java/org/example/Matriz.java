package org.example;

import java.lang.reflect.Array;

public class Matriz <T>{

    T[][] matriz;

    @SuppressWarnings("Unchecked")
    public Matriz(Class<T> clazz, int rows, int columns) {
        this.matriz = (T[][]) Array.newInstance(clazz, rows, columns);
    }

    public void setElement(T value, int row, int colum) {
        this.matriz[row][colum] = value;
    }

    public T getIndexElement(int row, int colum) {
        return this.matriz[row][colum];
    }

    public T[][] getMatriz() {
        return matriz;
    }
}
