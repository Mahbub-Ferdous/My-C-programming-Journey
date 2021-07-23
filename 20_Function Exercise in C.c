/// Now we solving some funtional problem in programming C:

  /*  write a function that simply prints a message " Hello!! i am from inside of a function "

    call this function from the main menu*/


ans given below:

#include<stdio.h>
void message(){
  printf("Hello!! i am from inside of a function\n");

}
int main(){
    message();




return 0;
}


/*  write a function that takes an interger as input and prints even if the number is divisible by 2
    other wise prints odd call this function from the main menu  */

ans given below:

#include<stdio.h>
void even_odd(int x){
    if(x % 2 == 0){
        printf("%d is an Even number\n", x);
    }else{
        printf("%d is an odd number\n", x);
    }

}
int main(){
    even_odd(10);


return 0;
}





ans given below:

/* Write a function that takes an integer as input and prints all of its divisors.
   call this function from the main function */

#include<stdio.h>
int main(){
    all_divisors(10);


return 0;
}

void all_divisors(int a){
    int i;
    for(i = 1; i<=a; i++){
        if( a%i==0){
            printf("%d\n", i);
        }
    }

}



/* Problem - 04. Suppose you are planning to make simple calculator. your calculator have 4 function add() subtract() multiply() divide()
   each of this fuction takes floating point as input and return the result after applying the corresponding operation
   scan different value from the user and test those four functions with these input */


ans given below:


#include<stdio.h>
float add(float a, float b){

    return a + b;

}
float subtract(float a, float b){

    return a - b;

}
float multiply(float a, float b){


    return a * b;

}
float divide(float a, float b){

    return a / b;

}

int main(){
    float a,b;
    printf("Enter the value of a and b: \n");
    scanf("%f%f", &a, &b);
    float add_result = add(a,b);
    float subtract_result = subtract(a,b);
    float multiply_result = multiply(a,b);
    float divide_result = divide(a,b);
    printf(" add : %.1f\n subtract : %.1f\n multiply: %.1f\n divide :%.1f\n", add_result, subtract_result, multiply_result, divide_result);



return 0;
}





