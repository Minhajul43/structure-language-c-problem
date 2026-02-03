#include<stdio.h>
float calculateGP(float mark);
struct GPofSubject{
  float Math;
  float Physics;
  float SPL;
  float ECA;
};
struct STUDENT{
  int id;
  char name[100];
  struct GPofSubject GPofAllSubject;
  float CGPA;
};
