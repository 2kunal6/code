import java.util.*;

public class c1 {
	public static void main(String args[]) {	 
		Scanner in=new Scanner(System.in);
		int n=in.nextInt(),ans=0;
		int a[]=new int[26];
		for(int i=0;i<n;i++) {
			a[in.next().charAt(0)-'a']++;
		}
		for(int i=0;i<26;i++) {
			ans+=((a[i]%2)*(a[i]/2));
			int te=a[i]/2;
			for(int j=0;j<te;j++)ans+=(2*j);
		}
		System.out.println(ans);
	}
}
