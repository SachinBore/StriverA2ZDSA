
import java.util.*;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		char ch = (char)('A' + (n-1));
		
        for(int i=0; i<n; i++) {
            
            for(char c = (char)(ch-i); c <= ch; c++) {
                System.out.print(c+" ");
            }
            System.out.println();
        }
	}
}
