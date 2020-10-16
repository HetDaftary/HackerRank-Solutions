#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int to_get_int;
    double to_get_double;
    char to_get_string[1024]; // Has there are no constraints given, I will prefer string size of 1kB.
    // You are free to pick up any size that's above max size of input string. 
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d\n%lf\n%[^\n]s", &to_get_int, &to_get_double, &to_get_string);
    
    // Print the sum.
    printf("%d\n%.1f\n%s%s", to_get_int + i, to_get_double + d, s, to_get_string);
    // Doing all the stuff in this printf function with '\n' for new line.
   
    return 0;
