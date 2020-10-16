import java.util.Scanner;

public class Solution {
    public static String subString(String s,int start,int end) // Gives us the reqd subString as perticular library can't be imported.
    {
        String temp = "";
        for(int i = start; i < end; i++)
        {
            temp = temp + s.charAt(i);
        }
        return(temp);
    }

    public static int stringCompare(String str1, String str2) // Compares two strings lexologically.
    { 
        int l1 = str1.length(); 
        int l2 = str2.length(); 
        int lmin = Math.min(l1, l2); 
  
        for (int i = 0; i < lmin; i++) 
        { 
            int str1_ch = (int)str1.charAt(i); 
            int str2_ch = (int)str2.charAt(i); 
  
            if (str1_ch != str2_ch) 
            { 
                return str1_ch - str2_ch; 
            } 
        } 
        if (l1 != l2) 
        { 
            return l1 - l2; 
        } 
        else 
        { 
            return 0; 
        } 
    } 

    public static String getSmallestAndLargest(String s, int k) {
        String temp = subString(s,0,k);
        String smallest = temp;
        String largest = temp;
        
        // Complete the function
        // 'smallest' must be the lexicographically smallest substring of length 'k'
        // 'largest' must be the lexicographically largest substring of length 'k'

        int len = s.length();

        for(int i = 0; i < len-k+1; i++)
        {
            temp = subString(s,i,i+k);
            if(stringCompare(temp,largest)>=0)
            {
                largest = temp;
            }
            else if(stringCompare(smallest,temp)>=0)
            {
                smallest = temp;
            }
        }

        return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}
