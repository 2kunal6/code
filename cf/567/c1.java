import java.util.*;

public class c1 {
	public static void main(String args[]) {	 
		Scanner in=new Scanner(System.in);
		Long x=in.nextLong();
		Long y=in.nextLong();
		Long z=in.nextLong();

		System.out.print((x+y)/z+" ");
		if(((x/z)+(y/z))==((x+y)/z)) {
			System.out.println(0);
			return;
		}
		Long a=(z-(x%z))%z;
		Long b=(z-(y%z))%z;
		System.out.println(Math.min(a,b));
	}
}
