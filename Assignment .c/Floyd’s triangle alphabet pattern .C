//Floyd’s triangle alphabet pattern....
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,rows;
    char alphabet='A';
    printf("Enter number of rows to pattern: ");
    scanf("%d",&rows);
    printf("\n");
    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
          printf("%c",alphabet++);
        }
        printf("\n");
    }
    printf("\nHere, your pattern is printed");

    return 0;
}
