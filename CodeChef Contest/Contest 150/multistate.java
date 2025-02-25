import java.util.*;
import java.lang.*;
import java.io.*;

public class multistate
{
    public static void sortArr(int[] arr, int n )
    {
        for(int i = 0 ; i < n - 1 ; i ++)
        {
            int index = i ; 
            for(int j = i+1 ; j < n ; j++)
            {
                if(arr[j] < arr[index] )
                {
                    index = j ;
                }
            }
            int temp = arr[i]; 
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t-- != 0)
		{
		    int n = sc.nextInt();
		    int k = sc.nextInt();
		    
		    int[] arr = new int[n];
		    
		    for (int i = 0 ; i < n ; i++) 
		    {
		        arr[i] = sc.nextInt();
		    }
		    
		    //sort the array:
		    sortArr(arr, n);
		        
		    int s = 0; 
		    int e = n - 1; 
		    
		    while(k-- != 0)
		    {
		        int min = arr[s]; 
		        System.out.println(min);
		        int max = arr[e];
		        System.out.println(max);
		        
		        
		        arr[s++] = -1;
		        arr[e] = min + max;
		        
		    }
		    
		    for(int i = s; i <= e; i++)
		    {
		        System.out.print(arr[i] + " ");
		    }
		    System.out.println();
		    
		}

	}
}
