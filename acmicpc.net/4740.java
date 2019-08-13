// 4740. 거울, 오! 거울
// 2019.08.13
// 문자열 처리

import java.io.*;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
		while (true) {
			String s = input.readLine();
			if (s.equals("***")) {
				break;
			}
			for (int i = s.length() - 1; i >= 0; i--) {
				System.out.print(s.charAt(i));
			}
			System.out.println();
		}
	}
}
