/// character below:
#include<stdio.h>
int main(){
    char my_char;   /// then ram provide a 1 bytes space for character value
    my_char = 'K';  /// why use single cautation cause we knoe character need a single cautation for read the value of char
    my_char = '9';
    printf("%C\n", my_char);  ///ans is 9 cause always print the latest code value mind it .


return 0;
}

#include<stdio.h>
int main(){
    char _1 = 'l', _2 = 'o', _3 = 'v', _4 = 'e';
    printf("%c%c%c%c", _1, _2, _3, _4);     /// the ans will be normal love
    printf("%c\t %c\t %c\t %c\t", _1,_2,_3,_4);  /// the ans will be l  o   v   e
    printf("%c\t\n %c\t\n %c\t\n %c\t\n", _1,_2,_3,_4);   /// ans will one step down and one step tab love



return 0;
}



/// Now topics about ASCII code

/// ASCII = American standard code for information interchange.

/// which means computer always understand number so every keyboard word and number and sign have binary code which called ASCII
/// example: space = 32, A = 65, a = 97 etc
/// char - code(int)

/// basic code below:

#include<stdio.h>
int main(){
    char x = 'A';
    printf("%d\n", x);



return 0;
}



#include<stdio.h>
int main(){
    int a = 65, b = 66, c = 79, d = 90;
    printf(" %c\n %c\n %c\n %c\n", a, b, c, d);   /// reverse calculation when character then we use for ASCII code %d, and when integer then we use ASCII code for %c



return 0;
}



