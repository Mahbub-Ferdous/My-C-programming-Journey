/// Now the topics about using function in C programming :


/// what is function and why we need this??

ans : function is a declaretion about full methology [ mane ek kaj bar bar na korar jonno jemon
amra loop use kori serokom ekta full procces like coffee maker ba oil packaging ei full kaj ta ekta
function er moddhe diye dei then bar bar dorkar hole seta deke ani ar etar full concept tai function ja khub sohoj o efficient
kore programming k]


/// kivabe amra function cinbo ba define korbo??



ans : function taha ke bole jar ekta nirdhristo nam ache and se kichu input ney ebong sei moto seta output dey

1. Every function have a name
2. Every function get some Input/ parameters
3. Every function returns data types
4. Every function have function body



/// now we see the syntax of a function:


/*       return data_types func_name( input1, input2,....input n ){
                     // your calculation
                     // your other stuffs
         return results;
         }    */


For example:

int get_sum(int x, int y){     /// 1st we take return data type int cause int + int = int *** then we take a function name which called get_sum for we need the summation
    int sum = int x + int y;   /// then we given our statement

    return sum;                /// then we return the result which is sum


}             /// the biggest example of function syntax is similar to C programming syntax



/// jodi kon fuction er parameter ba input na thake and kono return data type na thake sudhu take call korle kichu  print korbe emon function kmne likhbo??/

ans:  so we command you to write a fuction which name is say_hi and there have no input or parameters and this function dont return anything only print Hi


so we write,

            void say_hi(){               /// void cause no return data types and 1st bracket null cause there have no parameter or input
                printf("hi");            /// our statement
                                         /// No return value so we cant calleed return keyword
            }



/// main fuction chara compiler c language read korte pare na so amra baire function create kore then main function e call korte chgaile:


ans : function_name();          /// for void function

but when function e parameter ba input thake and setar return data type thake and seta ekta results through kore
than amra tar return data type wise sei eki datatype call kore arekta name diye void function er moto call korbo sathe parameter ba input
er man diye then print korbo like:

/* if function return int/float/char/double

                  int newdata_name = function_name( parameter_value1, parameter_value2.....parameter_value n )
                  printf("%d\n", newdata_name);*/



foe example:

#include<stdio.h>
void say_hi(){
    printf("Hi\n");

}

int get_sum(int x, int y){

    int sum = int x + int y;

    return sum;

}

int main(){

    printf("This is our main Function output\n");
    say_hi();
    int result = get_sum(4500,5500);
    printf("%d\n", result);



return 0;
}


/// there are two types of function :

                     1.Standard library fuctions.
                     2.User-Defined fuctions     .


/// 1. Standard library function : the printf() function is a standard funtion which is defined in the <stdio.h> . if we need to use printf()
/// function we must add header file which is #include<stdio.h>. on the other hand sqrt() means calculate the square root of a number..
/// in this function we must add our header file which is #include<math.h>
/// 2. user - defined function : user defined function means when we make and call a funtion like return_type function_name(parameter1 or input 1, ....parameter n or input n)
