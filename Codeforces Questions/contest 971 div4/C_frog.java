import java.util.*;

public class C_frog {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // System.out.println("enter t");
        int t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            // System.out.println("enter x, y, k: ");

            int x = sc.nextInt();
            int y = sc.nextInt();
            int d = sc.nextInt();
            int moves = 0;

            // previous code...
            // while (true) {
            // int a = x / d;
            // int b = y / d;

            // moves += Math.max(a, b) * 2;
            // // System.err.println(moves);

            // if (x % d == 0 && y % d == 0 && x > y)
            // moves -= 1;

            // x %= d;
            // y %= d;

            // d = Math.max(x, y);

            // if (x == 0 && y == 0)
            // break;
            // }

            // code 2
            if (x > y)
                moves -= 1;
            int a = Math.max(x, y);

            int b = a / d;

            moves += b * 2;
            a = a % d;

            if (a != 0)
                moves += 2;

            System.out.println(moves);

        }
        sc.close();
    }
}
