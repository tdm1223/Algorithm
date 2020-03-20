// 8741. 두문자어
// 2019.11.03
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Solution {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());
		for (int testCase = 1; testCase <= t; testCase++) {
			String s[] = br.readLine().split(" ");
			System.out.print("#" + testCase + " ");
			for (int i = 0; i < s.length; i++) {
				System.out.print((char) (s[i].charAt(0) - 'a' + 'A'));
			}
			System.out.println();
		}

	}

}
