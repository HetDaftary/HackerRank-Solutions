import java.io.*;
import java.util.*;

public class Solution {

    public static boolean notHellCase(String s) // This is case 9 where s = "        ".
    {
        int len = s.length();

        for(int i = 0; i < len; i++)
        {
            if(s.charAt(i)!=' ')
            {
                return(true);
            }
        }
        return(false);
    }

    public static void main(String[] args) 
    {   
        Scanner scan = new Scanner (System.in);

        String s = scan.nextLine ();
        if (notHellCase(s))
        {
            //System.out.println ((int) s.charAt (0));
            String[] items = s.trim ().split ("[ !,?.\\_'@]+");

            System.out.println (items.length);

            for (String item:items)
            {
                System.out.println (item);
            }
        }
        else
        {
            System.out.println ("0");
        }
        scan.close();            
    }
}
