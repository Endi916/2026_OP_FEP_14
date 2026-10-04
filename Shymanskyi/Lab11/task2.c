#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define COUNT 7

struct Player {
	char lastName[50];
	char firstName[50];
	int height;
	int weight;
	int age;
	char hairColor[30];
};

int main() {

	struct Player players[COUNT];

	printf("=== Players info ===\n\n");
	for (int i = 0; i < COUNT; i++) {
		printf("--- Player #%d ---\n", i + 1);

		printf("Surname : ");
		scanf("%s", players[i].lastName);

		printf("Name : ");
		scanf("%s", players[i].firstName);

		printf("Height : ");
		scanf("%d", &players[i].height);

		printf("Weight : ");
		scanf("%d", &players[i].weight);

		printf("Age : ");
		scanf("%d", &players[i].age);

		printf("Color hair : ");
		scanf("%s", players[i].hairColor);

		printf("\n");
	}

	for (int i = 0; i < COUNT - 1; i++) {
		for (int j = 0; j < COUNT - i - 1; j++) {
			if (players[j].age < players[j + 1].age) {
				struct Player temp = players[j];
				players[j] = players[j + 1];
				players[j + 1] = temp;
			}
		}
	}

	printf("\n=== Sorted list with age ===\n");
	printf("%-3s | %-15s | %-15s | %-4s | %-4s | %-4s | %-12s\n",
		"N", "Surname", "Name", "Age", "Height", "Weight", "Color hair");
	printf("-----------------------------------------------------------------------\n");

	for (int i = 0; i < COUNT; i++) {
		printf("%-3d | %-15s | %-15s | %-4d | %-4d | %-4d | %-12s\n",
			i + 1,
			players[i].lastName,
			players[i].firstName,
			players[i].age,
			players[i].height,
			players[i].weight,
			players[i].hairColor
		);
	}


	return 0;
}