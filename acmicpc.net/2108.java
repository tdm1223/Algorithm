// 2108. 통계학
// 2019.08.21
// 정렬
import java.io.*;
import java.util.Arrays;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n = Integer.parseInt(br.readLine());
		int num[] = new int[n];
		int cnt[] = new int[8002];
		int max = -4001;
		int min = 4001;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			num[i] = Integer.parseInt(br.readLine());
			sum += num[i];
			cnt[num[i] + 4000]++;
			min = Math.min(min, num[i]);
			max = Math.max(max, num[i]);
		}
		Arrays.sort(num);
		// 산술평균 출력
		System.out.println(Math.round((float) sum / n));
		// 중앙값 출력
		System.out.println(num[n / 2]);
		// 최빈값 구하는 과정
		int maxCnt = 0;
		for (int i = 0; i <= 8000; i++) {
			maxCnt = Math.max(maxCnt, cnt[i]);
		}
		int bin = 0;
		int mode = 0;
		for (int i = 0; i <= 8000; i++) {
			if (cnt[i] == maxCnt) {
				mode = i;
				bin++;
			}
			if (bin == 2) {
				break;
			}
		}
		// 최빈값 출력
		System.out.println(mode - 4000);
		// 범위 출력
		System.out.println(max - min);
	}
}
