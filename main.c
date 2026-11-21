#include <stdio.h>
#include <string.h>

struct student{
    int id;
    char name[10];
    double grade;
};

int main(void){
    struct student s1={2514185, "Siyeon", 4.3};

    s1.id=123456;
    strcpy(s1.name,"Junyeop");
    s1.grade=4.2;

    printf("%d\n", s1.id);
    printf("%s\n", s1.name);
    printf("%f\n", s1.grade);

    return 0;
}