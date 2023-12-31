import java.util.*;

// Given a number n and its reverse r. Find that number raised to the power of its own reverse.
// Expected Time Complexity: O(LogN).
// Expected Auxiliary Space: O(LogN).

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int n = sc.nextInt();
	    int r = sc.nextInt();
	    
	    System.out.println(power(n,r));
	}
	
	public static long power(int N,int R)
    {
        if(R==0) return 1;
        
        long tmp = power(N,R/2)%1000000007;
        long square = (tmp*tmp)%1000000007;
        
        if(R%2==0) return square;
        else return (N*square)%1000000007;
        
    }
}
