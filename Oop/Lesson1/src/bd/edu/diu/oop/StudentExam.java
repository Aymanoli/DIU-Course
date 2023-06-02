package bd.edu.diu.oop;

public class StudentExam {
	
	private int id;
	private String name;
	private int oop;
	private int cn;
	private int alg;
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getOop() {
		return oop;
	}
	public void setOop(int oop) {
		this.oop = oop;
	}
	public int getCn() {
		return cn;
	}
	public void setCn(int cn) {
		this.cn = cn;
	}
	public int getAlg() {
		return alg;
	}
	public void setAlg(int alg) {
		this.alg = alg;
	}
	
	public void show() {
		System.out.println("Student id :"+getId());
		System.out.println("StudentName :"+getName());
		System.out.println("Student OOP :"+getOop());
		System.out.println("Student CN :"+getCn());		
		System.out.println("Student ALG :"+getAlg());
		System.out.println("Student Total :"+(oop+cn+alg));
		System.out.println("Student AVG :"+(oop+cn+alg)/3);
	}
	

}
