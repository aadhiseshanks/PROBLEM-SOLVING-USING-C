#include <stdio.h>
#include <string.h>
int main() {
    char str[20];
    scanf("%[^\n]s", str);
    int freq[256] = {0};
    int len = strlen(str);
    for(int i=0; str[i]!='\0'; i++) {
        freq[str[i]]++;
    }
    for(int i=0; i<256; i++) {
      if(freq[i] != 0) {
        printf("%c - %d\n", i, freq[i]);
      }
    }
    return 0;
}
