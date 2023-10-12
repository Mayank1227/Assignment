#include <stdio.h>
 
/*structure declaration*/
struct employee{
    char    name[30];
    int     address;
    float   aeg;
};
 
int main()
{
    struct employee emp;
     
    printf("\nEnter details :\n");
    printf("Name ?:");               gets(emp.name);
    printf("address?:");            scanf("%d",&emp.address);
    printf("aeg ?:");               scanf("%f",&emp.aeg);*/
     
    
    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("address: %d"     ,emp.address);
    printf("aeg: %f\n",emp.aeg);
    return 0;
}

