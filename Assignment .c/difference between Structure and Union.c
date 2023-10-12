 //WAP to show difference between Structure and Union....
 
 /*Structures in C is a user-defined data type available in C that allows to combining of data items of different kinds. Structures are used to represent a record. 

Defining a structure: To define a structure, you must use the struct statement. The struct statement defines a new data type, with more than or equal to one member. The format of the struct statement is as follows:

   struct [structure name]
   {
       member definition;
       member definition;
       ...
       member definition;
   };

Defining a Union: To define a union, you must use the union statement in the same way as you did while defining a structure. The union statement defines a new data type with more than one member for your program. The format of the union statement is as follows: 


    union [union name]
    {
       member definition;
       member definition;
       ...
       member definition;
    };
    */
#include <stdio.h>
union unionJob
{
   //defining a union
   char name[32];
   float salary;
   int workerNo;
} uJob;

 struct structJob
{
   char name[32];
   float salary;
   int workerNo;
} sJob;

 int main()
{
   printf("size of union = %d bytes", sizeof(uJob));
   printf("\nsize of structure = %d bytes", sizeof(sJob));
   return 0;
} 
