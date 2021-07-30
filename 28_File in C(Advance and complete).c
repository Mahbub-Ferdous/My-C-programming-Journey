/// so now the topics is completing file in c and discuss about advance file:
/*   Coding korte korte amra advance practise kore felbo and side e comment kore bisleshon kora ache*/
#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("programming.txt","r");           // 'w+' so we declared it read and write

    int c;
    while(1){                            /// [while(1) means infinate loop]
        c = fgetc(fp);                   /// fgetc(); function call korlam
        if(c == EOF){                    /// [EOF = End Of File jodi end of file pao tumi ]
            break;                        /// then break and print 
        }
        printf("%c", c);                 /// print korbe ascii value tai amra %c diye print korle seta character print korbe
    }



    fclose(fp);

return 0;
}

another advance example using pointer and file:

#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("programming.txt","r");           // we count vowel, consonent, new line , space

    int c, cCounter = 0,vCounter= 0,sCounter = 0,nlCounter = 0;
    while(1){                            /// [while(1) means infinate loop]
        c = fgetc(fp);                   /// fgetc(); function call korlam
        if(c == EOF){                    /// [EOF = End Of File jodi end of file pao tumi ]
            break;                        /// then break and print
        }if( c == 32){                    /// [32 space er ascii code]
            sCounter++;
        }else if( c == 10){              /// 10 new line'\n' er ascii code
            nlCounter++;
        }else if( c =='a'|| c =='e' || c =='i'|| c =='o' || c =='u'){
            vCounter++;
        }else if( c =='A'|| c =='E' || c =='I' || c =='O' || c =='U'){
            vCounter++;
        }else{
            cCounter++;
        }

    }
    printf("Vowel : %d\n", vCounter);
    printf("Consonent : %d\n", cCounter);
    printf("Space : %d\n", sCounter);
    printf("New line: %d\n", nlCounter);



    fclose(fp);

return 0;
}



now we see read write data file how can implement::



open kore file input nilam and write korlam  

#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp = fopen("donation.txt","w+");
    char name[25];
    int donation = 0, i;
    for( i = 0; i<5;i++){
        printf("Enter your name: \n");
        scanf("%s", name);
        printf("Enter your ammount: \n");
        scanf("%d", &donation);
        fprintf(fp, "%s --- %d\n", name, donation);
    }
    
    
    
    fclose(fp);
    return 0;
}


then write kora ta read korlam :


#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp = fopen("donation.txt","w+");
    char b[20];
    int sum = 0;
    while(1){
        int code = fscanf(fp, "%s", b);
        if(code == EOF){
            break;
        }
        printf("%s", b);

        code = fscanf(fp,"%s", b);
        if(code == EOF){
            break;
        }
        printf("%s/n", b);

        sum += atoi(b);              /// eta string k integer kore <stdlib.h> er function 

    }
    printf("Total donation is : %d\n", sum);
    //fclose(fp);
return 0;
}
