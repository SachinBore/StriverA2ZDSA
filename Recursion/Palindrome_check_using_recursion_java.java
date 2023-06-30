import java.util.*;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    
	    String str = sc.nextLine();
	    
	    if(isPalindrome(str,0,str.length()-1)) System.out.println("Palindrome");
	    else System.out.println("Not a Palindrome");
	    
	}
	
	public static boolean isPalindrome(String str, int start, int end) {
	    
	    if(start >= end) return true;
	    return (str.charAt(start) == str.charAt(end) && isPalindrome(str,start+1,end-1));
	}
}
