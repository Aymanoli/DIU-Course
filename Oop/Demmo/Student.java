
public class Student {
	
		int roll;
		String name;
		String city;
		Student(int roll, String name, String city){
			this.roll = roll;
			this.name = name;
			this.city = city;
		}
		
		
		public String toString(){
			return roll+" "+name+" "+city;
		}
		
		public static void main(String[] args) {
			Student s1 = new Student(101,"DIU","Savar");
			System.out.println(s1);
	}

}
