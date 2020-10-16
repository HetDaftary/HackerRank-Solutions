import java.util.Scanner;

public class Solution 
{
    public static void main(String[] args) 
    {
        int x,y,j;
        Scanner scan=new Scanner(System.in);
        System.out.println("================================");
        for(int i=0;i<3;i++)
        {
            String s1=scan.next();
            x=scan.nextInt();

            System.out.print(s1);
            y=s1.length();
            for(j=0;j<(15-y);j++)
            {
                System.out.print(" ");
            }
            if(x>99)
            {
                System.out.println(x);
            }
            else if(x<100 && x>9)
            {
                System.out.println("0"+x);
            }
            else
            {
                System.out.println("00"+x);
            }
        }
        System.out.println("================================");
    }
}



