/// now the topics is pointer realation between array and function::




Real life a pointer er sathe Array and Function er nibir realationship ache.
#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int i;
	for(i=0;i<5;i++){                /// '%u' means unsigned integer pointer so this provdes us arraays o,1,2,3,4 index adrees
		printf("%u\n", &a[i]);        /// which is 4 bytes different between one another 
	}
	printf("address of a : %u\n", a);   /// etar mane hocche loop ghurleo array er o index er value output dibe                             

return 0;
}



/// now we get the arrays summation by usuing pointer:


#include<stdio.h>
int main(){
	int a[5]= {1,2,3,4,5};
	int i,sum=0;                      // for summation we need to take a integer sum which is sum = 0
	for(i=0;i<5;i++){
		printf("%d\n", *(a+i));             /// now the system print out the array elemets on be half of index number of array
		sum+=*(a+i);

	}
	printf("Sum : %d\n", sum);    /// now print the sum of array = 15 and we call it by using pointer which is *(a +i)



return 0;
}



#include<stdio.h>
int main(){
	int a[5]= {1,2,3,4,5};
	int *pt = &a[2];
	printf("%p\n", *pt);
	printf("%p\n", *pt+1);            /// now call by pointer and print them we declared *pt = te amra &a[2] er man rekhe then minus 
	printf("%p\n", *pt-1);            //// and plus value print kori 

return 0;
}


/// now the topics is functionn and pointer and swap:


#include<stdio.h>
void swap(int *n1, int *n2){
		int temp =*(n1);
		*(n1) = *(n2);                   /// first of all amra swap diye non return ekta function create korlam and tar moddhe duita 
		*(n2) = temp;              /// pointer parameter pass korlam then *n1 and *n2 er moddhe swap korlam notun ekta int temp diye
	
	}
int main(){
	int num1=5, num2 = 10;         /// then main function e duita int nilam num1 and num2 then print kotam normal int value gula 
	printf("num1 = %d, num2 = %d\n", num1, num2);        
	swap(&num1,&num2);                               /// then swap function call korlam and &num1 and &num2 parameter er address dilam
	printf("num1 = %d, num2 = %d\n", num1 , num2);       //// tarpor tara tader value change korlo cause amdr function ta setar jonno chilo

return 0;
}	




another example given below with function and array by using pointer:

#include<stdio.h>
int sum(int *a, int size){    // we return the sum of the array
	int i,sum =0;
	for(i = 0; i < size; i++){
		sum+=*(a+i);
	}
	return sum;

}
int main(){
	int a[3]={5,5,10};
	int result = sum(a, 3);
	printf("Sum of the array is: %d\n", result);	



return 0;
}


