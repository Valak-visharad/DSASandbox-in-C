#include<stdio.h>
void main(){
    int i, n;
    printf("How many numbers : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < 10; i++){
        printf("\t%d number : ", i+1);
        scanf("%d", &arr[i]);
    }
    int min=arr[0], max = arr[0], j;
    //finding smallest and largest of all
    for(j = 1; j < 10; j++){
        if (min > arr[j])
            min = arr[j];
        else if (max < arr[j])
            max = arr[j];
    }
    printf("\n\n\t\tLargest number : %d\n\t\tSmallest number : %d\nArray : ", max, min);
    for (int c = 0; c < 10; c++){
        printf("\a %d, ", arr[c]);
    }
    printf("\nArray size : ", sizeof(arr));
}