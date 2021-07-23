/// what is condition like if else:
/// Jodi hortal hoy tahole porikkha batil
/// Jodi tumi jao tahole amio jabo
/// example below:
/// Jodi (hortal hoy){
         //porikkha batil

}
/// Jodi(Tumi jao){
        //amio jabo

}

/// if(condition){
    // if the condition is true
    // then the statement will work

}


#include<stdio.h>
int main(){
    int x = 5;
    if(x == 5){
        printf(" Value of x is 5.");

    }



return 0;
}

#include<stdio.h>
int main(){
    int x = 250;
    if(x > 25 && x < 100){     /// && means and mind it
        printf("Hello World\n");
        printf("Love you Bangladesh\n");   /// the result is false so no ans cause if we make a coondition with one or more && then all part will be true otherwise all condition will be false



    }




return 0;
}


#include<stdio.h>
int main(){
    int x = 250;
    if(x > 25 || x < 100){     /// || means 'or' mind it
        printf("Hello World\n");
        printf("Love you Bangladesh\n");   /// the result is true cause condition with '||' "or" sign, if there have or then one condition is true then full condition will be true. so the result is Hellow world and love you bangladesh







    }



return 0;
}

#include<stdio.h>
int main(){
    char my_char = 'Z';
    if(my_char == 'Z'){     ///
        printf("Hello World\n");
        printf("Love you Bangladesh\n");   /// now try it on float/ double/ long int/ long long int/ unsigned char etc






    }



return 0;
}



/// now we try else condition see below:

#include<stdio.h>
int main(){
    int x = 5;
    if(x > 10){
        printf("Valo bashina bangladesh\n");  /// if condition then 3rd brakket for if condition printing

    }else{
        printf("Valo Bashi Bangladesh\n");   /// then else condition again 3rd brakket for judge else condition to print
    }







return 0;
}

#include<stdio.h>
int main(){
    int ticket_price = 500;
    if(ticket_price < 500){
        printf("i will go to theatre\n");
    }else{
        printf("i dont go to theatre\n");   /// now the ans is else condition cause ticket_price not less then 500
    }





return 0;
}
#include<stdio.h>
int main(){
    int ticket_price = 500;
    if(ticket_price <= 500){
        printf("i will go to theatre\n");
    }else{
        printf("i dont go to theatre\n");   /// now the ans is if condition cause ticket_price  less then or equal 500
    }





return 0;
}

#include<stdio.h>
int main(){
    int a;
    printf(" Enter the value of a: \n");
    scanf("%d", &a);       /// now we solve a%3|| a%5
    if(a % 3 == 0 || a % 5 == 0){
        printf("The number is divisible\n");
    }else{
        printf("The Number is not divisible\n");    /// we can use '&&' "and" then the condition both will be true otherwise the ans willbe false
    }


return 0;
}

/// Now Problem Solving Part:

/// Problem 1. Write a program which will take a positive integer as input from the user and print whether the integer is 'Even' or 'Odd


/// Ans given below:

#include<stdio.h>
int main(){
    int x;
    printf("Enter your Integer number\n");
    scanf("%d", &x);
    if(x % 2 == 0){
        printf("Hurrah It is a Even Number\n");    /// even or odd means jor ba bejor so we can use modulus = 0 cause there have no obosistho number
    }else{
        printf("Your Bad!! Thats an Odd number\n");
    }


return 0;
}


/// problem 2. Write a program which will take a small letter alphabet as input from the user and print whether the alphabet is Vowel or Consonent .


/// the ans is belowL:

#include<stdio.h>
int main(){
    char Small_alphabet;
    printf("Enter The Small letter Alphabet Please Dear!!\n");
    scanf("%c", &Small_alphabet);
    if(Small_alphabet == 'a' || Small_alphabet=='e'|| Small_alphabet =='i'|| Small_alphabet=='o'||Small_alphabet=='u'){
        printf(" Oh Yeah!! that a Vowel\n");
    }else{
        printf("You Are right that a consonent\n");
    }


return 0;
}
