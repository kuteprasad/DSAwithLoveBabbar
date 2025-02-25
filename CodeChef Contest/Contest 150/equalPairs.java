import java.util.*;
import java.lang.*;
import java.io.*;

public class equalPairs {
    

    public static int cal(int value)
    {
        if(value == 1) return 0; 
        return ((value*(value - 1)) / 2);
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t-- != 0 )
		{
		    int n = sc.nextInt();
		    Map<Integer, Integer> mp = new HashMap<>();
		    int zeros = 0; 
		    int mci = 0; 
            int maxValue = 0 ; 
            boolean allzeros = true;
		    
		    for(int i = 0 ; i < n ;i++)
		    {
		        int a = sc.nextInt();
		        
                if(a != 0)
                allzeros = false;
		        
		            int v = mp.getOrDefault(a, 0);
		            mp.put(a, v+1);
		            if(mp.get(a) > maxValue)
		            {
		                maxValue = mp.get(a);
                        mci = a; 
		            }
		        
		        
		    }
            // System.err.println(zeros);
		    
		    int count = 0; 

            if(allzeros)
            {
                count+=cal(mp.get(0));
                System.out.println(count);
                continue;
            }

           
            zeros = mp.getOrDefault(0, 0);
            
		    
            int v = mp.get(mci);
            mp.put(mci, v+zeros);
            System.err.println("mp: " + mp.get(mci));
            

		    for(Map.Entry<Integer, Integer> entry : mp.entrySet())
		    {
                
		        int key = entry.getKey();
                System.err.println("key: " + key);
                
                if(key == 0)
                {
                    continue;
                }
		        
                
                int value = entry.getValue();
                System.err.println("value: " + value);

		        
                count+=cal(value);
		        
		    }
		    
		    System.out.println(count);
		    
		    
		}

	}

}
