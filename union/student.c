#include <stdio.h>

int main() {
    struct student1 {
    char name;
    int age;
    };

    union student2 {
    char name;
    int age;
    };
    
    struct student1 std1;
    union student2 std2;
    
    std1.name='A';
    std1.age=29;
    
    std2.name='A';
    std2.age=29;
    
    printf("The name of student in structure: %c\n",std1.name);
    printf("The name of student in structure: %d\n",std1.age);
    
    std2.name='A';
    printf("The name of student in union: %c\n",std2.name);
    std2.age=29;
    printf("The name of student in union: %d\n",std2.age);

    return 0;
}
