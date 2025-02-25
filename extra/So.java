
import java.util.Scanner;

public class So {
    public int minBitFlips(int start, int goal) {
        int count = 0; 
        
        int xor = start ^ goal;
        System.out.println("xor : " + xor);
        
        while(xor != 0)
        {
            count += xor & 1 ; 
            System.out.println("xor ^ 0 : " + (xor  & 1));


            xor = xor >> 1; 
        }

        return count; 
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        So obj = new So();


        System.out.println(obj.minBitFlips(10, 7));
        sc.close();
    }
}