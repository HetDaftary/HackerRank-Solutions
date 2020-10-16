// Just including the function. 

// Complete the factorial function below.
static int factorial(int n) {
    if (n < 2) return 1;
    return n * factorial(n - 1);
}
