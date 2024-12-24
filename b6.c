#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file1, *file2;
    char str[100];
    file1 = fopen("bt01.txt", "r");
    if (file1 == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    file2 = fopen("bt06.txt", "w");
    if (file2 == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    while (fgets(str, sizeof(str), file1) != NULL) {
        fprintf(file2, "%s", str);
    }
    fclose(file1);
    fclose(file2);
    printf("Sao chep thanh cong.\n");
    return 0;
}