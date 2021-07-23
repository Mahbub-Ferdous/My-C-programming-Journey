
// the topic about integer limit

#include<stdio.h>

int main(){
    int a = 32767;
    int b = 32768;
    int x = 2147483647;
    int y = 2147483648;
    printf("%d\n, %d\n", x, y);    // dont cross the integer limit
    printf("%d\n, %d\n", a, b);    // the value of a will print acurate but b wwill minus for whats thats meas limit



return 0;
}


#include<stdio.h>

int main(){
    int a = 2147483647;
    long long int b = 2147483648;

    printf("%d\n, %lld\n", a, b);  // see now out put is different not negetive cause we use long long integer keywor which placeholder %lld and this bytes limit is bigger than integer cause its 8 bit




return 0;

}





#include<stdio.h>

int main(){
    printf("size of int in my computer is : %d\n", sizeof(int)); // system of any keyword size thats means function call sizeof()




return 0;
}








#include<limits.h>
int main(){
    printf("the maximum value of integer is = %d\n", INT_MAX);
    printf("the minimum value of integer is = %d\n", INT_MIN);
    printf("the maximum value of long integer = %ld\n", LONG_MAX);
    printf("the minimum value of long integer = %ld\n", LONG_MIN); /// this system make us easy to know about the limit of every kewword



return 0;
}
