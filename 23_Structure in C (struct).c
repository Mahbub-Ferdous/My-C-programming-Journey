/// Now the topics is structure :


onek gula moulik podartho niye jemon ekta jougik podartho hoy thik temon onek gula data type variable niye ekta
structure toiri hoy

/// jokhn onek gula data eksathe niye object akare kaj korte hoy, tokhn amra structure use kori

structure er keyword holo struct

ar syntax holo :

struct Book{

    int isbn_number;     /// we take an integer data type which define serial number of book
    char book_title;     /// we take a character data type which is define book title
    char author_name;    /// we take another character data type which is define the author name of the book
    float book_price;    /// we take a floating number data type which is define the price of book

};



******** So amra boltei pari structure ekta jougik,custom,complex,compound data type ********



structure variable kivabe likhbo :

1. struct student{
        int id;
        char name[20];


}s1,s2;             /// we write it this type like 3 bracket end then parameter or variable start


2. struct student{
        int id;
        char name[20];


};

int main(){
    struct student s1,s2;             /// amra evabe o likhtee pari main funtion er moddhe struct call kore then included parameter

return 0;
}


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

