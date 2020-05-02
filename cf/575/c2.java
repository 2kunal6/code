import java.util.*;


public class c2 {
	public static void main(String args[]) {	 
		Scanner in=new Scanner(System.in);
		int q=in.nextInt();
		while(q-->0) {
			int n=in.nextInt(), k=in.nextInt(), sum=0;
			int a[]=new int[n];
			List<Integer> ans=new ArrayList<Integer>();
			for(int i=0;i<n;i++) {
				a[i]=in.nextInt();
				sum+=a[i];
				if(i!=n-1 && sum%2==1 && ans.size()<k) {
					ans.add(i+1);
					sum=0;
				}
			}
			if(sum%2==1)ans.add(n);
			if(ans.size()==k) {
				System.out.println("YES");
				for(int anse:ans)System.out.print(anse+" ");
				System.out.println("");
			} else {
				System.out.println("NO");
			}
		}
	}
}
