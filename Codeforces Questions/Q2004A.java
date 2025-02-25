import java.util.*;

public class Q2004A {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        // System.out.println("Enter t:");
        int t = sc.nextInt();
        sc.nextLine();
        
        for(int i = 0 ; i < t ; i++)
        {
            // System.out.println("Enter n");
            int n = sc.nextInt();
            
            // System.out.println("Enter array");
            int[] arr = new int[n];
            for(int j = 0 ; j < n; j++)
            {
                arr[j] = sc.nextInt();
                
            }
            
            if(n == 2)
            {
                if(Math.abs(arr[0] - arr[1]) > 1)
                {
                    System.out.println("YES");
                } else
                {
                     System.out.println("NO");
                }
            }
            else
            {
                 System.out.println("NO");
            }
            
            
            
        }
        sc.close();
    }
}