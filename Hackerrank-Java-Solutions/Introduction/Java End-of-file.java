import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution 
{
    public static void main(String[] args) 
    {
        int i=1;
        //String temp; 
        Scanner scan = new Scanner(System.in);
        while(scan.hasNext()==true)
        {
            System.out.print(i+" ");
            System.out.println(scan.nextLine());
            i++;
        } 
        scan.close();
    }
}

