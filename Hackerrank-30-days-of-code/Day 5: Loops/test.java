import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    private static final Scanner scanner = new Scanner(System.in);

    private static void print_table(int n) {
        for (int i = 1; i < 11; i++) 
            System.out.println(n + " x " + i + " = " + (n * i));
    }

    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        print_table(n);
        scanner.close();
    }
}
