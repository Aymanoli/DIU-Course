package bd.edu.diu;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Shape s;
		
		
		Circle c=new Circle();
		c.setRadius(10);;
		
		s=c;
		s.cal();
		s.show();

		Ractangle r=new Ractangle();
		r.setWidth(10);
		r.setHeight(20);;
		s=r;
		s.cal();
		s.show();
		
			
	}

}
