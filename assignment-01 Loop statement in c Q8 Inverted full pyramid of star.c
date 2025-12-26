#include <stdio.h>
int main()
{
    int i, j, rows, s;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=rows; i>=1; i--) {

        for(s=0; s<rows-i; s++) {
            printf(" ");
        }

        for(j=1; j<=2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
