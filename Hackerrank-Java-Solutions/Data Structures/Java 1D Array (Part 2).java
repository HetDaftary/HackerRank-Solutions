import java.util.*;

public class Solution {

    private static boolean isSolvable(int leap, int[] arr, int i) {
        if (i < 0 || arr[i] == 1) return false;
        if ((i == arr.length - 1) || i + leap > arr.length - 1) return true;

        arr[i] = 1;
        return isSolvable(leap, arr, i + 1) || isSolvable(leap, arr, i - 1) || isSolvable(leap, arr, i + leap);
    }


    public static boolean canWin(int leap, int[] game) {
        return isSolvable(leap, game, 0);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int q = scan.nextInt();
        while (q-- > 0) {
            int n = scan.nextInt();
            int leap = scan.nextInt();
            
            int[] game = new int[n];
            for (int i = 0; i < n; i++) {
                game[i] = scan.nextInt();
            }

            System.out.println( (canWin(leap, game)) ? "YES" : "NO" );
        }
        scan.close();
    }
}

