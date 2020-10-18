import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */

        Scanner sc = new Scanner(System.in);
        int number_of_arrays = sc.nextInt(), len, i, j, number_of_queries, x, y;
        int[] temp;

        ArrayList<int[]> Array = new ArrayList<int[]>(number_of_arrays);
        // Declaring the ArrayList to add the arraies. 

        for (i = 0; i < number_of_arrays; i++) {
            len = sc.nextInt();
            temp = new int[len];

            for (j = 0; j < len; j++) temp[j] = sc.nextInt();       

            Array.add(temp);
        } 

        number_of_queries = sc.nextInt();

        for (i = 0; i < number_of_queries; i++) {
            try {
                x = sc.nextInt() - 1; 
                // -1 is introduced as Java uses 0 based indexing and input is given with 1 based indexing. 
                y = sc.nextInt() - 1;
                System.out.println(Array.get(x)[y]);
            } catch (Exception e) {
                System.out.println("ERROR!");
            }
        } sc.close();
    }
}

