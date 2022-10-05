# Logic For Some Critical Pograms

## Number at a certian index in fiboncci series usng recursion
### Code
```
int fibonacci(int n)
{
    if(n < 2)
        return 1;
    return ( fibonacci( n - 2 ) + fibonacci( n - 1) );
}
```
### Logic
The Fibonacci Series : 1, 1, 2, 3, 5, 8, 13, 21, ...
Here, what happens is, suppose we enter position as 1, then what happens is, int n = 1. `if` is encountered and we get value as 1, which is correct when matched with the series.<br>
Now, we enter position as 2, then what happens is, `if` is not encountered and the program goes inside `fibonacci(n-2)`, here n-2 becomes 0 which satisfies the `oif` conditions and returns 1.<br>
Now, when we see `fibonacci(n-1)`, n-1 becomes 1, which satisfies the `if` condition and returns 1. Next, what we see is, in the return statement we get, fibonacci(n-2) = 1 + fibonacci(n-1) = 1, which adds up to 2 and thus giving us 2 in the end.<br>
#### Though logic has been written. What I find easier is just learning this snippet. And practising so that over the course of time it gets stored in permanent memory.