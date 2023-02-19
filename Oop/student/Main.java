package bd.edu.diu;

import java.util.Date;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Welcome diu");
		System.out.println(new Date());
		Account account= new Account();
		account.setAccountNumber(1000);
		account.setTitle("Test");
		account.setBalance(2000);
		account.deposit(5000);
		account.withdrow(500);
		System.out.println("Account Number: " +account.getAccountNumber());
//		System.out.print("balance");
		System.out.println(account.getTitle());		
		System.out.println("Balance: "+ account.getBalance());
	}
}
