#include <stdio.h>
#include <string.h>

struct Student {
  char school[20];
  int grade;

};

int main()
{
  struct Student student;
  strcpy(student.school, "Jejuelementary");
  student.grade  = 6;
  printf("%d grade in %s School\n", student.grade, student.school);
  scanf("%s %d", student.school, &student.grade);
  printf("%d grade in %s School\n", student.grade, student.school);
  return 0;
}
