// 15813. 너의 이름은 몇 점이니?
// 2019.08.21
// 입문용
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		String s = br.readLine();

		int ans = 0;
		for(int i=0;i<n;i++) {
			ans+=s.charAt(i)-'A'+1;
		}
		System.out.println(ans);
	}
}
