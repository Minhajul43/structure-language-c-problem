#include<stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int i, sum = 0;
    for (i = 1; i < 5; i += 2) {
        sum += arr[i];
    }
    printf("Sum = %d", sum);
    return 0;
}
