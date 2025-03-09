#include <stdio.h>


int main() {
    int array[] = {5,34,2,1,6,7};
    int tamanho = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < tamanho - 1; i++){
        for (int j = 0; j < tamanho - i - 1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d \n", array[i]);
    }
    

    return 0;
}