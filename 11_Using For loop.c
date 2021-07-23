/// Now the topics we discuss about loop that means "for loop" :
/// where and why we use for loop :

For example :

printf("Let me Go\n");      /// now we write one output many time but we wrote long code
printf("Let me Go\n");
printf("Let me Go\n");
printf("Let me Go\n");      /// so we use for loop basically for one output more time with short coding like using for loop
printf("Let me Go\n");
printf("Let me Go\n");
printf("Let me Go\n");
printf("Let me Go\n");
printf("Let me Go\n");


/// Now we ask whats is loop??

ans : In programming , a loop is used to repeat a block of code until the specified conditions is met.





/// The syntax/ structure of for loop given below:

#include<stdio.h>
int main(){
    for (initialization ; condition ; increment or decrement){          /// 1st one value initialize hobe then condition hobe ar condition jotokkhon true hobe se 2nd brakket er majher statement execute korte thakbe

        ///statement inside the body in loop                            /// then increment means briddhi or decrement means rash howa

    }


return 0;
}


example :

#include<stdio.h>
int main(){
    int i;
    for(i = 1; i <= 3; i++){                      /// 1st i er initializational value and i++ or amra likhte pari i += 1
        printf("Hey Bijoy Ki obostha\n");          /// 2nd condition j i er man 3 er cheye choto or soman howa porjonto print korbe
    }                                               /// last increment



return 0;
}



Another example:

#include<stdio.h>
int main(){
    int i;
    for(i = 1; i <= 10; i += 4){     /// now the increment is 4 so the result will be three time cause, i = 1 true, i = 1+4=5 true, i = 5+4 =9 true
        printf("*\n");
    }



return 0;
}

another example:

#include<stdio.h>
int main(){
    int i;
    for(i = 1; i <= 10; i++){
        printf("%d\n", i);        /// print out put we use %d so output is 1, 2, 3,, 4, 5, 6, 7, 8, 9, 10 cause print all i er value
    }
    printf("End of Loop !!!!");



return 0;
}



For bejor sonkkha from 1 to 100:

#include<stdio.h>
int main(){
    int i;
    for(i = 1; i <= 100; i+=2){    /// i er man 2 kore barale hobe
        printf("%d\n", i);
    }
    printf("End of loop!!!!");


return 0;
}

For jor sonkkha from 1 to 100:


#include<stdio.h>
int main(){
    int i;
    for(i = 2; i <= 100; i+=2){       /// i er inicial value nei 2 and then i er man  kore barai besh
        printf("%d\n", i);
    }
    printf("End of loop!!!!");


return 0;
}



/// now we the negetive for loop execution:


#include<stdio.h>
int main(){
    int i;
    for(i = 10; i>=1; i--){   /// now the result is 10 to 1 and we also write i--/--i ,  i-=1
        printf("%d\n", i);
    }



return 0;
}



another example:

#include<stdio.h>
int main(){
    int i;
    for(i = 10; i>=1; i-=2){    /// for jor sonkkha  and --i or i-- for bejor sonkkha
        printf("%d\n", i);
    }



return 0;
}


/// Now we see infinity loop :


#include<stdio.h>
int main(){
    int i;
    for(i = 1; i<=5; i--){    /// infinite loop cause 1 one kore - hole onel value ja sob e - so 5 cheye choto so always true
        printf("%d\n", i);
    }



return 0;
}


#include<stdio.h>
int main(){
    int i, sum = 0;
    for(i = 30; i<=120; i++){
        if( i % 3 == 0 && i % 5 ==0){
            sum += i;

        }

    }
    printf("Summation : %d", sum);



return 0;
}









