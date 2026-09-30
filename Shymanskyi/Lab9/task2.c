#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse_string(char* str) {
    int start = 0;
    int end = (int)strlen(str) - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char buff[111];
    char* words[67];
    const char* delim = " \n\t,.-!?";

    printf("Enter a string : ");
    fgets(buff, sizeof(buff), stdin);

    char* token = strtok(buff, delim);

    int word_count = 0;

    while (token != NULL) {
        words[word_count] = token;
        word_count++;
        token = strtok(NULL, delim);
    }
   
    for (int i = 0; i < word_count; i++) {
        reverse_string(words[i]);
        printf("Word [%d]: %s\n", i, words[i]);
    }

	return 0;
}