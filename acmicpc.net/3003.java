// 3003. 킹, 퀸, 룩, 비숍, 나이트, 폰
// 2019.08.26
// 입문용
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		String s[] = br.readLine().split(" ");
		int cnt[] = new int[s.length];
		for(int i=0;i<s.length;i++) {
			cnt[i]=Integer.parseInt(s[i]);
		}

		cnt[0]=1-cnt[0];
		cnt[1]=1-cnt[1];
		cnt[2]=2-cnt[2];
		cnt[3]=2-cnt[3];
		cnt[4]=2-cnt[4];
		cnt[5]=8-cnt[5];
		for(int i=0;i<cnt.length;i++) {
			System.out.print(cnt[i]+" ");
		}
	}
}
