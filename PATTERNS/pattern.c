#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("Increasing Star Pattern\n");
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\nDecreasing Star Pattern\n");
    for(int i=1; i<=num; i++) {
        for(int j=i; j<=num; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\nRight Angle Triangle Pattern\n");
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=i; j++) {
            printf(" ");
        }
        for(int j=i; j<=num; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\nRight Angle Triangle Pattern\n");
    for(int i=1; i<=num; i++) {
        for(int j=i; j<=num; j++) {
            printf(" ");
        }
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\nHill Pattern\n");
    for(int i=1; i<=num; i++) {
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
    
    printf("\nReversed Hill Pattern\n");
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
    
    printf("\nDiamond Pattern\n");
    for(int i=1; i<=num-1; i++) {
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
    for(int i=1; i<=num-1; i++) {
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
    
    printf("\nHollow Increasing Pattern\n");
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=i; j++) {
            if(j==1 || i==num || i==j) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    
    printf("\nHollow Decreasing Pattern\n");
    for(int i=1; i<=num; i++) {
        for(int j=i; j<=num; j++) {
            if(i==1 || j==num || j==i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    
    printf("\nHollow Hill Pattern\n");
    for(int i=1; i<=num; i++) {
        for(int j=i; j<=num; j++) {
            printf(" ");
        }
        for(int j=1; j<i; j++) {
            if(j==1||i==num) printf("*");
            else printf(" ");
        }
        for(int j=1; j<=i; j++) {
            if(j==i || i==num) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    
    printf("\nHollow Reversed Hill Pattern\n");
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=i; j++) {
            printf(" ");
        }
        for(int j=i; j<num; j++) {
            if(i==1 || j==i) printf("*");
            else printf(" ");
        }
        for(int j=i; j<=num; j++) {
            if(i==1 || j==num)  printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    
    printf("\nHollow Diamond Pattern\n");
    for(int i=1; i<=num-1; i++) {
        for(int j=i; j<=num; j++) {
            printf(" ");
        }
        for(int j=1; j<i; j++) {
            if(j==1) printf("*");
            else printf(" ");
        }
        for(int j=1; j<=i; j++) {
            if(j==i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=i; j++) {
            printf(" ");
        }
        for(int j=i; j<num; j++) {
            if(j==i) printf("*");
            else printf(" ");
        }
        for(int j=i; j<=num; j++) {
            if(j==num) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
