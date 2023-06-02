package gjgfj;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		System.out.print("Enter a string: ");
		Scanner sc = new Scanner(System.in);
		String st = sc.nextLine();
		for(int i = st.length()-1;i>=0;i--) {
			System.out.print(st.charAt(i));
		
		}
		

	}

}
