import java.util.ArrayList;
import java.util.List;


class Solution {
    public int h;

    // Check if coordinates are out of bounds
    public boolean outOfBound(int x, int y, int m, int n) {
        return x < 0 || x >= m || y < 0 || y >= n;
    }

    // Recursive method to explore paths
    public boolean solve(int x, int y, List<List<Integer>> grid, boolean[][] vis, int[][] dir, int m, int n) {
        // Base case: check if out of bounds or already visited
        if (outOfBound(x, y, m, n) || vis[x][y]) return false;

        // Mark the current cell as visited
        vis[x][y] = true;

        // Decrease health by the value of the current cell
        h -= grid.get(x).get(y);
        System.out.println("Current position: (" + x + ", " + y + ") Health: " + h);

        // Check if health has depleted
        if (h <= 0) {
            h += grid.get(x).get(y);
            System.out.println("Health depleted at position: (" + x + ", " + y + ")");
            return false;
        }

        // Check if the target position is reached
        if (x == m - 1 && y == n - 1) {
            System.out.println("Reached target with remaining health: " + h);
            return true;
        }

        // Explore all 4 possible directions
        for (int i = 0; i < 4; i++) {
            int xd = x + dir[i][0];
            int yd = y + dir[i][1];

            if (solve(xd, yd, grid, vis, dir, m, n)) {
                return true;
            }
        }

        // Restore health to explore other paths
        h += grid.get(x).get(y);
     

        // Mark the current cell as not visited for other paths
        vis[x][y] = false;

        return false;
    }

    // Method to initiate the path finding
    public boolean findSafeWalk(List<List<Integer>> grid, int health) {
        int m = grid.size();
        int n = grid.get(0).size();

        int[][] dir = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} }; // Up, Down, Left, Right

        boolean[][] vis = new boolean[m][n];

        // Initialize the visited array
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                vis[i][j] = false;
            }
        }

        h = health;
        return solve(0, 0, grid, vis, dir, m, n);
    }
}


public class Solve {
    public static void main(String[] args) {
        // Create an instance of the Solution class
        Solution sol = new Solution();

      
      // Define the sample grid and health value
      List<List<Integer>> grid = new ArrayList<>();
      grid.add(List.of(1, 1, 1));
      grid.add(List.of(1, 0, 1));
      grid.add(List.of(1, 1, 1));
      
      int initialHealth = 5; // Given health

      // Call the method to find if there is a safe walk
      boolean canReachEnd = sol.findSafeWalk(grid, initialHealth);


        // Print the result
        if (canReachEnd) {
            System.out.println("A safe path exists to the bottom-right corner.");
        } else {
            System.out.println("No safe path exists to the bottom-right corner.");
        }
    }
}

