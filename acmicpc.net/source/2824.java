// 2824. 최대공약수
// 2019.08.28
// 수학
import java.io.*;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n = Integer.parseInt(br.readLine());
		String s[] = br.readLine().split(" ");
		BigInteger a = new BigInteger("1");
		for(int i=0;i<s.length;i++)
		{
			a = a.multiply(new BigInteger(s[i]));
		}

		int m = Integer.parseInt(br.readLine());
		String s2[] = br.readLine().split(" ");
		BigInteger b = new BigInteger("1");
		for(int i=0;i<s2.length;i++)
		{
			b = b.multiply(new BigInteger(s2[i]));
		}

		BigInteger ans = gcd(a,b);
		String k = ans.toString();
		if(k.length()>9) {
			System.out.println(k.substring(k.length()-9));
		}else {
			System.out.println(k);
		}
	}

	private static BigInteger gcd(BigInteger a, BigInteger b) {
		BigInteger c = new BigInteger("0");
		if(b.compareTo(c)==0)
		{
			return a;
		}
		return gcd(b,a.mod(b));
	}
}
