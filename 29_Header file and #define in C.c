/// Now the tpics is all c programming header and #define :


/*  how can we apply a header file and how can we defien #define*/

jodi amra real life niye cinta kori and ami ekta company te job pelam jara c programming diye ekta university management system develop 
korteche. ekhon amra jodi cgpa, faculty ,student information sob e jodi ek header file diye likhi seta khub efficient na.this is no a good way. so amak koyekta header file khule kaj kortehobe , ekek file ekek kaj korte hobe jemon : ekta file e cgpa jabe, ekta file  e teacher er gula jabe , ekta file faculty member der jabe. jokhn amra large ekta project kori tokhn amader ek file e hoy tai amader onno header file 
e kaj kore seta main file call kori ar ei concept tai holo C programming header file.



another example: jodi amra 4 ta versityr jonno management software banai tahole amra ki eki code sob versityr jonno alada alada kore same code likhbona... so amra cgpa er jonno ekta header file create korbo, abar faculty r jonno arek file korbo ... jokhn jhei university r jei file lagbe seta #define diye main file e niye asbe...



/// defination of header file  in c:

A header file is a file with extension.h which contains C function declaration and macro definitioin to be shared between several source files. there are two types of header file : one is the file that the programmer writes and another is thatr comes with your compiler.


/// header file giulo .c diye save na kore .h extension diye save korte hobe

/// total kotha hocche common ba constant kichu value ba function amra .h header file e save kore rakhbo then main .c file sob gula call korbe use korbo


/// structure of header file which is make by programmer:

         #include"My_Header_File.h"         /// obossoi header file name.h er modde double cautation dite hobe i mean ("")

///  So now start with code practice: 



1. first of all create a header file with .h extension not .c extension

        **** my_header_file.h****
      
ei file e amra ekta void function rakhlam 

void add(int a, int b){
	int x = a + b;
	printf("Sum: %d + %d = %d\n", a, b, x);
}


then amra main.c file nilam and sekhane syntax pura likhlam then #include"my_header_file.h" eta call korlam just #include<stdio.h>
er niche then main function e function call kore run dilei amra resilt peye jabo like given below:

#include<stdio.h>
#include "my_header_file.h"
int main(){
	add(50, 100);               /// the result will be = 50+100=150

return 0;
}


/// amara constant ba bar bar use kora variable gula #define diye define kore rakhte parbo then amra segulao use kora jabe 


jemon header file e amra duita bar bar use kora variable #define kore rakhbo then amara seta main.c te call kore print korbo:

prothome #define diye variavble declare kori :

#define number 10
#define name "Mahbub Ferdous Bijoy"


void add(int a, int b){
	int x = a + b;
	printf("Sum: %d + %d = %d\n", a, b, x);


}


then call this on main.c :


#include<stdio.h>
#include "my_header_file.h"
int main(){
	add(50, 100);                              /// 50 + 100 = 150
	printf("number : %d\n", number);           /// number: 10
	printf("name : %s\n", name);               /// name: Mahbub Ferdous Bijoy 
return 0;
}
