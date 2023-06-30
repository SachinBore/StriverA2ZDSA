
import java.util.*;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		for(int i=0; i<n; i++) {
            for(int j=0; j<n-i-1; j++) {
                System.out.print(" ");
            }
            
            char ch = 'A';
            for(int j=0; j<2*i+1; j++) {
                
                System.out.print(ch);
                if(j < (2*i+1)/2) ch++;
                else ch--;
            }
            
            System.out.println();
        }
	}
}
