/// data type and variable means cholok - jar man poriborton shil
/// data type:   1. Character    -  means all kinds of keyboard word, number or sign     -  keyword: char   - bytes: - 1, range: -128 to 127
/// placeholder: %c
///Integer: means natural number ,   keyword: int,  bytes: 2 or 4,  placeholder: %d,  range: -32768 to 32767, -2147483648 to 2147483647
/// Float: means fraction number,   keyword : float,   bytes: 4, range: 1.2e-38 to 3.4e+38, placeholder: %f
/// Double : means big size fraction ,   keyword: double,   bytes: 8,   range:  2.3e-308 to 1.7e+308 ,   placeholder: %lf


/// some extra data types and variable:

/// 1. Data type - Unsigned Charecter,  keyword - unsigned char,  size in bytes - 1, range - 0 to 255, placeholder  - %c
/// 2. Data type - Unsigned Integer,    keyword - Unsigned int,   size in bytes - 2 or 4, range - o to 65535, 0 to 4294967295, placeholder - %u
/// 3. Data type - Long integer  ,      keyword - long int     ,  size of bytes - 4,   range - -2147483648 to 2147483647, placeholder - %ld
/// 4. Data type - Long long integer,   keyword - long long int,  size of bytes - 8,  range - (2^63) to (2^63-1),  placeholder - %lld


/// 1 Bytes = 8 bit ...... example: 2^8 = 256,
/// 2 Bytes = 16 bit ...... example :  2^16 =65536


/// Data type : variable_name:
#include<stdio.h>
int main(){


    int x;
    float y;
    char bijoy;
    double z;

    printf("my salary is %d taka\n", 20000);  // my salary is 20000 taka
    printf("%d + %d = %d\n", 10,5,15);  // output 10 + 5 = 15

    printf("the hash character is %c\n", '#');  // output the hash character is #

    printf("my height: %.1f feet and weight: %d kg\n", 5.8, 63);  // output will be - my height: 5.8 feet and weight: 63 kg

return 0;
}


#include<stdio.h>
int main(){

    int x;
    int y;
    x = 10;
    y = 20;
    printf("%d\n", x*y);




return 0;
}





