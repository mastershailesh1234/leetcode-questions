package code1;
import java.util.*;

public class Main {
	public static void main(String[] args) {
		int adult = 1000;
		int child = 650;
		Scanner scn = new Scanner(System.in);
		String s = scn.nextLine();
		String[] result = s.split(":");
		// int t = Integrer.parseInt(scn.nextLine);
		if(Integer.parseInt(result[1])<0){
			System.out.println("Give valid adults");
		}
		else if(Integer.parseInt(result[2])<0){
			System.out.println("Give valid children");
		}
		else if(Integer.parseInt(result[3])<=0){
			System.out.println("Give valid days");
		}
		else{
			int value = (Integer.parseInt(result[1])*adult + Integer.parseInt(result[2])*child)*Integer.parseInt(result[3]);
			System.out.println(result[0] + " your booking is confiremd and the total cost is "+ value );
		}
	}
}