// 10757. 큰 수 A+B
// 2019.09.06
// 수학, 사칙연산
import java.io.*;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String s[] = br.readLine().split(" ");
    // library BigInteger 사용
		BigInteger a = new BigInteger(s[0]);
		BigInteger b = new BigInteger(s[1]);
		System.out.println(a.add(b));
	}
}
