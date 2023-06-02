package bd.edu.diu.cis;

import java.io.FileWriter;
import java.io.IOException;

public class TestB {

	public static void main(String[] args) {
		String data=" Kamrul is average boy ";
		
		try {
			
			FileWriter writer=new FileWriter("Testb.txt",true);
		writer.write(data);
		writer.close();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		

	}

}
