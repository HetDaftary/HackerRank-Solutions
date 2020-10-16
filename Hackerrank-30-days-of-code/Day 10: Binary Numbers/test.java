import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    private static final Scanner scanner = new Scanner(System.in);

    private static int get_ans(int n) {
        int temp, count = 0, maximum = 0;

        while (n != 0) {
            temp = n % 2;
            while (temp == 1) {
                count++;
                n = n / 2;
                temp = n % 2;
            }
            if (maximum < count) maximum = count;
            count = 0;
            n = n / 2;
        }
        return maximum;
    }

    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        System.out.println(get_ans(n));

        scanner.close();
    }
}