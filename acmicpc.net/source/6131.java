// 6131. 완전 제곱수
// 2019.08.16
// 수학

import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n = Integer.parseInt(br.readLine());

		int ans = 0;
		for (int i = 1; i <= 1000; i++)
		{
			for (int j = 1; j <= 1000; j++)
			{
				if (i*i + n == j * j)
				{
					ans++;
				}
        // 시간 초과를 방지하기 위해 차이가 n을 초과하면 중단함
				if (i*i + n < j*j)
				{
					break;
				}
			}
		}
		System.out.println(ans);
	}
}
