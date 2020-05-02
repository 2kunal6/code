import java.util.*;

public class c1 {
	public static void main(String args[]) {	 
		Scanner in=new Scanner(System.in);
		int n,x,y;
		n=in.nextInt();
		x=in.nextInt();
		y=in.nextInt();
		int r[]=new int[n];
		for(int i=0;i<n;i++) {
			r[i]=in.nextInt();
		}
		boolean f=true;
		for(int i=0;i<n;i++) {
			f=true;
			for(int j=0;j<x;j++) {
				if(i-j-1>=0 && r[i]>=r[i-j-1]) {
					f=false;
				}
			}
			for(int j=0;j<y;j++) {
				if(i+j+1<n && r[i]>=r[i+j+1]) {
					f=false;
				}
			}
			if(f==true) {
				System.out.println(i+1);
				return;
			}
		}
		System.out.println(n);
	}
}
