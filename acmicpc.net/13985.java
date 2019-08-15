// 13985. Equality
// 2019.08.13
// 문자열 처리, 영어 문제

import java.io.*;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] expression = in.readLine().split(" ");

		int a = Integer.parseInt(expression[0]);
		int b = Integer.parseInt(expression[2]);

		int c = Integer.parseInt(expression[4]);

		if (a + b == c) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}
	}
}
