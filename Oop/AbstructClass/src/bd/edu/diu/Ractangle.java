package bd.edu.diu;

public class Ractangle extends Shape{
	
	private double width;
	private double height;
	/**
	 * @return the width
	 */
	public double getWidth() {
		return width;
	}
	/**
	 * @param width the width to set
	 */
	public void setWidth(double width) {
		this.width = width;
	}
	/**
	 * @return the height
	 */
	public double getHeight() {
		return height;
	}
	/**
	 * @param height the height to set
	 */
	public void setHeight(double height) {
		this.height = height;
	}
	@Override
	public void cal() {
	setArea(height*getWidth());
		
	}
	
	public void  show() {
		System.out.println(" Ractangle");
		super.show();
	}

}
