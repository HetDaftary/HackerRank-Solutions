import java.util.Scanner;
import java.math.BigInteger; 

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        BigInteger a = new BigInteger(sc.next());
        BigInteger b = new BigInteger(sc.next()); // Scanning the integers.
        sc.close(); // Closing the scanner as it is no longer needed.
        
        BigInteger answer1 =  new BigInteger("0"); // Starting with zero and we will keep on adding to it.
        BigInteger answer2 =  new BigInteger("1"); // Starting with one and we will keep on multipling to it.

        answer1 = answer1.add(a);
        answer1 = answer1.add(b); // addition steps. 

        answer2 = answer2.multiply(a);
        answer2 = answer2.multiply(b); // Multiplication steps.

        System.out.println(answer1);
        System.out.println(answer2); // Showing the output.
    }
}
