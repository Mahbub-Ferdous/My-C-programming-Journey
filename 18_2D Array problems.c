
/// its all depends on matrics


/// Structure and syntax:

         /* DataType Array_name[][];  */

/// 1st matrics means row count and 2nd matrics column count

///total capacity of 2d array = ( row * column )



An example Given below:


#include<stdio.h>
void main(){
    int a[2][3] = { 11,12,13,
                    21,22,23 };
    printf("%d\n", a[1][2]);                            /// the results of a[1][2] = 23 karon index 1 number row te
    int y = a[1][2] + a[0][1];                         /// a[1][2] = 23 and a[0][1] = 12 so the result of y is 35
    printf("The value Of y : %d\n", y);





return 0;
}


/// Problem 1. Take a two dimensional array of integer data size of [3*3]

/// Take the values from the user using scanf() . Now print the average of all the values ??


ans given below:

include<stdio.h>
void main(){
    int a[3][3],i,j, sum = 0;
    printf("Enter your desire integer : \n\n\n");
    for(i=0;i<3;i++){                                     /// for row loop
        for(j=0;j<3;j++){                                ///  for column loop
            scanf("%d", &a[i][j]);                       /// we take input from the customer
        }
    }
    printf("Your Out Put here : \n \n");                /// than we declared again two loop with the calculation of sum and then print them .
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", a[i][j]);
            sum += a[i][j];
        }
           printf("\n");
    }
    printf("Sum is : %d\n", sum);               /// we break down sum of all number you input here
    float avg = sum/9.0;                        /// we declared a float number for integer or fraction number
    printf("Average is : %.1f\n", avg);         /// than we print the average of the sum

return 0;
}

when,                                                       /// matrics structure for customer input will be:
     i = 0, j=0, j=1, j=2                                                  /*[0][0], [0][1], [0][2]
                                                                             [1][0], [1][1], [1][2]
                                                                             [2][0], [2][1], [2][2]*/
     i = 1, j=0, j=1, j=2
     i = 2, j=0, j=1, j=2                 /// so loop ghurannor pore ei structure e matrics loop ghurbe ar input nibe ar ei place e rakhbe






