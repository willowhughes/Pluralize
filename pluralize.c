//send to cofflaj@wwu.edu
#include <stdio.h>
#include <string.h>

int ends_with(char* str1, char* str2);

int main() {
    int num = 0;
    int i = 0;
    char word[50];
    printf("Enter a number: \n");
    scanf("%d",  &num);
    getchar();

    printf("Enter word: \n");
    fgets(word, sizeof word, stdin);
    size_t word_len = strlen(word);
    word[word_len-1] = '\0';

    if (num != 1) {
        if (ends_with(word, "y")) {
            word[word_len-2] = 'i';
            word[word_len-1] = 'e';
            word[word_len] = 's';
            word[word_len+1] = '\0';
        } else if (ends_with(word, "us")) {
            word[word_len-3] = 'i';
            word[word_len-2] = '\0';
        } else if (ends_with(word, "ch")) {
            word[word_len-1] = 'e';
            word[word_len] = 's';
            word[word_len+1] = '\0';
        } else if (ends_with(word, "sh")) {
            word[word_len-1] = 'e';
            word[word_len] = 's';
            word[word_len+1] = '\0';
        } else if (ends_with(word, "ife")) {
            word[word_len-3] = 'v';
            word[word_len-2] = 'e';
            word[word_len-1] = 's';
            word[word_len] = '\0';
        } else {
            word[word_len] = 's';
            word[word_len+1] = '\0';
        }
    }

    printf("%d %s\n", num, word);
    
}

int ends_with(char* str1, char* str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    if (len2 >  len1) {
        return 0;
    }

    return strncmp(str1 + len1 - len2, str2, len2) == 0;
}