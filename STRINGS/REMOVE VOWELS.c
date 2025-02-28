#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    scanf("%s", str);

    int len = strlen(str);
    int i = 0;
    while (i < len) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            for (int j = i; j < len - 1; j++) {
                str[j] = str[j + 1];
            }
            len--;
        } else {
            i++;
        }
    }
    str[len] = '\0'; // Ensure null-termination
    printf("%s", str);
    return 0;
}
