#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  
  setlocale(LC_ALL, "Portuguese");
  
  int num, a=0, b=1, c, d=0;
  
  	printf("digite um numero para verificar se pertence a sequencia de Fibonacci\n");
  	scanf("%d", &num);
  		if(num==0 || num ==1){
  			printf("%d pertence � sequ�ncia de Fibonacci", num);
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
    		printf("%d pertence � sequ�ncia de fibonacci.", num);
  		}else{
  			printf("%d n�o pertence � sequ�ncia de fibonacci.", num);
   		}
 	return;
}
