/* break and continue means loop thama or shesh kore deya 


For Example 1st we see the syntax means structure :*/



#include<stdio.h>
void main(){
	int i;
	for(i = 10; i <=20; i++){             // so the ans is 11 13 15 17 
		if(i % 2 == 0)                    // ekhane prothome loop ghurbe 10 theke 20 porjonto tar majhe ekta condition j i%2==0 then topics 
			continue;                    // come that is continue mane jokn e jor songkha asbe seta print hobe na tar porer tay jabe loop
			printf("%d\n, i);            
			                              // abar arekta if er moddhe if condition i>16 then brake means loop sesh kore ber hoye jabe
			 if(i > 16)
				break;
	}

return 0;
}


