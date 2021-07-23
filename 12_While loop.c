///Now the topics about 'while' loop:


/// The syntax of while loop is similar to for loop, so we first see the syntax of for loop:

for(initialization; condition; increment/decrement){
        /// statement code for execute

}                          /// while loop similar like for loop



/// the syntax of while loop below:

initialization;
while(condition){
    ///statement of coad for execute     /// protibar loop ta ghurbe and condition ta dekhbe
    increment/decrement                  /// joto bar condition true hobe statement execute korbe
                                        ///  jokhn e faklse hobe tokhn stop hobe
}


#include<stdio.h>
int main(){
    int i = 10;
    while(i < 12){                   ///
    printf("%d\n", i);
    i++;
    }


return 0;
}



/// another example :


#include<stdio.h>
int main(){
    int i = 2;
    while(i <= 100){
        printf("%d\n", i);
        i += 2;
    }


return 0;
}



