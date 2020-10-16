// For getting comlete sentence we use scan.nextLine() and clear keyboard buffer first.
// Then we use scan.nextLine();.
import java.util.Scanner;
class Solution
{
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        int i=s.nextInt();
        double d=s.nextDouble();
        s.nextLine(); //this is to clear the keyboard buffer
        String l=s.nextLine();
        s.close();

        System.out.println("String: " + l);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
    }    
}
