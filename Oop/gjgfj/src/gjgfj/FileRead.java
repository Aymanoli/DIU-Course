package gjgfj;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.time.DayOfWeek;
import java.util.Scanner;

public class FileRead {

	public static void main(String[] args) throws IOException {
Scanner sc=new Scanner(System.in);
		
		try {
			FileWriter fw=new FileWriter("C:\\Users\\DIU\\Desktop\\demo.txt");

		/*	for(int i=0;i<10;i++) {
				String a=sc.nextLine();
				fw.write(a);
				fw.write("\n");
			}
		*/	
			fw.close();
		} catch (IOException e) {
						e.printStackTrace();
		}
		String s;
		BufferedReader bufferedReader = new BufferedReader(new FileReader("C:\\Users\\DIU\\Desktop\\demo.txt"));
		while((s=bufferedReader.readLine())!=null) {
			System.out.println(s);
		}
		bufferedReader.close();	
		
		
	}

}
