#include <stdio.h>

#define FALSE (1==0)
#define TRUE  (1==1)

int check_prime (int x){ 
       for( int y = 2; y < x; y = y + 1 ){
           if(x%y==0){
               return FALSE;
           }
       }
    return TRUE;
}  



int return_highest_prime_factor(long long x){
    for( long long a = x-1; a < x; a = a - 1 ){
        if(x%a==0 && check_prime(a)){
            return a;
        }
    }
}


int main(){
printf ("Checking primes...\n");
long long val =600851475143LL; 
long long largest = return_highest_prime_factor(val);
printf("Largest prime factor is %llu\n", largest);
return 0;
}
