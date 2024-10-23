#include <stdio.h>

void bubble_sort(int arr[],int size);

int main(void ){
    int arr[]={-5001,5,47,72,71,30,50,11,7,8,11111,91,78,76,56,65,45,73,34,1,12,-112,23,29,95};
    int size=sizeof arr/sizeof arr[0];//this is how to find the number of the elements of an array

    //printing the sorted array
    printf("Array before sort:\n");
    printf("{ ");
    for (int i = 0; i < size; ++i) {
        if (i == size-1 ){
            printf("%d }", arr[i]);
            break;
        }
        printf("%d, ", arr[i]);

    }
    printf("\n\n");

    printf("Array after sort:\n");
    bubble_sort(arr,size);
}
//bubble sort
void bubble_sort(int arr[],int size) {
    for (int j = 0; j < size; ++j) {
        for (int i = 0; i < size; i++) {
            if (arr[i] < arr[i + 1]) { //change the < and > to change nozoli and suodi
                //swap
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    //printing the sorted array

    printf("{ ");
    for (int i = 0; i <= size; ++i) {
        if (i == size){
            printf("%d}", arr[i]);
            break;}
        printf("%d, ", arr[i]);

    }
}