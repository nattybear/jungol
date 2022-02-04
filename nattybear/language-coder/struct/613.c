#include <stdio.h>

struct Student {
  char name[20];
  char school[20];
  int grade;
};

int main()
{
  struct Student student;
  scanf("%s %s %i", student.name, student.school, &student.grade);
  printf("Name : %s\n", student.name);
  printf("School : %s\n", student.school);
  printf("Grade : %i\n", student.grade);
  return 0;
}
