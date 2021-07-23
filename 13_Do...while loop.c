/* Now the topics is Between Do...while loop
now we describe about do.... while loop in firstly we introduce with for loop and while loop...
its similar like for loop and while loop */



/// The main Structure or sytex of do.. while loop given below:


#include<stdio.h>
void main(){
    initialization;                 //so amra jani for loop or while loop initialization dhore condition joto bar true hoy
    do{                             // toto bar loop ghuray then false hole loop stop hoy and statement output dey
        /// statement               /// but do...while loop age initialization dekhe ekta statement output dey then
        /// increment/decrement     /// while e eshe condition check kore true hole loop ghuray ar false hole oi 1st satement
    }while( condition );            /// our hisebe dey

return 0;
}




/// So we see the best example for the do...while loop below:

#include<stdio.h>
void main(){
    int i = 1;
    do{
        printf(" Hellow Bijoy!!! Whats Up??? \n");
        i += 1;
    }while( i <= 10);

return 0;                      /// now the ans is 10 times cause loop cholbe i er man 10 er choto or 10 er soman hole
}



/// another best do...while sytax example given below:


#include<stdio.h>
void main(){
    int i = -5;
    do{
        printf(" Kih!! Goru kena Hoise?? \n");   /// so ekhane pura condition ta false but do.. while loop er karone out 1 bar show korche...
        i--;
    }while( i >= -5);



return 0;
}




/// Problem solving 1 . Print the output like 100,95,90,85.....0???


ans is given below:

#include<stdio.h>
void main(){
    int i = 100;
    do{
        printf(" %d\n", i);
        i -= 5;
    }while( i >=0);



return 0;
}




