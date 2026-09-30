#include <stdio.h>
#include <string.h>
#include <ctype.h>

void vowconChecker() {
	char sentence[100];
	printf("Enter your sentence : ");
	fgets(sentence, sizeof(sentence), stdin);
	sentence[strcspn(sentence, "\n")] = '\0';
	size_t length = strlen(sentence);
	printf("%d\n", length);
	int counter_vow = 0, counter_con = 0;
	for (size_t i = 0; i < length; i++)
	{
		char c = tolower(sentence[i]);
		switch (c)
		{
		case 'a':
		case 'o':
		case 'u':
		case 'e':
		case 'y':
		case 'i':
			counter_vow++;
			break;
		default:
			if (c >= 'a' && c <= 'z') {
				counter_con++;
			}
			break;
		}
	}
	printf("Vowels : %d\n", counter_vow);
	printf("Consonants : %d\n", counter_con);
}

int main(void){
	// task 1
	vowconChecker();


	return 0;
}
