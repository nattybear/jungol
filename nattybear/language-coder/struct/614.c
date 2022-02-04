#include <stdio.h>
#include <string.h>

typedef struct Student {
  char school[20];
  int grade;
} Student;

void print(Student s)
{
  printf("%i grade in %s School\n", s.grade, s.school);
}

int main()
{
  Student s1;
  Student s2;

  strcpy(s1.school, "Jejuelementary");
  s1.grade = 6;

  scanf("%s %i", s2.school, &s2.grade);

  print(s1);
  print(s2);
}
