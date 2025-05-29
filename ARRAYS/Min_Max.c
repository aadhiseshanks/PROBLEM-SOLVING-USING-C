#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size]; 
    for(int i=0; i<size; scanf("%d", &arr[i]), i++);
    int max=arr[0],min=arr[0],sec_max=arr[0],sec_min=arr[0];
    for(int i=1; i<size; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    for(int i=1; i<size; i++) {
        if(arr[i] > sec_max && arr[i]!=max) sec_max = arr[i];
        if(arr[i] < sec_min && arr[i]!=min) sec_min = arr[i];
    }
    printf("Maximum Elements: %d\n", max);
    printf("Second Maximum Elements: %d\n", sec_max);
    printf("Minimum Elements: %d\n", min);
    printf("Second Minimum Elements: %d\n", sec_min);
    return 0;
}
