// 9093. 단어 뒤집기
// 2019.08.17
// 문자열 처리

import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());
		while (t-- > 0) {
			String[] s = br.readLine().split(" ");
			for (int i = 0; i < s.length; i++) {
				System.out.print(new StringBuilder(s[i]).reverse().toString()+" ");
			}
			System.out.println();
		}
	}
}
