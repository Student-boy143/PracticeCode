#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Student.txt","w");

    char name [100];
    int age;
    float cgpa;

    printf("Enter your name : ");
    scanf("%s",name);
    
    printf("Enter your age : ");
    scanf("%d",&age);
    
    printf("Enter your cgpa : ");
    scanf("%f",&cgpa);

    fprintf(fptr," student name : %s\t",name);
    fprintf(fptr," student age : %s\t",age);
    fprintf(fptr," student cgpa : %s\t",cgpa);

    fclose(fptr);
    return 0;
}