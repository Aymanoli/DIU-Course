package bd.edu.diu;

public class Account {
	private int accountNumber;
	private String title;
	private double balance;
	public int getAccountNumber() {
		return accountNumber;
	}
//	public void setAccountNumber1(int accountNumber) {
//		this.accountNumber = accountNumber;
//	}
	public String getTitle() {
		return title;
	}
	public void setTitle(String title) {
		this.title = title;
	}
	public double getBalance() {
		return balance;
	}
	public void setBalance(double balance) {
		this.balance = balance;
	}
	public void deposit(double amount) {
		balance+=amount;
	}
	public void withdrow(double amount) {
		balance-=amount;
	}
	public void setAccountNumber(int accountNumber) {
		this.accountNumber = accountNumber;
	}
//	public void setSaving(int i) {
//		// TODO Auto-generated method stub
//		
//	}
}
