package bd.edu.diu;

public class Circle extends Shape {
	/**
	 * @return the r
	 */
	private double radius;
	
	
	
	
	
	
	/**
	 * @return the radius
	 */
	public double getRadius() {
		return radius;
	}

	/**
	 * @param radius the radius to set
	 */
	public void setRadius(double radius) {
		this.radius = radius;
	}

	public void  show() {
		System.out.println(" Circle");
		super.show();
	}

	@Override
	public void cal() {
		setArea(radius*radius*3.147);
	}
	
	
	
	
}
