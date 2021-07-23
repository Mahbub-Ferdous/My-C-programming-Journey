/// There have 4 kind of operators :



1. Arithmetic Operators         /// Arithmetic Operator are 2 kinds of : 1. Unary operators: ++ , --
2. Relational Operators                                              /// 2. Binary Operators: + , - , *  , /
3. Logical Operators              /// X = Y + Z where ( +, = ) is operator and (X, Y, Z) is Operand
4. Assignment Operators


/// Now the Topics is Arithmetic Operators:

These are the operators used to perform arithmatic/mathematic operations on operands.
Example : + , - , * , / , % ,  ++ , --

/// Now the topics is Relational Operators:

Relational operators are used for comparison of the value of two operands.
Example : == , > , <, != , >= , <=

/// Now the topics is Logical Operators :

Logical Operators are used to combine two or more conditions/constraints or to complement the evaluation of the original conditions in considerationn.
The result of the operation of a logical operator is a boolean value either true or false
Example : && (Logical and.true only if all operands are true), || (logical OR, true only if either one operands is true)
         ! (Logical Not. True only if the operand is 0)

/// Now the topics is Assignment operators:

Assignment operators are use to assign value of a variable.
Example : = , += , -= , *= , /= , %=


/// C bitwise operators:

bitwise operators means all mathemethical operation will processing faster and saves power.
Example : & (Bitwise and), | (Bitwise or), ^ (Bitwise exclusive or), ~ (bitwise complement), >> (Shift Right), << (Shift Left)


/// Jodi amader math calculation e eker odhik operator ese thake tokhon amra ki korbo

Example : X = 4+3*4/2-7=4+12/2-7=4+6-7=10-7=3   /// Like chotobelar sorol ongko er moto

/// Now come to the topics precedence : precedence means calculation priority like which assignment will calculate first



/// Associativity Means Calculation begins with which side - Some time it start from Left side to right side or Right side to left side






example:

#include<stdio.h>
int main(){
    int a = 10;
    printf("Value of a: %d\n", a++);   /// ans is 10 cause 1st count a so 10
    printf("Value of a: %d\n", ++a);   /// ans is 12 cause now a = 11 so before ++ so 1 plus then 12

    int x = 20;
    printf("Value of a: %d\n", ++x);   /// ans is 21 cause before ++ so 20+1 = 21
    printf("Value of a: %d\n", x++);  /// ans is 21 cause now the value of x = 20 then ++ means 1 plus so 20+1= 21



return 0;
}

/// precedence example:


#include<stdio.h>
int main(){
    if(5 > 10 - 5 && 5){     /// so now precedence cout so - is before then > then and
        printf(" Hi Bijor\n");
    }else{
        printf(" Kire Bijoy\n");
    }


return 0;
}




/// associativity example:

#include<stdio.h>
int main(){
    if(1 == 2 != 0){      /// now the both operator are same precedence so we apply associativity
        printf(" Hi Bijor\n");
    }else{
        printf(" Kire Bijoy\n");
    }


return 0;
}



