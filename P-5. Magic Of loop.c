/// Now magic loop problem solving:


ans given below:


#include<stdio.h>
void main(){
	int i;
	for( i = 2; i <= 100; i+=2){
        if( i%2==0 )
                                                                        /// we solve this problem this types of calculation
        printf("Even Number : %d\n", i);
	}                                                        /// but problem given 1 to 100 so we use if conditional apply



return 0;
}


ans given below:


#include<stdio.h>
int main(){
    int i;
    for( i = 100;i <= 200; i++){
        if(i%3==0 && i%5==0)
            printf("%d\n", i);

    }





return 0;
}



ans given below:


#include<stdio.h>
int main(){
    int i, j;
    for( i = 0; i < 4; i++){        /// outer loop
        for( j = 0; j <= i; j++){    /// inner loop
            printf("*");                     /// when i = 0 than outer loop print inner loop when j = 0, j<=i, j<=1 result that means *
        }                                 /// then outer loop print a newline cause then again when i = 1 outer loop true
        printf("\n");         /// then i++  means i = 2, when j=0, j<=i, j<=2 so loop 2 bar ghurbe and result output **
    }                        /// i =




return 0;
}


bekkha : amra duita loop ghuraichi outer ar tar majhe inner, outer loop print korbe ekta new line ar inner loop print korbe
"*" . so amra jodi ghotona probaho ta dekhi. i = 0 jokhn loop ta ghurlo and 0<4 etao true holo than se inner loop e dhuklo
sekhane j = 0, condition j<=i, so 0<=0 than etao true holo and loop ekbar sesh kore print korlo "*" then outer er print
korlo ekta new line .than abar loop ghura start korlo tokhn i = 1, ebong 1<4 eta true holo than inner loop e gelo , tate j =0
j<=i so 0<=1 by condition and loop ta sui bar ghurbe and "*" dui bar print korbe. than abar outer er new line print kore loop
prothom theke abar gurlo tokhn i = 2, i<4 so 2<4 eta true holo and loop ghure inner loop e gelo tate , j = 0, condition j<=i
so j = 0; 0<=2 tahole loop 3 bar ghurbe and "*" tin bar print korbe than outer loop ghure abar new line print kore abar loop ghurbe
jokhn i = 3; i<4 conditions means 3<4 ebong loop true hoye ghure inner loop e chole gelo jekhane , j = 0 and condition j <= i
so by the condition j = 0; 0<=3 so loop 4 bar ghurbe 5 barer somoy false hobe so 4 ta "*" print korbe and outer loop ghure new
line produce korbe then abar loop ghure dekbe i = 4 so condition i < 4 so the condition false






ans given below:




#include<stdio.h>
int main(){
    int n, i;
    printf("Enter a integer number: \n");
    scanf("%d", &n);
    printf("Multification table of %d :", n);
    for( i = 1; i <= 10; i++){
    	printf("%d*%d = %d\n", n,i,n*i);
    }

return 0;
}






ans given below:


#include<stdio.h>
int main(){
	int i, sum = 0;
	for( i = 101; i>=1; i-=2){
		sum += i;
	}
	printf("%d\n", sum);

return 0;
}






ans given below:


#include<stdio.h>
int main(){
    int i, j;
    for( i =1; i <=7 i++){
        for( j= 1; j<=i; j++){
            if( i%2==0 ){
                printf("Blankl line\n");
                break;
            }else{
                printf("*");
            }
        }
         printf("*\n");
    }






return 0;
}



ans given below:



#include<stdio.h>
void main(){
    int i, j;
    for(i = 4; i > 0; i--){
        for(j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}


ans given below:


#include<stdio.h>
void main(){
    int i, j;
    for( i = 5; i >=1; i-- ){
        for( j = 1; j <=i; j++){
            printf("%d", j);

        }
        printf("\n\n");
    }

return 0;
}




ans given below:






