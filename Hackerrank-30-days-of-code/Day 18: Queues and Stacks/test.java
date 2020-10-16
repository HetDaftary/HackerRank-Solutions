import java.io.*;
import java.util.*;

public class Solution {
    // Write your code here.
    private ArrayList<char> stack;
    private ArrayList<char> queue;
    Solution() {
        this.stack = new ArrayList<Integer>();
        this.queue = new ArrayList<Integer>();
    }

    public void pushCharacter(char s) {
        this.stack.add(s);
    }

    public void enqueueCharacter(char s) {
        this.queue.add(s);
    }

    public char popCharacter() {
        return this.stack.remove(stack.size() - 1);
    }

    public char dequeueCharacter() {
        return this.queue.remove(0);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        scan.close();

        // Convert input String to an array of characters:
        char[] s = input.toCharArray();

        // Create a Solution object:
        Solution p = new Solution();

        // Enqueue/Push all chars to their respective data structures:
        for (char c : s) {
            p.pushCharacter(c);
            p.enqueueCharacter(c);
        }

        // Pop/Dequeue the chars at the head of both data structures and compare them:
        boolean isPalindrome = true;
        for (int i = 0; i < s.length/2; i++) {
            if (p.popCharacter() != p.dequeueCharacter()) {
                isPalindrome = false;                
                break;
            }
        }

        //Finally, print whether string s is palindrome or not.
        System.out.println( "The word, " + input + ", is " 
                           + ( (!isPalindrome) ? "not a palindrome." : "a palindrome." ) );
    }
}
