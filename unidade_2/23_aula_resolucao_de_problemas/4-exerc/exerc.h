typedef struct{
  char registry[20];
  char name[50];
  float p1;
  float p2;
  float p3;
} Student;

/*
 * Return the index of the student who got
 * the highest grade on p1
 *
 * @param  student List of Student
 * @return Return a int referring to the student with highest grade on p1
*/
int findHighetsGradeP1(Student student[5]) {
  int index = 0;

  for(int i = 1; i < 5; i++) {
    if(student[index].p1 > student[i].p1) {
      index = i;
    }
  }

  return index;
}

/*
 * Return the index of the student who got
 * the highest average
 * @param  student List of Student
 * @return Return a int referring to the student with highest grade on p1
*/
int findHighestAverage(Student student[5]) {
  int index = 0;
  float highestAverage = student[index].p1 +
                         student[index].p2 +
                         student[index].p3;

  for(int i = 1; i < 5; i++) {
    float studentAverage = student[i].p1 +
                           student[i].p2 +
                           student[i].p3;

    if(highestAverage < studentAverage) {
      index = i;
      highestAverage = studentAverage;
    }
  }

  return index;
}
