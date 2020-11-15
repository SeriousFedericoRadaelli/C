#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

    struct Student{
        char name[50];
        char major[50];
        int age;
        int gpa;
    };
    


int main(){
    int age;
    int gpa;
    char name[50];
    char major[50];
    struct Student student1; //utilizzo il container della struct per creare uno studente
    scanf("%d", &age);
    student1.age = age;
    scanf("%d", &gpa);
    student1.gpa = gpa;
    scanf("%s", name);
    strcpy(student1.name, name);
    scanf("%s", major);
    strcpy(student1.major, major);

    printf("età: %d \n", student1.age);
    printf("gpa: %d \n", student1.gpa);
    printf("name: %s \n", student1.name);
    printf("major: %s \n", student1.major);

     /*   struct Student student2; //utilizzo il container della struct per creare uno studente
    student1.age = 34;
    student1.gpa = 3.5;
    strcpy(student1.name, "Stronzo");
    strcpy(student1.name, "Matematica");

       printf("%f", student1.gpa);*/

        return 0;
}