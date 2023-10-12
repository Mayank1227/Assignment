//Floyd’s triangle alphabet pattern....
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,rows;
    printf("Enter the number of rows");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++){
        for(j=1; j<=(i*2-1); j++){
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }
    printf("\nyour pattern here!\n");
    return 0;
}
