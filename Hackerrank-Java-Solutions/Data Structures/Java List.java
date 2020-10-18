import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    
        Scanner sc = new Scanner(System.in);

        int number_of_elements = sc.nextInt(), i, number_of_queries, value; 
        ArrayList<Integer> array = new ArrayList<Integer>(number_of_elements);

        for (i = 0; i < number_of_elements; i++) array.add(sc.nextInt());

        number_of_elements = sc.nextInt();

        for (i = 0; i < number_of_elements; i++) {
            if (sc.next().equals("Insert")) array.add(sc.nextInt(), sc.nextInt());
            else array.remove(sc.nextInt());
        } sc.close();

        for (Integer j: array) System.out.print(j + " ");
    }
}

