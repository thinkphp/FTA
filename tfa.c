#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, fm, i;

    printf("%s", "n=");

    scanf("%d", &n);

    i = 2;

    do {

    	fm = 0;

    	while(n % i == 0) {            

            	fm++;

            	n /= i;            
    	}

    	if(fm!=0) printf("%d^%d + ", i, fm);

        i++;

    } while( n != 1);

    printf("\n");

	return 0;
}