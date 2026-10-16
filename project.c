#include <stdio.h>

int main()
{
char name[50];
int roll;
float m1, m2, m3, total, average;

printf("Enter student name: ");
scanf(" %49[^\n]", name);

printf("Enter roll number: ");
scanf("%d", &roll);

printf("Enter marks in 3 subjects: ");
scanf("%f %f %f", &m1, &m2, &m3);

total = m1 + m2 + m3;
average = total / 3;

printf("\n--- Student Details ---\n");
printf("Name: %s\n", name);
printf("Roll Number: %d\n", roll);
printf("Total Marks: %.2f\n", total);
printf("Average Marks: %.2f\n", average);

return 0;
}

Out put :-
Enter studentname:- Amulya.s
Enter roll number:-8
Enter marks in 3 subjects:-95+92+93

Student details:-

Name:- Amulya S
Roll number:-8
Total marks:- 280
Average marks:-93.33

