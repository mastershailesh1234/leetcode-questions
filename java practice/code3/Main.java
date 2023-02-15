import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter the sentence");
		String s = scn.nextLine();
		int n = s.length();
		boolean valid = true;
		for(int i=0;i<n;i++){
			char ch = s.charAt(i);
			if(Character.isAlphabetic(ch)||ch==' '){
				continue;
			}
			else{
				valid=false;
				break;
			}
		}
		if(valid){
			String[] r = s.split(" ");
			int num = r.length;
			String ans = "";
			for(int i=0;i<num;i++){
				char arr[] = r[i].toCharArray();
				Arrays.sort(arr);
				ans = ans + new String(arr) + " ";
			}
			System.out.println(ans);
		}
		else{
			System.out.println(s + " is an invalid input");
		}
		
	}
}
