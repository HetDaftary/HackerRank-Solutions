//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        HashMap<String, String> pBooks = new HashMap<String, String>();
        int n = in.nextInt();
        String name, temp_ans;
        String phone;
        for(int i = 0; i < n; i++){
            name = in.next();
            phone = in.next();
            pBooks.put(name, phone);
        }
        while(in.hasNext()){
            String s = in.next();
            if (pBooks.get(s) != null) {
                temp_ans = s + "=" + pBooks.get(s);
                System.out.println(temp_ans);
            } else {
                System.out.println("Not found");
            }
        }
        in.close();
    }
}