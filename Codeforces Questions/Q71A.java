import java.util.*; 

public class Q71A {
    private static String solve(int len)
    {
        String res = "";
        while(len != 0)
        {
            int ans = len%10;
            len /= 10; 
            
            res = ans + res;
          
        }
        
        return res;
    }
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        
        System.out.println("Enter no. of words");
        int n = s.nextInt();
        s.nextLine();
        
        for(int i = 0 ; i < n; i++)
        {
            System.out.println("Enter word no. : " + i);
            String a = s.nextLine();
            int len = a.length();
            
            
            System.out.print("output : ");
            if(len <= 10)
            {
                System.out.println(a);
                continue;
            }
            
            String res = "" + a.charAt(0) + solve(len - 2) + a.charAt(len - 1);
            
            System.out.println(res);
            
        }

        s.close();
    }
}