#include <stdio.h>
#include <string.h>
int main() {
    char str[20];
    scanf("%[^\n]s", str);
    int len = strlen(str);
    for(int i=0; i<len; i++) {
      if(i==0 || i==len-1) {
        str[i] = toupper(str[i]);
      }
      else if(str[i]==' ') {
        str[i-1] = toupper(str[i-1]);
        str[i+1] = toupper(str[i+1]);
      }
    }
    printf("%s", str);
    return 0;
}
