/// Switch case and break methoid like if else  method:

/// Structure:

switch(n)    /// where 'n' is constant value type
    case case_1:
        /// Code to execute if n == case_1
    break;
    case case_2:
        /// code to execute if n == case_2
    break;
    case case_3:
        /// code to execute if n == case_3
    break;
    case case_n:
        /// code to execute if n == case_n
    break;
    default:
        ///default if no case mathes


/// Now the examp[le below:


#include<stdio.h>
int main(){
    int x = 4;
    switch(x){
    case 1:
        printf("Value is : 1\n");
        break;
    case 3:
        printf("Value is : 3\n");
        break;
    case 4:
        printf("Value is : 4\n");
        break;
    default:
        printf(" Value is : unkown\n");


    }
return 0;
}



/// example with character:

#include<stdio.h>
int main(){
    char x = 'a';
    switch(x){
    case 'b':
        printf("Value is : b\n");
        break;
    case 'c':
        printf("Value is : c\n");
        break;
    case 'a':
        printf("Value is : a\n");
        break;
    default:
        printf(" Value is : unkown\n");


    }
return 0;
}



///
