#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    printf("Increasing Star\n");
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\nDecreasing Star\n");
    for(int i=1; i<=num; i++) {
        for(int j=i; j<=num; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\nRight Angle Triangle\n");
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=i; j++) {
            printf(" ");
        }
        for(int j=i; j<=num; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\nHill Pattern\n");
    for(int i=1; i<=num; i++) {
        for(int j=i; j<=num; j++) {
            printf(" ");
        }
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        for(int j=1; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\nReversed Hill Pattern\n");
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=i; j++) {
            printf(" ");
        }
        for(int j=i; j<=num; j++) {
            printf("*");
        }
        for(int j=i; j<num; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\nDiamond Pattern\n");
    for(int i=1; i<num; i++) {
        for(int j=i; j<=num; j++) {
            printf(" ");
        }
        for(int j=1; j<i; j++) {
            printf("*");
        }
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=i; j++) {
            printf(" ");
       }
        for(int j=i; j<num; j++) {
            printf("*");
        }
        for(int j=i; j<=num; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\nHollow Increasing Pattern\n");
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=i; j++) {
            if(j==1 || i == num || i == j) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    
    printf("\nHollow Decreasing Pattern\n");
    for(int i=1; i<=num; i++) {
        for(int j=i; j<=num; j++) {
            if(i== 1 || j == num || i == j) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    
    printf("\nHalf Butterfly\n");
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        for(int j=i; j<num; j++) {
            printf(" ");
        }
        for(int j=i; j<num; j++) {
            printf(" ");
        }
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\nButterfly Pattern\n");
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        for(int j=i; j<num; j++) {
            printf(" ");
        }
        for(int j=i; j<num; j++) {
            printf(" ");
        }
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for(int i=1; i<=num; i++) {
        for(int j=i; j<=num; j++) {
            printf("*");
        }
        for(int j=1; j<i; j++) {
            printf(" ");
        }
        for(int j=1; j<i; j++) {
            printf(" ");
        }
        for(int j=i; j<=num; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
