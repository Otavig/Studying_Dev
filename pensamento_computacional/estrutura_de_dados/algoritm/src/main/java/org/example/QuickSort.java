package org.example;

import java.util.List;

public class QuickSort {
    protected static Swap<Integer> swap = new Swap<Integer>();

    public void quickSort(Integer[] arr, int low, int high) {
        if(low < high) {
            int pivotIndex = particionar(arr, 0, arr.length - 1);
            quickSort(arr, low, pivotIndex - 1);
            quickSort(arr, pivotIndex + 1, high);
        }
    }

    public Integer particionar(Integer[] arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;


        for (int j = low; j < high; j++) {
            if(arr[j] < pivot) {
                i++;
                swap.execute(arr, i, j);
            }
        }

        swap.execute(arr, low+i, pivot);
        return i+1;
    }

}
//
//public class QuickSort {
//    protected static Swap<Integer> swap = new Swap<Integer>();
//
//    public void quickSort(Integer[] arr, int low, int high) {
//        if(low < high) {
//            int pivotIndex = partition(arr, low, high);
//            quickSort(arr, low, pivotIndex-1 );
//            quickSort(arr, pivotIndex+1, high);
//
//        }
//    }
//
//    public static int partition(Integer[] arr, int low, int high) {
//        int pivot = arr[high];
//        int i = low - 1;
//
//        for (int j = low; j < high; j++) {
//            if(arr[j] < pivot) {
//                i++;
//                swap.execute(arr, i, j);
//            }
//        }
//
//        swap.execute(arr, i+1, high);
//        return i+1;
//    }
//
//}
