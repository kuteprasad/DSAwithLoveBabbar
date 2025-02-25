import java.util.*;
public class Q2002A {
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);

    System.err.println("Enter t:");
    int t = sc.nextInt();

    for (int i = 0; i < t; i++) {
        int[] arr = new int[3];

        System.err.println("Enter m, n, k:");
        for (int j = 0; j < 3; j++) {
            arr[j] = sc.nextInt();
        }

        int colors = Math.min(arr[0], arr[2]) * Math.min(arr[1], arr[2]);
        System.err.println(colors);


    }
    sc.close();

  }
}
