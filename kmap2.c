#include <stdio.h>

#define SIZE 8

int arr[SIZE];
int input[SIZE];
int size = 0;
int quad = 0;
int quad5 = 0, quad6 = 0;

void storing(int input[], int size) {
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 0; 
    }
    for (int j = 0; j < size; j++) {
        if (input[j] >= 0 && input[j] < SIZE) {
            arr[input[j]] = 1; 
        }
    }
}

void display() {
    for (int i = 0; i < SIZE; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

int quadandoctet(int arr[]) {
    int quad1 = 0, quad2 = 0, quad3 = 0, quad4 = 0;
    int quad5 = 0, quad6 = 0;
    
    // Checking for horizontal quads
    for (int row = 0; row < 2; row++) {
        int count1 = 0;
        for (int col = 0; col < 4; col++) {
            if (arr[row * 4 + col] == 1) {
                count1++;
                if (count1 == 4) {
                    quad++;
                    count1 = 0; 
                }
            } else {
                count1 = 0; 
            }
        }
    }

    // Checking for vertical quads
    for (int col = 0; col < 4; col++) {
        int count2 = 0;
        for (int row = 0; row < 2; row++) {
            if (arr[row * 4 + col] == 1) {
                count2++;
                if (count2 == 4) {
                    quad++;
                    count2 = 0; // 
                }
            } else {
                count2 = 0; 
            }
        }
    }

    // Checking for 2x2 quads
    for (int k = 1; k <= 2; k++) {
        if (arr[SIZE - k] == 1 && arr[4 - k] == 1) {
            quad5++;
            if (quad5 == 2) {
                quad++;
                quad5 = 0; 
            }
        }
        if (arr[k - 1] == 1 && arr[4 + (k - 1)] == 1) {
            quad6++;
            if (quad6 == 2) {
                quad++;
                quad6 = 0; 
            }
        }
    }

    printf("quad1 :%d\t", quad1);
    printf("quad2 :%d\t", quad2);
    printf("quad3 :%d\t", quad3);
    printf("quad4 :%d\t", quad4);
    printf("quad5 :%d\t", quad5);
    printf("quad6 :%d\t", quad6);

    return quad;
}

int main() {
    char l;
    printf("Enter the values of the input array, press 'n' to start:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("To terminate input press 'y':\n");
        scanf(" %c", &l); 
        if (l == 'y') {
            break;
        } else {
            printf("Enter input %d:\n", i);
            scanf("%d", &input[i]);
            size++;
        }
    }

    storing(input, size);
    display();

    int q = quadandoctet(arr);
    if (q < 6) {
        printf("\nNumber of quads: %d\n", q);
    } else {
        printf("Number of octets: 1\n");
    }
    printf("Total quads: %d\n", quad);

    return 0;
}

