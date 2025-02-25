import java.util.Scanner;

public class index {
    public static void main(String[] args) {
        int n = 4; 
        int x = 6;

        int[] ans = new int[n];
        
        int k = 6; 
        int i = 0; 

        while(i < n)
        {
            System.out.println("Enter while loop " + i);
            if((x-k)/(n-i + 1) > 1)
            {
                ans[i] = k;
                i++;
                x -= k;
                System.out.println("Passed condition: " + x);
            } 
            else
            {
                k--;
            }
        }

        for (int j = 0; j < ans.length; j++) {
            System.out.println(ans[j]); // Use j instead of i
        }
    }
}
