package hello;

public class Bank {
    private int acnum;
    private String title;
    private double balance;

    public int getAcnum() {
        return acnum;
    }
    public void setAcnum(int acnum) {
        this.acnum = acnum;
    }
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


    public void deposit(double ammount) {
        balance+=ammount;
    }

    public void withdraw(double ammount) {
        balance-=ammount;
    }


    @Override

    public String toString() {
        return "Account Number=" + acnum +
        "\nAccount Title=" + title +
        "\nCurrent Balance=" + balance;
    }




}