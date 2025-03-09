package org.example;

import java.util.List;
import java.util.Collections;

public class BubbleSort<T extends Comparable<T>> {
    public void bubbleSort(List<T> list) {
        if (list == null || list.size() <= 1) {
            return;
        }

        int n = list.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (list.get(j).compareTo(list.get(j + 1)) > 0) {
                    Collections.swap(list, j, j + 1);
                }
            }
        }
    }
}
