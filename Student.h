#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;
    int age;
    float grade;
} Student;

#define MAX_STR 256

Student *createStudent(char *name, int age, float grade);
void setName(Student *student, char *name);
char *getName(Student student);
void setAge(Student *student, int age);
int getAge(Student student);
void setGrade(Student * student, float grade);
float getGrade(Student student);
void disposeStudent(Student *student);
void printStudent(Student *student);
char *studentToCsv(Student student);

#endif //STUDENT_H