#include <stdlib.h>
#include <string.h>

int is_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str) {
    int count = 0;
    int is_word = 0;

    while (*str) {
        if (is_space(*str)) {
            is_word = 0;
        } else if (!is_word) {
            count++;
            is_word = 1;
        }
        str++;
    }

    return count;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = count_words(str);
    if (num_words == 0) {
        return NULL;
    }

    char **words = (char **)malloc(sizeof(char *) * (num_words + 1));
    if (words == NULL) {
        return NULL;
    }

    int word_index = 0;
    int word_length = 0;
    int is_word = 0;

    while (*str) {
        if (is_space(*str)) {
            if (is_word) {
                words[word_index] = (char *)malloc(sizeof(char) * (word_length + 1));
                if (words[word_index] == NULL) {
                    return NULL;
                }
                word_length = 0;
                word_index++;
                is_word = 0;
            }
        } else {
            word_length++;
            is_word = 1;
        }
        str++;
    }

    if (is_word) {
        words[word_index] = (char *)malloc(sizeof(char) * (word_length + 1));
        if (words[word_index] == NULL) {
            return NULL;
        }
    }

    word_index = 0;
    word_length = 0;
    is_word = 0;

    str = str - strlen(str);
    while (*str) {
        if (is_space(*str)) {
            if (is_word) {
                words[word_index][word_length] = '\0';
                word_length = 0;
                word_index++;
                is_word = 0;
            }
        } else {
            words[word_index][word_length] = *str;
            word_length++;
            is_word = 1;
        }
        str++;
    }

    words[num_words] = NULL;
    return words;
}
