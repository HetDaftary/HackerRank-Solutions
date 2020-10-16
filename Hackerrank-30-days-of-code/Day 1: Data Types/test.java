import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);

        /* Declare second integer, double, and String variables. */
        i += scan.nextInt(); // We will not declare new variables. We will just sum up here.
        d += scan.nextDouble();
        s += scan.nextLine();
        
        /* Read and save an integer, double, and String to your variables.*/
        // Note: If you have trouble reading the entire String, please go back and review the Tutorial closely.
        System.out.println(i + "\n" + d + "\n" + s); 
        // Yes, you can concatenate string with integer and double in Java. 
        // The int and double are parsed to string and then concatenated. 

        scan.close();
    }
