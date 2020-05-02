import java.util.*;
import java.lang.Math;

public class c3 {
	public static void main(String args[]) {	 
		Scanner in=new Scanner(System.in);
		int n=in.nextInt();
		Long h1[]=new Long[n];
		Long h2[]=new Long[n];
		for(int i=0;i<n;i++)h1[i]=in.nextLong();
		for(int i=0;i<n;i++)h2[i]=in.nextLong();
		Long pp=Math.max(h1[0], h2[0]);
		Long pu=h1[0],pd=h2[0];
		if(n>1) {
			pu+=h2[1];
			pd+=h1[1];
		}
		for(int i=2;i<n;i++) {
		//System.out.println(pp+" "+pu+" "+pd);
			Long tpu=pu,tpd=pd;
			if(i%2==0) {
				pu=h1[i]+Math.max(pp,pu);
				pd=h2[i]+Math.max(pp,pd);
			} else {
				pu=h2[i]+Math.max(pp,pu);
				pd=h1[i]+Math.max(pp,pd);
			}
			pp=Math.max(tpu,tpd);
		}
		System.out.println(Math.max(pp,Math.max(pu,pd)));
	}
}
