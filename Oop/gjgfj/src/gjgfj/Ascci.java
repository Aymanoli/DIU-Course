package gjgfj;

import java.util.Scanner;

public class Ascci {

	public static void main(String[] args) {
		System.out.print("Enter a char: ");
		Scanner sc = new Scanner(System.in);
		char ch = sc.next().charAt(0);
		System.out.print((int)ch);

}
}
