
#include <stdio.h>
#include <string.h>
#include <windows.h>

#define MAX_STUDENTS 100

typedef struct {
    char name[50];
    char email[50];
    char color[30];
} Student;

int main() {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    Student group[MAX_STUDENTS];
    int count = 0;

    printf("=== Введення даних списку групи ===\n");
    printf("Скільки студентів ви хочете додати? ");
    scanf("%d", &count);
    getchar(); 

    if (count <= 0 || count > MAX_STUDENTS) {
        printf("Некоректна кількість студентів.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        printf("\n--- Студент №%d ---\n", i + 1);

        printf("Прізвище та ініціали: ");
        fgets(group[i].name, sizeof(group[i].name), stdin);
        group[i].name[strcspn(group[i].name, "\n")] = 0;

        printf("Ел. пошта: ");
        fgets(group[i].email, sizeof(group[i].email), stdin);
        group[i].email[strcspn(group[i].email, "\n")] = 0;

        printf("Улюблений колір: ");
        fgets(group[i].color, sizeof(group[i].color), stdin);
        group[i].color[strcspn(group[i].color, "\n")] = 0;
    }

    printf("\n\n");
    printf("+------+----------------------+----------------------+-------------------+\n");
    printf("| %-4s | %-20s | %-20s | %-17s |\n", "№ п/п", "Прізвище, Ініціали", "Ел. пошта", "Улюблений колір");
    printf("+------+----------------------+----------------------+-------------------+\n");

    for (int i = 0; i < count; i++) {
        printf("| %-4d | %-20s | %-20s | %-17s |\n",
               i + 1,
               group[i].name,
               group[i].email,
               group[i].color);
    }

    printf("+------+----------------------+----------------------+-------------------+\n");

    return 0;
}
