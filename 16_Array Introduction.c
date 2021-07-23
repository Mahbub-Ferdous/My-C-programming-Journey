/// Now we talk about Array Introductions:


/*  Ek type er ba ek dhoroner onek gula data sariboddho vabe sajiye rakhar jonno amra array bebohar kori*/


/// Array declaration similar like variable declaration:

/// structure, syntax:


          /*  datatype Array_name[ Array_size ];*/

/// Array always 0 indexed like int x[3] = x[0],x[1],x[2],

/// Array Always Start with 0 Array size

/// Array every cells work independently like variable



an example given below:


 #include<stdio.h>
void main(){
    int a[3];      /// we declared a array which size is 3 so memory create a 3 free spaches for value
    a[0]=50;       /// we asssign all Array size
    a[1]=100;
    a[2]=200;
    int x = a[0]+a[2]-a[1];
    printf("%d", x);                /// the result will be 150

return 0;
}




another example given below:

#include<stdio.h>
void main(){
    int a[5]={5,12,16,26,35};               /// we write a array value like this
    printf("Value of index 0 : %d\n", a[0]);
    printf("Value of index 2 : %d\n", a[2]);
    printf("Value of index 4 : %d\n", a[4]);    /// we get the value of index number in a an array like this
    printf("Value of index 1 : %d\n", a[1]);
    printf("Value of index 3 : %d\n", a[3]);


return 0;
}



/// this is the arrays index value by using loops:



#include<stdio.h>
void main(){
    int a[5]={5,12,16,26,35};              /// loop ghuriye index value ber korar way
    int i;
    for( i = 0; i < 5; i++){
        printf("%d\n", a[i]);
    }


return 0;
}



/// input values and then print them by using loop:


#include<stdio.h>
void main(){
    int a[5];


    int i;


    for( i = 0; i < 5; i++){
        scanf("%d", &a[i]);


    }for( i = 0; i < 5; i++){
        printf("%d\n", a[i]);

    }


return 0;
}



ans given below:

#include<stdio.h>
void main(){
    int a[10];
    int sum = 0;
    int i;
    for( i = 0; i<10; i++){      /// customar input neya and then segula print kora
        scanf("%d", &a[i]);
    }for( i = 0; i<10; i++){
        sum +=a[i];
    }
    printf("The summation Of Arra : %d\n", sum);




return 0;
}




max number finding from array:


#include<stdio.h>
void main(){
    int a[7]= { -99,45,100,37,89,-327,245 };
    int max = a[0];
    int i;
    for( i = 1; i<7;i++){
        if(a[i]> max){               /// max number find kora array theke
            max = a[i];
        }

    }
    printf("Max value is : %d\n", max);


return 0;
}




another example given below:


#include<stdio.h>
void main(){
    int A[5];
    int B[5];
    int AB[5];
    int i;
    for( i=0; i<5;i++){
        scanf("%d", &A[i]);
    }for( i=0; i<5;i++){
        scanf("%d", &B[i]);
    }for( i = 0; i<5; i++){
        AB[i]=A[i]+B[i];
    }for( i=0; i<5;i++){
        printf("value Of AB Array: %d\n", AB[i]);
    }


return 0;
}



