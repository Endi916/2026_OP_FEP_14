#include <stdio.h>

size_t strLenFunc(char* text) {
	char* end = text;
	while (*end != '\0') {
		end++;
	}
	return end - text;
}


int main() {
	printf("%d", strLenFunc("hello"));

	return 0;
}