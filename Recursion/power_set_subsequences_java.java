import java.util.*;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    
	    List<Integer> nums = new ArrayList<>();
	    int n = sc.nextInt();
	    for(int i=0; i<n; i++) {
	        nums.add(sc.nextInt());
	    }
	    
	    List<List<Integer>> subs = new ArrayList<>();
	    
	    int totalSubsequences = 1<<n;
	    
	    for(int mask = 0; mask < totalSubsequences; mask++) {
	        List<Integer> sub = new ArrayList<>();
	        for(int i=0; i<n; i++) {
	            if((mask&(1<<i)) > 0) {
	                sub.add(nums.get(i));
	            }
	        }
	        subs.add(sub);
	    }
	    
	    subs.forEach(e ->{
	        e.forEach(i->System.out.print(i+" "));
	        System.out.println();
	    });
	}
}
