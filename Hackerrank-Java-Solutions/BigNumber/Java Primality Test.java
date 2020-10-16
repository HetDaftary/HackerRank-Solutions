import java.util.Scanner;
import java.math.BigInteger;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        //String n = scanner.nextLine(); 
        System.out.println(scanner.nextBigInteger().isProbablePrime(100) ? "prime" : "not prime");
        scanner.close();
    }
}
