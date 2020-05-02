import java.util.*;
import java.lang.Math;

public class c3 {
	public static void main(String args[]) {	 
		Scanner in=new Scanner(System.in);
		int n=in.nextInt(), I=in.nextInt();
		int a[]=new int[k];
		for(int i=0;i<n;i++)a[i]=in.nextInt();
		int mink=n;
		for(int i=n;i>0;i++) {
			if(mink<=Math.pow(2,(8*I)/n)) {
				mink=i;
			} else {
				break;
			}
		}
		Arrays.sort(a);
		int l=0,r=0,dis=1,ans=0;
		for(int i=1;i<n;i++) {
			if(a[i]!=a[i-1])dis++;
			if(dis==mink) {
				r=i+1;
				ans=n-r;
			}
		}
		while(r<n) {
			if(a[r]==a[r+1])continue;
			while(l<=r && a[l]==a[l+1])l++;
			l++;
			ans=Math.min(ans,i+n-r-1);
		}
		while(l<=r && a[)
	}
}
