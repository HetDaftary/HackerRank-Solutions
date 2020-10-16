import java.util.*;
import java.io.*;

class Solution
{
    public static void fun(int a,int b,int n)
    {
        int power=1,i,temp=a;
        for (i=0;i<n;i++)
        {
            temp=temp+b*power;
            power=power*2;
            System.out.print(temp);
            System.out.print(" ");
        }
        System.out.println();
    }

    public static void main(String []argh)
    {
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++)
        {
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();

            fun(a,b,n); // fun does the printing of required string.
        }
        in.close();
    }
}

