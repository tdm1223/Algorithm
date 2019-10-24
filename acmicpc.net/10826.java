// 10826. 피보나치 수 4
// 2019.10.24
// 수학
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		BigInteger d[] = new BigInteger[10001];
		d[0] = new BigInteger("0");
		d[1] = new BigInteger("1");
		for (int i = 2; i <= n; i++) {
			d[i] = d[i - 1].add(d[i - 2]);
		}
		System.out.println(d[n]);
	}
}
