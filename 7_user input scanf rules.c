/// when you want to user input then called tag scanf("", &);
/// for integer, int a = scanf("%d", &a);
/// for character, char a = scanf("%c", &a);
/// for float, float a = scanf("%f", &a);
/// for double, double a = scanf("%lf", &a);

#include<stdio.h>
int main(){
    float a, b;
    printf("Enetr Your Password: \n");
    scanf("%f%f", &a, &b);
    printf("You enterd: %.1f and %.1f\n", a, b);




return 0;
}



/// now the task , Take 3 integer variables name a,b and c. scan the values of these three variable from user. then store the avarage of these three variables into a new float variable named average.finally print the output like the following example
/// value of a: 10
/// value of b: 20
/// value of C: 30
/// Average of a,b and c: 20.00





#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    float average = (a+b+c)/3.0;
    printf(" Value of a: %d\n", a);
    printf(" Value of b: %d\n", b);
    printf(" Value of c: %d\n", c);
    printf(" Average of a, b and c: %.2f\n", average);




return 0;
}
