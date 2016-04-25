
def print_fib(a,b):
    return(a+b)

total = 0

first = 1
second = 1
next_val = 0

while next_val<4000000:
    next_val = print_fib(first,second)
    first = second
    second = next_val
    if(next_val<4000000 and next_val%2==0):
        total+=next_val
print total
