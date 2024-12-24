#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char str[100];
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    fgets(str, sizeof(str), file);
    fclose(file);
    printf("Ky tu dau tien trong file: %c\n", str[0]);
    return 0;
}
