import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    private static Scanner in = new Scanner(System.in);
    public static int bubble_sort(int n, int[] a) {
       int i, nos = 0, temp, temp_nos, j; 
        for (i = 0; i < n; i++) {
            temp_nos = 0;
            for (j = i + 1; j < n; j++) {
                if (a[j] < a[i]) {
                    temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                    temp_nos++;
                }
            } nos += temp_nos;
            if (temp_nos == 0) break;
        } return nos;
    }

    public static void main(String[] args) {
        
        int n = in.nextInt();
        int[] a = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        } in.close();

        int nos = bubble_sort(n, a);
        System.out.println("Array is sorted in " + nos + " swaps.\nFirst Element: " + a[0] + "\nLast Element: " + a[n - 1]);
    }
}
