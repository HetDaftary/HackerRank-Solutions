import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] things = new String[n];
        
        for(int i = 0; i < n; i++)
            things[i] = sc.next();
        sc.close();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < things[i].length(); j = j + 2) 
                System.out.print(things[i].charAt(j));
            System.out.print(" ");
            for(int j = 1; j < things[i].length(); j = j + 2)
                System.out.print(things[i].charAt(j));
            System.out.println();
        }
    }
