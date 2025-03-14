#include<stdio.h> 
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = (1 << (int)(log2(n) + 1)) - 1;
    printf("%d", n ^ k);
    return 0;
}
