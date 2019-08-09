// 13772. Holes
// 2019.08.09
// 입문용

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	// 각 알파벳의 hole 개수 저장
	static int alpa[] = { 1, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 };

	public static void main(String[] args) throws IOException {
		// BufferedReader 연습
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(bf.readLine()); // I

		for (int i = 0; i < n; i++) {
			String s = bf.readLine();

			int hole = 0;
			for (int j = 0; j < s.length(); j++) {
				if(s.charAt(j)!=' ') {
					hole+=alpa[s.charAt(j)-'A'];
				}
			}
			System.out.println(hole);
		}
	}
}
