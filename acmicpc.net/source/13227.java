// 13227. 큰 수 곱셈
// 2019.08.07
// 수학
import java.util.Scanner;
import java.math.BigInteger;

public class Main {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String str = in.nextLine();
		String ss[] = str.split(" ");
		BigInteger A = new BigInteger(ss[0]);
		BigInteger B = new BigInteger(ss[1]);

		System.out.println(A.multiply(B));
		in.close();
	}

}
