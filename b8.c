#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
};

int main() {
    FILE *file;
    int n;
    struct Student s;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &s.id);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Age: ");
        scanf("%d", &s.age);
        fprintf(file, "%d %s %d\n", s.id, s.name, s.age);
    }
    fclose(file);
    printf("Luu thong tin thanh cong.\n");
    return 0;
}
