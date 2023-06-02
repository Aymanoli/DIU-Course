package bd.edu.diu;

public abstract  class Shape {
	
	private double area;

	/**
	 * @return the area
	 */
	public double getArea() {
		return area;
	}

	/**
	 * @param area the area to set
	 */
	public void setArea(double area) {
		this.area = area;
	}
	
	public  abstract void cal() ;
	
	public void show() {
		System.out.println("Area "+getArea());
	}

}
