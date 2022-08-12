#include <stdio.h>
int main(){
	int n,s,i;
	printf("nhap n: ");
	scanf("%d",&n);
	s=0; 
	for (i=1;i<=n;i++){
		if (n % i==0) {
			s=5+i;
			printf("\nuoc cua %d là %d" ,n,i);

            }

        }
    printf("\ntong cac uoc cua %d la : %d", n,s);
    
    
}

