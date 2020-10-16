import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    private static int compare_tuples(int[] a, int[] b, int len) {
        for (int i = 0; i < len; i++)  {
            if (a[i] < b[i]) return 1;
            else if (a[i] == b[i]);
            else return -1;
        } return 0;
    }


    public static void main(String[] args) {
        int v1[] = new int[3], v2[] = new int[3];
        Scanner sc = new Scanner(System.in);

        for (int i = 2; i > -1; i--) v1[i] = sc.nextInt();
        for (int i = 2; i > -1; i--) v2[i] = sc.nextInt();

        if (compare_tuples(v1, v2, 3) >= 0) System.out.println("0");
        else if (compare_tuples(v1, v2, 2) >= 0) System.out.println(15 * (v1[2] - v2[2]));
        else if (v1[0] == v2[0]) System.out.println(500 * (v1[1] - v2[1]));
        else System.out.println("10000");         

        sc.close();
    }
}
