#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    fprintf(file, "%s", str);
    fclose(file);
    printf("Ghi chuoi thanh cong.\n");
    return 0;
}