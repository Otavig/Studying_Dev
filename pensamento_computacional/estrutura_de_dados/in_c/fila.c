#include <stdio.h>
#include <stdlib.h>

int** list = NULL;
int size = 0;

void instanceList() {
    list = (int**)malloc(sizeof(int*) * 1);

    // Verify status memory alloc
    if (list == NULL) {
        printf("Erro ao alocar memória\n");
        exit(1);
    }
}

void bubbleSort() {
    int* temp;
    
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - 1 - i; j++){
            if(*list[j] > *list[j+1]) {
                // Swap values
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}

void insert(int value) {
    list = (int**)realloc(list, sizeof(int*) * (size + 1));
    
    // Move list for left
    for (int i = size; i > 0; i--) {
        list[i] = list[i - 1];
    }
    
    list[0] = (int*) malloc(sizeof(int));
    *list[0] = value;

    size++;
}

void printList(){
    for (size_t i = 0; i < size; i++){
        printf("%ld = %d \n", i, *list[i]);
    }
}

void clearMemory() {
    free(list);
}

int main() {
    // Instance for list create
    instanceList();

    // Insert value to memory
    insert(5);
    insert(50);
    insert(10);
    insert(13);

    // Sort list
    bubbleSort();

    // Print list sort
    printList();

    clearMemory();

    return 0;
}