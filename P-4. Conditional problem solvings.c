ans given below:





#include<stdio.h>
void main(){
    double GPA;
    printf("Enter Your SSC GPA : \n");
    scanf("%lf", &GPA);
    if( GPA == 5.00){
        printf("Your Admission : Yes \n");

    }else{
        printf("Your Admission : No \n");
    }
return 0;
}




ans given below:


#include<stdio.h>
int main(){
    double math_score;
    printf("Enter Your Math Exam Number : \n");
    scanf(" %lf", &math_score);
    if( math_score <= 32){
        printf(" Grade : 'F'\n");
    }else if( math_score <= 39){
        printf(" Grade : 'D'\n");
    }else if( math_score <= 49){
        printf(" Grade : 'C'\n");
    }else if( math_score <= 59){
        printf(" Grade : 'B'\n");
    }else if( math_score <= 69){
        printf(" Grade : 'A-'\n");
    }else if( math_score <= 79){
        printf(" Grade : 'A'\n");
    }else{
        printf(" Grade : 'A+'\n");
    }
    return 0;


}





ans given below:



#include<stdio.h>
void main(){
    double age;
    printf("Please Enter Your Age:  \n");
    scanf("%lf", &age);
    if( age >= 18){
        printf(" WOW You Can Open An Account.xD\n");
    }else{
        printf(" Your Bad!!! You Can't Open An Acoounts For Your Age!! Better Luck Nest Time \n");
    }

return 0;
}





ans given below:




#include<stdio.h>
void main(){
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    if( x % 2 == 0){
        printf("You entered an even number \n");
    }else{
        printf("You entered an odd number \n");
    }






return 0;
}





ans given below:



#include<stdio.h>
void main(){
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if( a/3 || a/5 ){
        printf("Yes\n");
    }else{
        printf("No\n");
    }


return 0;
}





ans given below:




#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter 3 Integer Number\n");
    scanf("%d%d%d", &a,&b,&c);
    if( a>b){
        printf("Max : %d\n", a);
    }else if( b>c){
        printf("Max : %d\n", b);
    }else{
        printf("Max : %d\n", c);
    }




return 0;
}





ans given below:



#include<stdio.h>
void main(){
    char ch;
    printf("Enter a small letter alphabet: \n");
    scanf("%c", &ch);
    if( ch =='a'|| ch =='e' || ch =='i'|| ch =='o'|| ch =='u'){
        printf("this is a VOWEL\n");
    }else{
        printf("this is a CONSONANT\n");
    }

return 0;
}




ans given below:



#include<stdio.h>
void main(){
int x;
  printf("Enter a number between 1 to 12: \n");
   scanf("%d", &x);
    if( x == 1){
        printf("January\n");
        }else if( x == 2){
            printf("February\n");
            }else if( x == 3){
                printf("March\n");
                }else if( x == 4){
                    printf("April\n");
                    }else if( x == 5){
                        printf("May\n");
                    }else if( x == 6){
                        printf("June\n");
                }else if( x == 7){
                    printf("July\n");
            }else if( x == 8){
                printf("August\n");
        }else if( x == 9){
            printf("September\n");
    }else if( x == 10){
        printf("October\n");
}else if( x == 11){
    printf("November\n");
}else{
    printf("December\n");
}




return 0;
}




ans given below:



#include<stdio.h>
void main(){
int a;
  printf("Enter a number : \n");
    scanf("%d", &a);
      if( a == 1){
        printf(" 2,50,000 BDT\n");
        }else if( a == 2){
            printf(" 2,10,000 BDT\n");
        }else if( a == 3){
            printf(" 1,50,000 BDT\n");
    }else if( a == 4){
        printf(" 80,000 BDT\n");
}else if(a >= 5){
  printf(" 50,000 BDT\n");

}

return 0;
}

