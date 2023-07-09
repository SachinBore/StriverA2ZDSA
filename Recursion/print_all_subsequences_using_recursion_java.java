import java.util.*;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    
	    List<Integer> nums = new ArrayList<Integer>();
	    int n = sc.nextInt();
	    for(int i=0; i<n; i++) {
	        nums.add(sc.nextInt());
	    }
	    
	    List<List<Integer>> subs = new ArrayList<>();
	    List<Integer> sub = new ArrayList<>();
	    
	    solve(0,nums,sub,subs);
	    
	    subs.forEach(e ->{
	        e.forEach(i->System.out.print(i+" "));
	        System.out.println();
	    });
	}
	
	public static void solve(int idx, List<Integer> nums, List<Integer> sub, List<List<Integer>> subs) {
	    
	    if(idx >= nums.size()) {
	        subs.add(new ArrayList<>(sub));
	        return;
	    }
	    
	    solve(idx+1,nums,sub,subs);
	    sub.add(nums.get(idx));
	    solve(idx+1,nums,sub,subs);
	    sub.remove(sub.size()-1);
	}
}
