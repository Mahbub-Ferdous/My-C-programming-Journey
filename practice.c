#include<stdio.h>
struct student{
	int id;
	char name[20];
	float cgpa;
};

void main(){
	struct student s;
	printf("Enter your id: \n");
	scanf("%d", &s.id);
	printf("Enter your cgpa: \n");
	scanf("%f", &s.cgpa);
	printf("Enter your Name: \n");
	scanf("%s", s.name);

	printf(" Id: %d\n Name: %s\n cgpa: %.2f\n", s.id, s.name, s.cgpa);





return 0;
}
