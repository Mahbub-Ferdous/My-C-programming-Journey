/// now we talk about #include<string.h> this header

/// amra jani ekta header file er moddhe onek gula build in function thake kintu amra main 4 ta function niye kaj korbo

/// ja sob jaygay lage:

/*   1. strlen()
     2. strcpy()
     3. strmp()
     4. strcat()   */


1. strlen(): ekta string er lenth ber korar amra ei function use kori. niche structure deya holo:

       int strlen(char*string);


       coding example:

#include<stdio.h>
void main(){
    char a[]= "bangladesh";
    int lenth = strlen(a);
    printf("%d", lenth);        /// the print ans is 10 so we can get easyly lenth of the strings by using strlen()

return 0;
}


2. strcpy(): ekta string ke arekta string er moddhe copy koraR Jonno ei funtion use kori amra . niche example deya holo:

       char *strcpy(char*dest,char*src);       ///copy src string to dest string



coding example:

#include<stdio.h>

void main(){
    char a[]= "bangladesh";
    char b[]= "Amar desh";
    strcpy(a,b);
    printf("value of a is : %s\n", a);      /// the print result is a and b is Amar desh cause we copy the value of b and put it on value of a
    printf("Value of b is : %s\n", b);
return 0;
}


3. strcmp(): cmp means compare mane ekta string er sathe arekta string compare kora. niche example deya holo:

       int strcmp(char*s1,char*s2);       /// char*s1 er sathe char*s2 er compare kora.

example given below:

#include<stdio.h>

void main(){
    char a[]= "bangladesh";
    char b[]= "Amar desh";
    int compare = strcmp (a,b);                      /// amra jani strcmp te s1 s2 er soman hole return kor
       if(compare == 0){
            printf("a and b is equal\n");
       }else{
            printf("a and b is not equal");        /// the ans is a and b is not equal!!!
       }                                          /// s1>s2 hole return korbe 0 er cheye boro
                                                 /// s1<s2 hole return korbe 0 er cheye choto man
    return 0;

}

4. strcat(): ekta string er sathe arekta string jora laganor jonno amra ei function use kore thaki. niche example deya holo:

       char*strcat(char*s1,char*s2);       /// means s2 k s1 er moddhe concatenate kora mane jora lagano


example given below:

#include<stdio.h>

void main(){
    char a[]= "Amr Sonar bangla,";
    char b[]= "Ami Tomay valobashi";
    strcat(a,b);
    printf("%s", a, b);        /// ans will be printed like -- Amar Sonar Bangla, Ami Tomay valobashi


    return 0;

}





