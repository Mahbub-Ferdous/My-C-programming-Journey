/// Now we discuss about dynamic memory allocation :


Dynamic Memory allocattion ki and kenoi ba eta lage ????

ans given below:

programming chola kalin obothay ba runtime e memory boraddo korake dynamic memory allocation bole .

/*example : dhori ekta versity te admission er somoy student serial er jonno amra ekta interger array nilam jar size 100 kintu student admit hoiche 70 jon tahole amra ki memory baki gula nosto korbo naki satttle down korbo ar ei program run time e settle korar nam e dynamic memory allocation*/


/// Dynamic memory allocation er header file hoolo  == #include<stdlib.h>

/* in c programming there have 4 functional library under the <stdlib.h> header file*/

               /*  1. malloc()
                   2. calloc()
                   3. free()
                   4. realloc()
                   
                   */

 
/// 1. malloc () = ei function diye amra memory allocate kori [malloc() want memory with the specified size].
        ***structure***:
        /*  ptr = (cast-type*)malloc(byte-size);*/   [cast type means jei data type return korbe tar keyword and pointer]
        
//  2. calloc() = ei function diye oi amra memory allocate kori [calloc() wants block of memory of the specified types ]
        ***structure***:
        /*  ptr = (cast-type*)calloc(n, element-size);*/
        
/// 3. free()  = ei function diye amra memory theke kichu free ba remove ba delete kori. []
/// 4. realloc() = ei function diye amra memory te barano komane  i mean correction kori [dynamically changes the memory allocation of previously allocated memory]

       ***structure***:
       /*  ptr = realloc(ptr, new size);*/
       
       
/// 1. malloc example ::


#include<stdio.h>
int main(){
	int *ptr;
	ptr = (int *) malloc(5 * sizeof(int));  /// we directly write 20 cause integer size = 4 and for 5 integer so 20
    if (ptr == NULL){                                  // again venge venge o likha jay...
    	printf("Memory not allocated\n");
    }else{
    	printf("Memory allocated\n");
    }


return 0;
}



/// 2. calloc() example :


#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	ptr =(int *) calloc(5, sizeof(int));
	if(ptr == NULL){
		printf("OPPS!!!\nMemory not allocated\n");
	}else{
		printf("Hurrah!!!\nMemory allocated properly\n");
	}
return 0;
}	


// 3. free() example:


#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	ptr =(int *) calloc(5, sizeof(int));
	if(ptr == NULL){
		printf("OPPS!!!\nMemory not allocated\n");
	}else{
		printf("Hurrah!!!\nMemory allocated properly\n");
		 // your correction code will be writen here!!
		// if the work done and we dont need any memory simply, we call the free() function here and print 
		free(ptr);
		printf("Well done!!\nMemory free succesfully\n");
	}
return 0;
}	



/// 4. realloc() example ::

#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	ptr =(int *) calloc(5, sizeof(int));
	if(ptr == NULL){
		printf("OPPS!!!\nMemory not allocated\n");
	}else{
		printf("Hurrah!!!\nMemory allocated properly\n");
		ptr = realloc(ptr, 100);                           /// 1st of all we allocate a memory for integer by calloc() then we need
		printf("Memory reallocate succesfully\n ");	    /// some extension so we called realloc() which have 2 parameter one is 
	}                                                   /// this pointer which will extend ptr, correction of size
return 0;
}	


all example given below :

#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	ptr1 =(int*)malloc(10* sizeof(int));
	ptr2 =(int *) calloc(5, sizeof(int));
	if(ptr1 == NULL || ptr2 =NULL){
		printf("OPPS!!!\nMemory not allocated\n");
	}else{
		printf("Hurrah!!!\nMemory allocated properly\n");
		ptr1 = realloc(ptr1, 20);
		free(ptr1);
		printf("Reallocate done and Free space also\n");
	}
return 0;
}	





/// what is different between malloc() and calloc()???

and is given below:

1.amra jani malloc and calloc dutoi memory allocate kore but malloc allocate kore initilization means value add kore dekay dey na. so amra seta dekte gele garbage value pete pari, kintu onno dike calloc memory allocation kore 0 diye initialization kore dey;

2. malloc () have only one arguments or parameter on the other hand calloc() have two arguments or para meters.

