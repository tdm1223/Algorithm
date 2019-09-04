// 4606. The Seven Percent Solution
// 2019.09.04
// 문자열 처리, 영어 문제
import java.io.*;
import java.util.HashMap;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		while (true) {
			String s = br.readLine();
			if (s.equals("#")) {
				break;
			}

			for (int i = 0; i < s.length(); i++) {
				switch (s.charAt(i)) {
				case ' ':
					System.out.print("%20");
					break;
				case '!':
					System.out.print("%21");
					break;
				case '$':
					System.out.print("%24");
					break;
				case '%':
					System.out.print("%25");
					break;
				case '(':
					System.out.print("%28");
					break;
				case ')':
					System.out.print("%29");
					break;
				case '*':
					System.out.print("%2a");
					break;
				default:
					System.out.print(s.charAt(i));
					break;
				}
			}
			System.out.print("\n");
		}
	}
}
