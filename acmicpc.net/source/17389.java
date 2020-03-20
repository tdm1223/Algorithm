// 17389. 보너스 점수
// 2019.08.11
// 입문용

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(bf.readLine());
		String s = bf.readLine();

		int bonus = 0;
		int ans = 0;
		for (int i = 0; i < n; i++) {
      // 문제 틀렸으면 보너스 초기화
			if(s.charAt(i)=='X') {
				bonus=0;
			}else {
        // 문제 맞혔으면 점수 + 보너스 더하고 보너스 1증가
				ans+=(i+1)+bonus++;
			}
		}
		System.out.println(ans);
	}
}
