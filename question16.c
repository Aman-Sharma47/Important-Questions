int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], mergedArr[2 * size];
    int i, j, k;

    printf("Enter the elements of the first array in descending order: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array in descending order: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    // Check if the arrays are in descending order
    for (i = 0; i < size - 1; i++) {
        if (arr1[i] < arr1[i + 1] || arr2[i] < arr2[i + 1]) {
            printf("-1\n");
            return 0;
        }
    }

    // Merge the arrays in descending order
    i = 0; // index for arr1
    j = 0; // index for arr2
    k = 0; // index for mergedArr

    while (i < size && j < size) {
        if (arr1[i] >= arr2[j]) {
            mergedArr[k] = arr1[i];
            i++;
        } else {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of arr1, if any
    while (i < size) {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }

    // Copy the remaining elements of arr2, if any
    while (j < size) {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }

    // Print the merged array
    printf("Merged array in descending order: ");
    for (i = 0; i < 2 * size; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}