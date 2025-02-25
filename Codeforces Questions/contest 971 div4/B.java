import java.util.*;

public class B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // System.err.println("enter t");
        int t = sc.nextInt();
        
        while (t != 0) {
            t--;
            
            // System.err.println("enter n");
            int n = sc.nextInt();
            int[] ans = new int[n];
            // sc.nextLine();
            
            for (int i = 0; i < n; i++) {
                // sc.nextLine();
                // System.err.println("enter line:" + i);
                String a = sc.nextLine();
                char[] b = a.toCharArray();

                for (int j = 0; j < 4; j++) {

                    // System.err.print(b[j]);

                    if(b[j] == '#')
                    ans[(n-1)-i] = j + 1;
    

                }
            }

            System.out.println();
            for (int i : ans) {
                System.out.print(i + " ");
            }
            // System.err.println();
        }

        sc.close();
    }
}
