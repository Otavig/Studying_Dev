#include <stdio.h>
#include <stdlib.h>

int** list;
int size = 0;

void initial() {
    list = (int**)malloc(sizeof(int*) * 1);

    if(list == NULL) {
        printf("Error! - Initial");
        free(list);
        exit(1);
    }
}

void insertValue(int value) { // Formate lifo
    list = (int**)realloc(list, sizeof(int*) * (size + 1));
    
    if(list == NULL) {
        printf("Error! - InsertValue");
        free(list);
        exit(1);
    }
    list[size] = (int*)malloc(sizeof(int));
    *list[size] = value;

    size++;
}

void showList() {
    for (int i = 0; i < size; i++){
        printf("Index: %d - Value: %d \n", i, *list[i]);
    }
    
}

void quicksort(int low, int high){
    if(low < high) {
        int pivotIndex = partitional(low, high);
        quicksort(low, pivotIndex-1);
        quicksort(pivotIndex+1, high);
    }
}

int partitional(int low, int high) {
    int pivot = *list[high];
    int i = low - 1;

    for (int j = low; j < high; j++){
        if(*list[j] < pivot) {
            i++;
            swap(i, j);
        }
    }

    swap(i+1, high);
    return i+1;
    
}

void swap(int i, int j) {
    int temp = *list[i];
    *list[i] = *list[j];
    *list[j] = temp;
}

int main() {

    // Start list for code
    initial();

    // Isert value for list
    insertValue(5);
    insertValue(10);
    insertValue(25);
    insertValue(2);
    insertValue(3);

    // Sort List
    quicksort(0, size-1); 

    // print list
    showList();

    return 0;
}
