// 15238. Pirates
// 2019.08.21
// 입문용, 영어 문제
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		String s = br.readLine();

		int alpa[] = new int[26];
		for (int i = 0; i < n; i++) {
			alpa[s.charAt(i) - 'a']++;
		}

		int max = -1;
		int idx=-1;
		for(int i=0;i<26;i++) {
			if(alpa[i]>max) {
				max= alpa[i];
				idx = i;
			}
		}
		System.out.println((char)(idx+'a')+" "+max);
	}
}
