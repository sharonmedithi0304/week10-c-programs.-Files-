#include<stdio.h>
struct Employee {
	char name[20];
	int ID;
	float salary;
   };
int main () {
    struct Employee e;
    printf(" Enter the details of employee \n");
    scanf("%s %d %f",e.name,&e.ID,&e.salary);
    
    printf("\nThe employeee details are: \n");
    printf("Name : %s\nID : %d\nSalary : %.2f\n",e.name,e.ID,e.salary);
    
    return 0;
}
