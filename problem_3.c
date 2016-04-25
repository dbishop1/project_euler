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



int return_highest_prime_factor(int x){
    for( int a = x-1; a < x; a = a - 1 ){
        if(x%a==0 && check_prime(a)){
            return a;
        }
    }
}


int main(){
printf ("Checking primes...\n");
int val =600851475143; 
int largest = return_highest_prime_factor(val);
printf("Largest prime factor of %i is %i\n", val, largest);
return 0;
}
