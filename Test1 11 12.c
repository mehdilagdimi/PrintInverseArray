//This program reads data and stores it in an array then print the data in inverse order

#include <stdio.h>

void sortInverseOrder(int table[], int size){
    printf("The inverse order of the array :\n");
    for(size; size > 0; size--){
            printf("%d \t", table[size-1]);
    }
}

void main(){
    int size, data;
    printf("Enter the size of array: \n");
    scanf("%d", &size);
    int dataTable[size];
    int i = 0;
    printf("Enter a max of %d integers, one at a time:\n", size);
    while(i < size){
        scanf(" %d", &data);
        dataTable[i] = data;
        i++;
    }

    sortInverseOrder(dataTable, size);

}
