package hello;

import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

public class Main {

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Bank accounting = new Bank();
        accounting.setAcnum(100);
        accounting.setTitle("Shihab");
        accounting.setBalance(500);

        accounting.deposit(8500);
        accounting.withdraw(1500);

        try (PrintWriter writer = new PrintWriter(new FileWriter("output3.txt"))) {
            writer.println(accounting.toString());
            System.out.println("Output stored successfully.");
        } catch (IOException e) {
            e.printStackTrace();
        }

    }

}