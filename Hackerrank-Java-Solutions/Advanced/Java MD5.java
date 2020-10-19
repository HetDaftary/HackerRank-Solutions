import java.io.*;
import java.util.*;
import java.math.BigInteger; 
import java.security.MessageDigest; 
import java.security.NoSuchAlgorithmException; 

public class Solution {
    public static String getMd5(String input) { 
        try { 
            MessageDigest md = MessageDigest.getInstance("MD5"); 
            byte[] messageDigest = md.digest(input.getBytes()); 
            BigInteger no = new BigInteger(1, messageDigest); 
            String hashtext = no.toString(16); 
            while (hashtext.length() < 32) { 
                hashtext = "0" + hashtext; 
            } return hashtext; 
        } catch (NoSuchAlgorithmException e) { 
            throw new RuntimeException(e); 
        } 
    } 


    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */

        Scanner sc = new Scanner(System.in);
        String line = sc.nextLine();
        sc.close();

        System.out.println(getMd5(line));
    }
}
