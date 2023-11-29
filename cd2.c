#include <stdio.h>
#include <string.h>
int isComment(const char *line) {
    int i = 0;
    while (line[i] == ' ' || line[i] == '\t') {
        i++;
    }
    if (line[i] == '/' && line[i + 1] == '/') {
        return 1;
    }
    if (line[i] == '/' && line[i + 1] == '*') {
        return 1;
    }

    return 0;
}

int main() {
    char line[100];

    printf("Enter a line: ");
    fgets(line, sizeof(line), stdin);
    if (line[strlen(line) - 1] == '\n') {
        line[strlen(line) - 1] = '\0';
    }

    if (isComment(line)) {
        printf("The given line is a comment.\n");
    } else {
        printf("The given line is not a comment.\n");
    }

    return 0;
}

