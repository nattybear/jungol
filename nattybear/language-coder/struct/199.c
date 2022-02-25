#include <stdio.h>
#include <stdlib.h>

typedef struct student {
  char name[20];
  int scores[3];
  int sum;
} student;

int compare(const void *x, const void *y)
{
  return ((student*)y)->sum - ((student*)x)->sum;
}

int sum(int xs[], int n)
{
  int s = 0;
  for (int i = 0; i < n; i++)
    s += xs[i];
  return s;
}

void input(student *s)
{
  scanf("%s %i %i %i", s->name,
                       &s->scores[0],
                       &s->scores[1],
                       &s->scores[2]);
  s->sum = sum(s->scores, 3);
}

void print(student *s)
{
  printf("%s %i %i %i %i\n", s->name,
                             s->scores[0],
                             s->scores[1],
                             s->scores[2],
                             s->sum);
}

int main()
{
  int n;
  scanf("%i", &n);
  student *students = malloc(sizeof(student)* n);
  for (int i = 0; i < n; i++)
    input(&students[i]);
  qsort(students, n, sizeof(student), compare);
  for (int i = 0; i < n; i++)
    print(&students[i]);
}
