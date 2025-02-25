import java.util.*;

public class DanceRev2 {

    public static int danceRecursive(int a, int b, int[] arr, int i, int n, int[][][] dp)
    {
        if(i >= n)
        return 0; 

        if (dp[a][b][i] != -1)
            return dp[a][b][i]; 

        int steps = 100;

        if(a== arr[i] || b == arr[i])
        {
            steps = Math.min(steps, danceRecursive(a, b, arr, i+1, n, dp) );
        }else
        {
            steps = Math.min(steps, danceRecursive(arr[i], b, arr, i+1, n, dp)  ) + 1;
            steps = Math.min(steps, danceRecursive(a, arr[i], arr, i+1, n, dp)  ) + 1;
        }
   
        dp[a][b][i] = steps;
        return steps; 
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        Map<String, Integer> mp = new HashMap<>();
        mp.put("right", 1);
        mp.put("down", 2);
        mp.put("left", 3);
        mp.put("up", 4);

      
        int n = scan.nextInt();
        scan.nextLine(); 
        int[] arr = new int[n+1];
        for (int i = 0; i < n; i++) {
      
            String a = scan.nextLine().trim();
            arr[i] = mp.get(a);  

        }
     

         // Initialize DP table with -1
         int[][][] dp = new int[5][5][n + 1];
         for (int[][] layer : dp)
             for (int[] row : layer)
                 Arrays.fill(row, -1);

        int steps = danceRecursive(arr[0], arr[1], arr, 2, n, dp);
        System.out.println( steps);

        scan.close();
    }
}
