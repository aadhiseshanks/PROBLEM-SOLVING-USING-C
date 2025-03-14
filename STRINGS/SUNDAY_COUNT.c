#include <stdio.h>
#include <string.h>

int main() {
    char startDay[4];
    int n, firstSundayOffset, sundayCount = 0;
    
    scanf("%s", startDay);
    scanf("%d", &n);
    
    int dayMap[7] = {0, 1, 2, 3, 4, 5, 6};  
    int startIdx;
    
    if (strcmp(startDay, "sun") == 0) startIdx = 0;
    else if (strcmp(startDay, "mon") == 0) startIdx = 1;
    else if (strcmp(startDay, "tue") == 0) startIdx = 2;
    else if (strcmp(startDay, "wed") == 0) startIdx = 3;
    else if (strcmp(startDay, "thu") == 0) startIdx = 4;
    else if (strcmp(startDay, "fri") == 0) startIdx = 5;
    else if (strcmp(startDay, "sat") == 0) startIdx = 6;
    
    firstSundayOffset = (7 - startIdx) % 7;  
    
    
    if (firstSundayOffset < n) {
        sundayCount++;
    }
    
    
    int remainingDays = n - firstSundayOffset;
    sundayCount += remainingDays / 7;
    
    
    printf("%d\n", sundayCount);
    
    return 0;
}
