#include <stdio.h>
#include <stdlib.h>

int main(){
	long long A, B;
  
	while(scanf("%lld %lld", &A, &B), A){
		printf("%lld\n", (A << 1) - B);
	}
	return 0;
}
