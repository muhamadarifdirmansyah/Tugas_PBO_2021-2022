class kambing {
	private static String jenis_hewan = "kambing";
	private static int jumlah_tanduk = 2;
	
	public static String getJenishewan() {
		return jenis_hewan;
	}
	
	public static int getJumlahtanduk() {
		return jumlah_tanduk;
	}
	
	private static void bersuara() {
		System.out.println("Aku bersuara");
	}
	
	private static void berlari() {
		System.out.println("Aku berlari");
	}
	
	public static void main(String [] args) {
		System.out.println(
			String.format("Jenis hewan: %s", getJenishewan())
		);
		System.out.println(
			String.format("Jumlah tanduk: %s", getJumlahtanduk())
		);
		bersuara();
		berlari();
	}
}
