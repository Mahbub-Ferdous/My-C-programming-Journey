// now the topics is -- Pointer in C

what is pointe???

ans is given below:

/*  Pointer Hocche bishesh ek dhoroner variable jeta onno variable er address rakhte pare  */

/* say for example, jokhn amra kono data type diye variable declare kori den memory te datatype wise bytes wise ekta space diye dey and 
   amra only sapche ta dekhleo ram e setar ekta address thake ja computer read korar jonno or file open korar jonno jonnno use kore i mean like  inventory or serial number type. computer ter function wise setar ekta inventory serial number diye thake ja rakhte pare pointer ar 
   setai pointer jeta ei address er value hold kore*/
   
syntax bisleshon:


#include<stdio.h>
void main(){
	int x = 10;                /// so we declared a integer variable which value is 10, so memory give me a spache and which value is 10 
	prinf("%d\n", x);         ///  ans will be 10 cause we use printf() fuunction 
	printf("%p\n", &x);       /// Now the ans is also 10, ans "%p" is the placeholder of pointer; ekhon print korbe x address e jei value aace seta  



return 0;
}




// that meanns we know that pointer is a variable and it declared by (*) like == *ptr and its hold the value of datatypees variable value
// address


lets given anothe example:


#include<stdio.h>
void main(){
	int x;
	x = 10;
	int *ptr = &x;
	printf("%d\n", x);
	printf("%p\n", &x);                        /// the answer will be same so we called it by using & or * - pointer 
	printf("%p\n", ptr);                       /// now the output is same ptr means pointer and we want to print the variable of x values
                                               /// by using pointer and ram or memory address 

return 0;
}


use pointer variable values :

#include<stdio.h>
void main(){
	char ch = 'G';
	char *p;
	p = &ch;
	printf("%c\n", ch);
	printf("%c\n", *p);                    /// when we called the address we use placeholder %p and & for the address 
	                                       /// when we call the address value then we use the data type wise placeholder and *p 



return 0;

}


#include<stdio.h>
void main(){
	double cgpa = 3.50;
	double cgpa1 = 3.70;
	double *pt1, *pt2;
	pt1= &cgpa;
	pt2= &cgpa1;
	printf("%lf + %lf = %.2lf\n", *pt1, *pt2, *pt1+*pt2);    // now see we doing a calculation which we call by using pointer 
                                                            // we call the address of the varibles value which we declared past
return 0;
}







