// 7600. 문자가 몇갤까
// 2019.09.06
// 문자열 처리
import java.io.*;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		while (true) {
			String s = br.readLine();
			int alpa[] = new int[26];
			s = s.toLowerCase();
			if (s.equals("#")) {
				break;
			}
			for (int i = 0; i < s.length(); i++) {
				if (s.charAt(i) >= 'a' && s.charAt(i) <= 'z') {
					alpa[s.charAt(i) - 'a']++;
				}
			}

			int ans = 0;
			for (int i = 0; i < 26; i++) {
				if (alpa[i] > 0) {
					ans++;
				}
			}
			System.out.println(ans);
		}

	}
}
