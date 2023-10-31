#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Please enter an array with at least two elements.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int firstLargestOdd = 0;
    int secondLargestOdd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            if (arr[i] > firstLargestOdd) {
                secondLargestOdd = firstLargestOdd;
                firstLargestOdd = arr[i];
            } else if (arr[i] > secondLargestOdd && arr[i] != firstLargestOdd) {
                secondLargestOdd = arr[i];
            }
        }
    }

    if (secondLargestOdd == 0) {
        printf("There is no second largest odd number in the array.\n");
    } else {
        printf("The second largest odd number in the array is: %d\n", secondLargestOdd);
    }

    return 0;
}
