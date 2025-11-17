#include "Student.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX_STR 256


// CREATE STUDENT Crea un nuovo studente
Student *createStudent(char *name, int age, float grade) {
    Student *student = (Student *)malloc(sizeof(Student));
    if (student == NULL) {
        printf("Errore: impossibile allocare memoria per lo studente.\n");
        exit(1);
    }

    student->name = (char *)malloc(strlen(name) + 1);
    if (student->name == NULL) {
        printf("Errore: impossibile allocare memoria per il nome.\n");
        free(student);
        exit(1);
    }

    strcpy(student->name, name);
    student->age = age;
    student->grade = grade;

    return student;
}



// SET NAME Imposta un nuovo nome
void setName(Student *student, char *name) {
    if (student->name != NULL)
        free(student->name);

    student->name = (char *)malloc(strlen(name) + 1);
    if (student->name == NULL) {
        printf("Errore: impossibile allocare memoria per il nome.\n");
        exit(1);
    }

    strcpy(student->name, name);
}

// GETNAME Restituisce il nome (non modificabile)
char *getName(Student student) {
    return student.name;
}



// SET AGE Imposta l'età
void setAge(Student *student, int age) {
    student->age = age;
}

// GET AGE Restituisce l'età
int getAge(Student student) {
    return student.age;
}



// SET GRADE Imposta il voto
void setGrade(Student *student, float grade) {
    student->grade = grade;
}

// GETGRADE Restituisce il voto
float getGrade(Student student) {
    return student.grade;
}



// DISPOSESTUDENT Libera la memoria dello studente
void disposeStudent(Student *student) {
    if (student->name != NULL)
        free(student->name);
    free(student);
}



// PRINTSTUDENT Stampa le informazioni dello studente
void printStudent(Student *student) {
    printf("Nome: %s\n", student->name);
    printf("Età: %d\n", student->age);
    printf("Voto: %.2f\n", student->grade);
}