import java.io.*;
import java.util.*;

public class Solution {
    
    public static void main(String[] args) {
        
        Scanner sc= new Scanner(System.in);
        String A=sc.next();
        
        String B = "";

        int len = A.length();
        
        for(int i = 0;i < len; i++)
        {
            B = B + A.charAt(len-i-1);
        }
        //System.out.println(B);
        if(A.equals(B)) // compares two strings character by character.
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }

        sc.close();
        
    }
}




