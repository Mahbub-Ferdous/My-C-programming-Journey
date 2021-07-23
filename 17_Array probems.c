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




another example :

#include<stdio.h>
void main(){
    int a[5], i , even_sum = 0, Odd_sum = 0;
    for( i = 0; i<5; i++){
        printf(" Please Enter Integer Array\n");
        scanf("%d", &a[i]);
    }printf("Value Of The array : ");
    for( i = 0; i<5; i++){
        printf("%d,", a[i]);
        if( a[i]%2==0)
            even_sum += a[i];
        else
            Odd_sum += a[i];

    }
    printf("\n Sum of odd values : %d", Odd_sum);
    printf("\n Sum of even values : %d", even_sum);


return 0;
}
