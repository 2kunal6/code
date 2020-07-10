import java.util.*;

public class Main {
	public static void main(String args[]) {	 
		Scanner in=new Scanner(System.in);
		int n = in.nextInt();
		while(n-- > 0) {
			long a=in.nextLong();
			long b=in.nextLong();
			long c=in.nextLong();
			System.out.println((a+b+c)/2);
		}
	}
}
