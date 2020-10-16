import java.util.*;
import java.io.*;

class powerException extends Exception {
    @Override
    public String getMessage() {
        return "n and p should be non-negative";
    }
}

//Write your code here
class Calculator {
    int power(int n, int p) throws powerException {
        if (!(n > -1 && p > -1)) 
            throw new powerException();
        int ans = 1;
        for (int i = 0; i < p; i++)
            ans *= n;
        return ans;
    }
}

class Solution{

    public static void main(String[] args) {
    
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
        
            int n = in.nextInt();
            int p = in.nextInt();
            Calculator myCalculator = new Calculator();
            try {
                int ans = myCalculator.power(n, p);
                System.out.println(ans);
            }
            catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }
        in.close();
    }
}

