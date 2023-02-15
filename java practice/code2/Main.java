package code2;
import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int n = Integer.parseInt(scn.nextLine());
		if(n<=1){
			System.out.println("Invalid input");
		}
		else{
			String team="";
			double ans=-1;
			boolean check = true;
			for(int i=0;i<n;i++){
				String s = scn.nextLine();
				String[] r = s.split(":");
				double a = Double.parseDouble(r[1]);
				double b = Double.parseDouble(r[2]);
				double c = Double.parseDouble(r[3]);
				double d = Double.parseDouble(r[4]);
				if(a<1||b<1||c<1||d<1){
					check = false;
					break;
				}
				else{
					double num = a+b+c+d;
					if(ans==-1||num<ans){
						ans=num;
						team = r[0];
					}
				}
			}
			if(check){
				Formatter fm=new Formatter();
				fm.format("%.2f", ans);
				System.out.println(team + " team wins the race in " + fm);
				fm.close();
			}
			else{
				System.out.println("Invalid number");
			}
		}
	}
}