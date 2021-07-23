/// float = single precision floating point number which is 4 byte
/// double = double precision floating point number which is 8 byte

/// now we see how to solve bytes details by using c coding below;

#include<stdio.h>
int main(){
    printf("the float size is: %d\n", sizeof(float));
    printf("the double size is: %d\n", sizeof(double));


return 0;
}

/// the operation between float data type and double data type:


#include<stdio.h>
int main(){
    float a;
    float b;
    a = 5.5;
    b = 3.3;
    printf("the result between a and b: %f\n", a/b); // the result is 1.666667. if anyone want to result 1.67 or 1.667 the the program is below:
    printf(" result: %.2f\n", a/b);  // result is 1.67
    printf(" result: %.3f\n", a/b);  /// the result is 1.667 like you joint %.4f the the results will 1.6667


return 0;
}

/// the result is 1.0000000 cause integer/integer result always natural number

#include<stdio.h>
int main(){
    float a;
    a = 4/3;
    printf(" result: %f\n", a);  /// the result is 1.0000000 cause integer/integer result always natural number



return 0;
}


/// now how can we get real fraction number see below:

#include<stdio.h>
int main(){
    float a;
    a = 4.0/3;
    printf(" result: %f\n", a);  /// now the result is 1.333333 cause now 4 is fraction number.



return 0;
}




/// now the topics about double data types or number see below:

#include<stdio.h>
int main(){
    double x, y, z;
    x = 10;
    y = 15;
    z = 30;
    printf(" production: %lf\n", x*y*z);  /// now the result is 4500.000000 cause it is double
    printf(" production: %lf\n", x*y/z);  /// now the result is 5.000000
    printf(" production: %.1lf\n", x*y/z); /// now the result is 5.0 thats it if it is %.2lf or %.3lf then result will be 5.00 and 5.000



return 0;
}

