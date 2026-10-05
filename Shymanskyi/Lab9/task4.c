#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valid_ascii(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char c = str[i];
        if (!isalnum(c) && c != '.' && c != '-' && c != '_' && c != '@') {
            return 0; 
        }
    }
    return 1;
}


int main() {
    char email[111];
    char temp[111];

    printf("Enter a email : ");
    fgets(email, sizeof(email), stdin);

    email[strcspn(email, "\r\n")] = '\0';

    if (!is_valid_ascii(email)) {
        printf("Invalid email : contains invalid characters or cyrylycya\n");
        return 0;
    }

    strcpy(temp, email);

    int at_count = 0;
    for (int i = 0; email[i] != '\0'; i++) {
        if (email[i] == '@') {
            at_count++;
        } 
        
    }

    if (at_count != 1) {
        printf("Invalid email : must contain exactly one '@'.\n");
        return 0;
    }

    char* prefix = strtok(temp, "@");
    char* domain = strtok(NULL, "@");

    if (prefix == NULL || domain == NULL) {
        printf("Invalid email: missing prefix or domain.\n");
        return 0;
    }

    int dot_count = 0;
    int domain_len = (int)strlen(domain);

    for (int i = 0; i < domain_len; i++) {
        if (domain[i] == '.') {
            dot_count++;
        }
    }

    if (domain[0] == '.' || domain[domain_len - 1] == '.') {
        printf("Invalid email : dot cannot be at the start or end of domain.\n");
        return 0;
    }

    if (dot_count >= 1) {
        printf("Valid email! User : %s | Domain : %s\n", prefix, domain);
    }
    else {
        printf("Invalid email : domain must contain at least one dot.\n");
    }


	return 0;
}