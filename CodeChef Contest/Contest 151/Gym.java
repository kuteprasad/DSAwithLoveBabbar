import java.util.*;
import java.lang.*;
import java.io.*;

public class Gym
{
    public static int solve(int d, int x, int y)
    {   
        if(x <= y)
        return 0; 
        
        int a = 1; 
        while(a <= y)
        {

            float y1 = y - a; 
            float num = 100 - (d * a);
            float div = (float) num / 100;
            System.out.println("num : " + num + " div : " + div);
            float x1 = x * div;

            System.out.println("y1 : "+ y1 + " x1 : " + x1 + " a : " + a);
            
            if(x1 <= y1)
            return a; 
            a++;
        }
        
        return -1; 
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		
        System.out.println("enter t: ");
		int t = sc.nextInt();
		
		while(t-- > 0)
		{
            System.out.println("enter d, x, y: ");
		    int d = sc.nextInt();
		    int x = sc.nextInt();
		    int y = sc.nextInt();
		    
            System.out.println("output: ");
		    System.out.println(solve(d, x, y));
		}
        sc.close();
	}
}
