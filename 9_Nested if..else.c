/// topics about nested else if:
/// means if condition and else condition er majhe onek gula else if conditions but ekta condition at a time kaj korbe


/// structure given below:

if (condition1){
    // statement 1

}else if (condition2){
    //statement 2
}else if (condition3){     /// evabe joto dorkar toto chalano jabe tobe jei condition true hobe oi statement output dekhabe
    //statement 3
}else{                                    /// else didnt need to another condition mind it
    // statement 4 (compulsery statement)
}


//example below:


#include<stdio.h>
int main(){
    char ch = 'a';
    if(ch == 'a'){
        printf("Graps");     /// the result will be graps
    }else if(ch == 'b'){
        printf("Apple");
    }else if(ch == 'c'){
        printf("Banana");
    }else{
        printf("null");
    }



return 0;
}


/// example 2 with input call and nested else if given below:

#include<stdio.h>
int main(){
    int x;
    printf("Enter The value Of x: \n");
    scanf("%d", &x);
    if(x<=25){
        printf(" Hellow Bijoy\n");
    }else if(x<=50){
        printf(" Love You\n");
    }else if(x<=100){
        printf("Coding Master Bijoy\n");
    }else{
        printf(" Eror Imput!!!\n");
    }




return 0;
}




///problem solving part : problem 1. Take one person age as input and print his status according to the given chart:


// <2 = infant
// >=2 and <10 = child
// >=10 and <20 = teenage
// >=20 and <30 = adult
// >=30 = Old



/// ans given below:


#include<stdio.h>
int main(){
    int x;
    printf("Enter Your Age: \n");
    scanf("%d", &x);
    if(x < 2){
        printf("My God You are Infant");
    }else if(x>=2 && x<10){
        printf("You are Child Dear\n");
    }else if(x>=10 && x<20){
        printf("Brilliant You are Teenager");
    }else if(x>=20 && x<30){
        printf("Dont worry you are now Adult");
    }else{
        printf("Oh no!! you are Old");
    }




return 0;
}
