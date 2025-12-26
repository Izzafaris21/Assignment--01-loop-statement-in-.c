#include <stdio.h>
int main()
{
    int rows, i, j, p, num;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++) {

        for(p=1; p<=rows-i; p++) {
            printf(" ");
        }


        for(j=i; j<=2*i-1; j++) {
            printf("%d", j);
        }


        for(j=2*i-2; j>=i; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
