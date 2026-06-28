#include <stdio.h>
int main() {
    char arr[5][20] = {"Banana", "Apple", "Orange", "Mango", "Grapes"};
    char temp[20];

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            int k = 0;
            while (arr[i][k] != '\0' && arr[j][k] != '\0' && arr[i][k] == arr[j][k]) {
                k++;
            }
            if (arr[i][k] > arr[j][k]) {
                int m = 0;
                while (arr[i][m] != '\0') {
                    temp[m] = arr[i][m];
                    m++;
                }
                temp[m] = '\0';

                m = 0;
                while (arr[j][m] != '\0') {
                    arr[i][m] = arr[j][m];
                    m++;
                }
                arr[i][m] = '\0';

                m = 0;
                while (temp[m] != '\0') {
                    arr[j][m] = temp[m];
                    m++;
                }
                arr[j][m] = '\0';
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%s\n", arr[i]);
    }
    return 0;
}
