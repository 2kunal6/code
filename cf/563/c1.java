import java.util.*;

public class c1 {
	public static void main(String args[]) {	 
		Scanner in=new Scanner(System.in);
		int n=in.nextInt();
		int a[]=new int[2*n];
		for(int i=0;i<2*n;i++)a[i]=in.nextInt();
		Arrays.sort(a);
		int ps=0,ns=0;
		for(int i=0;i<n;i++)ps+=a[i];
		for(int i=n;i<2*n;i++)ns+=a[i];
		if(ps==ns)System.out.println(-1);
		else {
			for(int i=0;i<2*n;i++)System.out.print(a[i]+" ");
		}
	}
}
