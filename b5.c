#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char str[100];
    int n;
    printf("Nhap so dong: ");
    scanf("%d", &n);
    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Nhap dong %d: ", i + 1);
        scanf("%s", str);
        fprintf(file, "%s\n", str);
    }
    fclose(file);
    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    printf("Noi dung file:\n");
    while (fgets(str, sizeof(str), file) != NULL) {
        printf("%s", str);
    }
    fclose(file);
    return 0;
}