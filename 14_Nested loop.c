/// Thius topics is all about to Nested loop :
/*  in the past, we know about for loop /while loop / do...while loop and
we know about if condition/ if else condition/ nested if else conditon
so we say nested loop similar like nested if else means long conditional loop   */



#include<stdio.h>
int main(){
    int i, j;
    for( i = 1; i<=5; i++){
        printf(" This Is Outer loop\n");      /// this is not gonna be a nested loop cause the two loops are not in a function
    }for( j = 2; j<=10; j+=2){
        printf(" This is inner loop\n");
    }
return 0;
}

/// Jodi ekta loop or function er moddhe onek gula loop ekta vitor arekta ghurte thake take nested loop bole
/// bahirer loop ta outer loop and vitorer loop take bole inner loop


/// example given below:

#include<stdio.h>
int main(){
    int i, j;
    for( i = 1; i<=2; i++){                       /// this outer loop
        printf(" This Is Outer loop\n");
        for( j = 1; j<=3; j++){                    /// this is inner loop
            printf(" This Is Inner Loop\n");
        }
        printf("Outer loop end \n");
    }
return 0;                                        /*bye the bye the rules of nested loop are if outer loop is true then

                                                  loop round 1st then he print his inner loop 3 times by the condition
                                                  then again outer loop round and true then inner loop print again 3 times
                                                  then again outer loop is false then stopped*/
}



/// Another Example Given below:

#include<stdio.h>
void main(){
    int i, j, k;
    for( i = 1; i<= 2; i++){
        printf("1.Ishaq Patowary\n");
        for( j = 1; j<=2; j++){
            printf("2.Hafij Mujibul Haque\n");
            for(k = 1; k<=3; k++){
                printf("3.Abdur Rahim\n");
            }
        }
        printf(" Outer Loop end\n");

    }
return 0;
}



/// Problem 1.

print this:


*
**
***
****
*****



///ans given below:


#include<stdio.h>
void main(){
    int i, j;
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}



/// Problem 2.

print this:


*****
****
***
**
*



///ans given below:


#include<stdio.h>
void main(){
    int i, j;
    for(i=5; i>=0; i--){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}


/// Now nesteed while loop for problemn 2:

#include<stdio.h>
void main(){
    int i, j;
    i=1;
    while( i<=5){
        j=i;
        while( j<=5 ){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
return 0;
}


/// nested do while loop:


#include<stdio.h>
void main(){
    int i, j;
    i =1;
    j= 3;
    do{
        do{
            printf("%d", j);
            j--;
        }while( j>0);

        printf("%d", i);
        i++;

    }while(i < 4);



return 0;
}




