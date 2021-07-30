/// now the topics is file in programming c 


What is file ?? why we need it??

ans: amader nitto diner machine work er modde onek gula file dorkar hoy, jemon amra text file nei c file nei , png nei jpg file nei totatl kotha hocche amra bujhle sob kichu machine k tar moto kore file akare bujhaite ar ei sob gulai ek sathe machine file.


there are various kind of file :

1.text file 
2.Binary file

/// jekhane amdr file gula na haranor jonno permanent joma rakhar jonno amra file use kori


File have 4 operation :
		  
		  
		  1. Open
          2. Write 
          3. Read
          4. Close
          
/// when you working in file then you must declare a pointer types file.

example :    FILE *fp       [in file there always file is all capital"FILE" and middle * thats a pointer of fp means file pointer]


1. File 'Open' == file open is easy going.[just we call fopen function then we provide 2 parameter: one is file name and aniither is mode: which is r, w, a, w+,r+,a+]
                  
                  
  *******   fp = fopen("fileopen","mode");   *******
  
[mode: r = only for read, w= only for write, a = append, r+ = read & write both, w+ = again read write both, a+ = append mode e read & write both] 



NB: append holo ei mode e file open kore kichu likhe abar open korle ager likha gula haray jabena , kintu only write mode open korle likhe rekhe then abar file open korle sei likha ar thakbena ar etai write ar append er moddhe parthokko 


2. File 'Write' ==  there is 3 way we can write file :

           1. fputc(int c, FILE *fp);                [where we pass the ASCII value of a character and then thats file name which we write]
                  [eta amdr ascii value wise likhte dibe ]
           
           2. fprintf(FILE *fp, string format);      [where we pass the string value]
                  [etar string format direct "" diye ja likhte chan etar moddhe likhte hobe]
                  
           3. fputs(constant char *s, FILE *fp);     [Where we pass the character array value and the file name]
           		  [eta ekta character array niye then declare kore function e likhte hobe]
           
           
3. File 'Read' ==  there are also 3 way to read a file :
		   1. int c = fgetc();   [we pass the file parameter. and ei vabe amra ekta ekta character porte parbo]
		                 [eta only ekta character porte pare]
		   
		   2. char buff[100]; ,fscanf(fp, "%s", buff);   [eta file theke pore input nibe file pointer pass korbo, buff er read korbe]
		   
		                 [ei function ekta space paile ar porte pare na]
		   
		   3. fgets(buff, 255, (FILE*)fp);
		   
		                 []

4. File 'Close' == this is much easier then file open. just call fclose() function and pass the pointer in the function parameter and the  parameter is the close file which you want :

                                fclose(fp);        [fp == file pointer which i want to close]
                                
                                
1. fputc() diye write:
                         
example given below:


#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("main.txt","w");  [so we open a main.txt file which is open in our machine]
    for(i = 65; i<90; i++){
        fputc(i, fp);              [then we open the file for writing and we apply fputc which means ascii value ]
    }                              [the ans is :ABCDEFGHIJKLMNOPQRSTUVWXYZ]




    fclose(fp);

return 0;
}
       

2. fputc(),fputs(),fprintf() function diye write:

example :


#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("main.txt","w");
    int i;
    for(i = 65; i<90; i++){
        fputc(i, fp);
    }
    char bio[100]= "  My name is mahbub ferdous bijoy";
    fputs(bio, fp);

    fprintf(fp, "   i want to be a full stack developer\n");


	fclose(fp);

return 0;
}       
       
       //// ar only 'w' mood e ja likhbo ta thakbe but abar dile seta muche abar notun ta print korbe 
       /// append "a", "a+" means ja likha thakbe age ta thakbe and noyun kore abar add hobe 
                                
                                
                                
now the part read :

1. fgetc() function diye read kora ;

 eta diye only character one read kora jay :
 
#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("main.txt","r");           // 'r' so we declared for read only
    int c;                                 // we declared a int c
    c = fgetc(fp);                         /// the rules of fgetc() , c = fgetc(fp);
    printf("the character is :  %c\n", c);          // the result is only  A cause we read only one character item in this method
    
    fclose(fp);

return 0;
}



2. fscanf() function diye read korar way :

 ei way te amra totokkhon porjonto porte partbo jotokkhon compiler spaces pabe na:
 
#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("main.txt","r");           // 'w+' so we declared it read and write
    char buff[100];                       ///  the method of fscanf we get a buffer character array to read 
    fscanf(fp, "%s", buff);
    printf("The data in buffer is:  %s\n", buff);        /// ans is compiler read only where space is available then stop
    
    fclose(fp);

return 0;
}



3. fgets() function diye file read kora :

eta joss function etay ekta buffer declared kore then index besi kore dile then pura write kora text read kora jay:

#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("main.txt","r");           // 'w+' so we declared it read and write
    char buff[200];
    fgets(buff, 200, fp);
    printf("The fgets is : %s\n", buff);


    fclose(fp);

return 0;
}



