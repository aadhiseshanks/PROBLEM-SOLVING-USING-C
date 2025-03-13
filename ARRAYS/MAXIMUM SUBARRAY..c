#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    int max_sum = arr[0];
    int current_sum = arr[0];
    for(int i=1; i<size; i++) {
        current_sum = (arr[i] > current_sum + arr[i])?arr[i]:current_sum + arr[i];
        
        if(current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    printf("Maximum Sub Array: %d", max_sum);
    return 0;
}
