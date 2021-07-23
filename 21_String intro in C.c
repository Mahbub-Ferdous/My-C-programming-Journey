/// what is string in programming C:

ans : A sequential collection of characters or a character array terminated by a null characters ('\0')

thats means its a character array so called ch array


/// Now we given some example below:

/*    char name[]="Rayhan";                     /// data type name then array name then we print %s is the string placeholder
      printf("%s", name);*/
                                                /// Null character ta thake koi memory te jeta name er por array hisebe nichi
/*    char random[]={'a','1','*'};             /// seta name[]= {'R','a','y','h','a','n','\0'} evabe thake sobar sesh e
      printf("%s", random);*/


/// char my_string[50];               capacity of storing 49 characters plus null character !!

/// so now we see how can print in string now we see how can scan or get input from user in string


/*    scanf("%s", my_string);     --- there is some deferent between past for char, int double or float

      there have no need to join '&' sign mint it

      also you get a string input from user by using:

      gets(my_string);       ---- it is the coolest way to get input in string from user */




For print example below:

#include<stdio.h>
void main(){
    char a[]= {'1','6','9', 'a','Z','t'};
    printf("%s\n",a);                        /// the ans is 169azt



return 0;
}


another example given below:


#include<stdio.h>
void main(){
    char a[]= "Mahbub Bijoy";                 /// we define it like string with double coutation
    printf("%s\n",a);                       /// the ans is Mahbub Bijoy



return 0;
}



example of scan in string:

#include<stdio.h>
void main(){
    char name[20];
    printf("Enter Your Name : \n", name);
    gets(name);                                  /// we take input from user by using gets
    printf("%s\n", name);



return 0;
}


another example:


#include<stdio.h>
void main(){
    char name[20];
    printf("Enter Your Name : \n", name);
    scanf("%s", name)                                /// we take input from user by using scanf("placeholder", name)
    printf("%s\n", name);                           ///  there have no need to use '&' mind it.



return 0;
}

now we see whats is null and how to loop work in string:



#include<stdio.h>
void main(){
    char str[]= "abc";
    int i = 0;
    while(1){
        printf("%d - %c\n", i, str[i]);        /// so get our null character then we break the loop otherwise continue the loop
        if(str[i] == '\0'){
            break;

        }
        i++;
    }



return 0;
}


another example:

#include<stdio.h>
void main(){
    char str[]= {'a','b','3','5'};
    int i = 0;
    while(1){
        printf("%d - %c\n", i, str[i]);        /// so get our null character then we break the loop otherwise continue the loop
        if(str[i] == '\0'){
            break;

        }
        i++;
    }

return 0;
}

/// problem -1.

#include<stdio.h>
void main(){
    char name[20];
    printf("Enter your name : \n");
    gets(name);
    printf("Hellow!!%s\n", name);



return 0;
}



/// problem -2.

#include<stdio.h>
void main(){
    char name[20];
    printf("Enter your name : \n");
    gets(name);
    int i = 0, counter = 0;
    while(name[i] != '\0'){
        counter++;
        i++;

    }
    printf("Lenth of name is : %d\n", counter);




return 0;
}




