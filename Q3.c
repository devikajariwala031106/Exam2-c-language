#include <stdio.h>

int main()
 {
    int n, sum = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }
    printf("Sum of Positive values: %d\n", sum);
    return 0;
}