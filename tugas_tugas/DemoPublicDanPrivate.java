class Contoh {
	 int a;
	 public int b;
	 private int c;
	 
	 public void setC(int nilai) {
		this.c = nilai;
	}
	
	public int getC() {
		return this.c;
	}
}
class DemoPublicDanPrivate {
	public static void main(String [] args){
		Contoh obj = new Contoh();
		
		obj.a = 10;
		obj.b = 20;
		obj.setC(30);
		
		System.out.println("nilai obj.a:" + obj.a);
		System.out.println("nilai obj.a:" + obj.b);
		System.out.println("nilai obj.a:" + obj.getC());

	}
}
