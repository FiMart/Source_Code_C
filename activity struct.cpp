#include <stdio.h>
#include<string.h>
struct Employee {
    char name [20];
    unsigned int age;
    int salary;
    char gender;
}manager;

int main(){
    strcpy(manager.name, "Elon Musk");
    manager.age = 49;
    manager.salary = 999999;
    manager.gender = 'M';

printf("manager's name : %s\n", manager.name);
printf("manager's age : %u\n", manager.age);
printf("manager's salary : %d\n", manager.salary);
printf("manager's gender : %c", manager.gender);
return 0;    
}
