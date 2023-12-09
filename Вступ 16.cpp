//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//    int n;
//    printf("NxN? ");
//    scanf_s("%d", &n);
//    int** array = (int**)malloc(n * sizeof(int*));
//    for (int i = 0; i < n; i++) {
//        array[i] = (int*)malloc(n * sizeof(int));
//    }
//    printf("Vvedit elementi matrici \n");
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            scanf_s("%d", &array[i][j]);
//        }
//    }
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < i; j++) {
//            sum += array[i][j];
//        }
//    }
//    printf("Sum elemntiv vishe golovnoy diagonali: %d\n", sum);
//    for (int i = 0; i < n; i++) {
//        free(array[i]);
//    }
//    free(array);
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//    int N;
//    printf("Enter the size N (N <= 10): ");
//    scanf_s("%d", &N);
//    if (N > 10) {
//        printf("N should be less than or equal to 10.\n");
//        return 1;
//    }
//    int** array = (int**)malloc(N * sizeof(int*));
//    for (int i = 0; i < N; i++) {
//        array[i] = (int*)malloc(N * sizeof(int));
//    }
//    printf("Enter the elements of the matrix:\n");
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            scanf_s("%d", &array[i][j]);
//        }
//    }
//    printf("Average of each row:\n");
//    for (int i = 0; i < N; i++) {
//        int sum = 0;
//        for (int j = 0; j < N; j++) {
//            sum += array[i][j];
//        }
//        int average = sum / N;
//        printf("Row %d: %d\n", i + 1, average);
//    }
//    for (int i = 0; i < N; i++) {
//        free(array[i]);
//    }
//    free(array);
//    return 0;
//}

//
//#include <stdio.h>
//int main() {
//    int a[4][4];
//    printf("Enter the elements of the 4x4 array:\n");
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4; j++) {
//            scanf_s("%d", &a[i][j]);
//        }
//    }
//    int product = 1;
//    for (int i = 0; i < 4; i++) {
//        int maxElement = a[i][0];
//        for (int j = 1; j < 4; j++) {
//            if (a[i][j] > maxElement) {
//                maxElement = a[i][j];
//            }
//        }
//        product *= maxElement;
//    }
//    printf("Product of maximum elements in each row: %d\n", product);
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//void fillSnakeMatrix(int** matrix, int M, int N) {
//    int counter = 1;
//    for (int i = 0; i < M; i++) {
//        matrix[i] = (int*)malloc(N * sizeof(int));
//        if (i % 2 == 0) {
//            for (int j = 0; j < N; j++) {
//                matrix[i][j] = counter++;
//            }
//        }
//        else {
//            for (int j = N - 1; j >= 0; j--) {
//                matrix[i][j] = counter++;
//            }
//        }
//    }
//}
//void printMatrix(int** matrix, int M, int N) {
//    for (int i = 0; i < M; i++) {
//        for (int j = 0; j < N; j++) {
//            printf("%3d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//}
//void freeMatrix(int** matrix, int M) {
//    for (int i = 0; i < M; i++) {
//        free(matrix[i]);
//    }
//    free(matrix);
//}
//int main() {
//    int M, N;
//    printf("Enter the number of rows (M): ");
//    scanf_s("%d", &M);
//    printf("Enter the number of columns (N): ");
//    scanf_s("%d", &N);
//    int** matrix = (int**)malloc(M * sizeof(int*));
//    fillSnakeMatrix(matrix, M, N);
//    printf("Matrix filled in 'snake' pattern:\n");
//    printMatrix(matrix, M, N);
//    freeMatrix(matrix, M);
//    return 0;
//}