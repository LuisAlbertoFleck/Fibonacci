#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  
  setlocale(LC_ALL, "Portuguese");
  
  int num, a=0, b=1, c, d=0;
  
  	printf("digite um numero para verificar se pertence a sequencia de Fibonacci\n");
  	scanf("%d", &num);
  		if(num==0 || num ==1){
  			printf("%d pertence à sequência de Fibonacci", num);
  		return 0;  	
 	}
  	while(c<=num){
  		c=a+b;
  		a=b;
  		b=c;
  			if(c==num){
  				d=1;
  			break;
		  	}
   	 	}
    	if(d==1){
    		printf("%d pertence à sequência de fibonacci.", num);
  		}else{
  			printf("%d não pertence à sequência de fibonacci.", num);
   		}
 	return;
}
