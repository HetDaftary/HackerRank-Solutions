import java.util.Scanner;

public class Solution {

    static boolean isAnagram(String a, String b) // This is the required function.
    {
        // Complete the function.

        int lena = a.length(),lenb = b.length();
        if(lena!=lenb) // If lengths are not the same we can directly conclude.
        {
            return(false);
        }
        else // Now we need to check the strings.
        {
            int[] frequencyA = new int[26]; // Storing values for a to z.
            int[] frequencyB = new int[26];
            int i,temp;
            for(i = 0; i<26; i++) // For safety we start with zero.
            {
                frequencyA[i]=0;
                frequencyB[i]=0;
            }
            for (i=0;i<lena;i++) // Getting frequiencies 
            {
                temp = (int) a.charAt(i);
                if(temp>64 && temp<91) // To handle 'A' to 'Z'.
                { // To subtarct 65.
                    (frequencyA[temp-65])++;
                }
                else if(temp>96 && temp<123) // To handle 'a' to 'z'.
                { // To subtract 97.
                    (frequencyA[temp-97])++;
                } 
            }

            for (i=0;i<lena;i++) // Getting frequencies of A to Z of b. lena is ok as lena = lenb.
            {
                temp = (int) b.charAt(i);
                if(temp>64 && temp<91) // To handle 'A' to 'Z'.
                { // To subtarct 65.
                    (frequencyB[temp-65])++;
                }
                else if(temp>96 && temp<123) // To handle 'a' to 'z'.
                { // To subtract 97.
                    (frequencyB[temp-97])++;
                } 
            }

            for ( i = 0; i<26; i++)       
            {
                if(frequencyA[i]!=frequencyB[i])
                {
                    return(false);
                }
            } 
            return(true);
        }
    }

  public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
