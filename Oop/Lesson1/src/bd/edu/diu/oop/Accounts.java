package bd.edu.diu.oop;

public class Accounts {
	
	private int number;
	private String tittle;
	private double balance;
	
	
	public int getNumber() {
		return number;
	}
	public void setNumber(int number) {
		this.number = number;
	}
	public String getTittle() {
		return tittle;
	}
	public void setTittle(String tittle) {
		this.tittle = tittle;
	}
	public double getBalance() {
		return balance;
	}
	public void setBalance(double balance) {
		this.balance = balance;
	}
	
public void deposite (double amount) {
	balance+=amount;
}
public void withdrown (double amount) {
	balance-=amount;
	
}

public void show() {
	
System.out.println("Account Number "+getNumber());
System.out.println("Account Title "+getTittle());
System.out.println("Account balance "+getBalance());
System.out.println("------------------------------");
}

}
