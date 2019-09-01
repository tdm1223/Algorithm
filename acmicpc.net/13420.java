// 13420. 사칙연산
// 2019.09.01
// 문자열 처리
import java.io.*;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int t = Integer.parseInt(br.readLine());
		while (t-- > 0) {
			String s[] = br.readLine().split(" ");
			long a = Long.parseLong(s[0]);
			long b = Long.parseLong(s[2]);
			long c = Long.parseLong(s[4]);
			Boolean flag = false;
			switch (s[1]) {
			case "+":
				if (a + b == c) {
					flag = true;
				}
				break;
			case "-":
				if (a - b == c) {
					flag = true;
				}
				break;
			case "*":
				if (a * b == c) {
					flag = true;
				}
				break;
			case "/":
				if (a / b == c) {
					flag = true;
				}
				break;
			}
			if (flag) {
				System.out.println("correct");
			} else {
				System.out.println("wrong answer");
			}
		}
	}
}
