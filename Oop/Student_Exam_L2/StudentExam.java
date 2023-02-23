package test;

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
		System.out.println("Student id: "+getId());
		System.out.println("Student Name: "+getName());
		System.out.println("Mark in Oop: "+getOop());
		System.out.println("Mark in Cn: "+getCn());
		System.out.println("Mark in Alg: "+getAlg());
		System.out.println("Student Total: "+ (oop+cn+alg));
		System.out.println("Student Avg: "+ (oop+cn+alg)/3);
	}
	
	}


