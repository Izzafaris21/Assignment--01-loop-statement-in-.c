#include <stdio.h>
int main()
{
    int rows, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int pascal[rows][rows];


    for(i=0; i<rows; i++) {
        for(j=0; j<=i; j++) {
            if(j==0 || j==i)
                pascal[i][j] = 1;
            else
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }

    for(i=0; i<rows; i++) {

        for(space=0; space<rows-i-1; space++) {
            printf(" ");
        }


        for(j=0; j<=i; j++) {
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}
