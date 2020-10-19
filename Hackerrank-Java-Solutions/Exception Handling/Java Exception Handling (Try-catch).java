import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */

        Scanner sc = new Scanner(System.in);
            
        try {    
            int x = sc.nextInt(), y = sc.nextInt();
            System.out.println(x/y);
        } catch (java.lang.ArithmeticException e) {
            System.out.println("java.lang.ArithmeticException: / by zero");
        } catch (java.util.InputMismatchException e) {
            System.out.println("java.util.InputMismatchException");
        } 

        sc.close();
    }
}

