import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static boolean is_prime(int n) {
        if (n < 2) return false;
        int sqr = (int)Math.sqrt(n);
        for(int i = 2; i <= sqr; i++)
            if(n % i == 0) 
                return false;
        return true;
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number_of_cases, temp;
        
        number_of_cases = sc.nextInt();

        for (int i = 0; i < number_of_cases; i++) {
            temp = sc.nextInt();
            if (is_prime(temp)) System.out.println("Prime");
            else System.out.println("Not prime");
        }

        sc.close();
    }
}




