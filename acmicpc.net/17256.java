// 17256. 달달함이 넘쳐흘러
// 2019.08.08
// 입문용

import java.util.Scanner;

public class Main {


	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int ax= in.nextInt();
		int ay= in.nextInt();
		int az= in.nextInt();
		int cx= in.nextInt();
		int cy= in.nextInt();
		int cz= in.nextInt();

		System.out.println((cx-az)+" "+(cy/ay)+" "+(cz-ax));
		in.close();
	}

}
