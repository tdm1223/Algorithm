// 2338. 긴자리 계산
// 2019.01.07
// 수학
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String a1 = br.readLine();
		String b1 = br.readLine();

		BigInteger a = new BigInteger(a1);
		BigInteger b = new BigInteger(b1);

		System.out.println(a.add(b));
		System.out.println(a.subtract(b));
		System.out.println(a.multiply(b));
	}
}
