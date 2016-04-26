#include <stdio.h>

#define FALSE (1==0)
#define TRUE  (1==1)

int check_prime (long long x){ 
       printf("Checking: %llu\n", x);
       if(x%2==0){
           return FALSE;
       }
       for( int y = 3; y < x/2; y = y + 2 ){
           if(x%y==0){
               return FALSE;
           }
       }
    return TRUE;
}  



int return_highest_prime_factor(long long x){
    printf("Checking val: %llu\n", x);
    for( long long a = x/2; a > 1; a = a - 2 ){
        if(a%10000001==0){
            printf("Testing factor: %llu\n", a);
        }
        if(x%a==0 && check_prime(a)){
            return a;
        }
    }
}


int main(){
    printf ("Checking primes...\n");
    long long val = 600851475143LL; 
    long long largest = return_highest_prime_factor(val);
    printf("Largest prime factor is %llu\n", largest);
    return 0;
}
