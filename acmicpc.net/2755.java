// 2755. 이번학기 평점은 몇점?
// 2019.09.03
// 입문용
import java.io.*;
import java.util.HashMap;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		HashMap<String, Float> scores = new HashMap<>();
		scores.put("A+", 4.3f);
		scores.put("A0", 4.0f);
		scores.put("A-", 3.7f);
		scores.put("B+", 3.3f);
		scores.put("B0", 3.0f);
		scores.put("B-", 2.7f);
		scores.put("C+", 2.3f);
		scores.put("C0", 2.0f);
		scores.put("C-", 1.7f);
		scores.put("D+", 1.3f);
		scores.put("D0", 1.0f);
		scores.put("D-", 0.7f);
		scores.put("F", 0.0f);

		int n = Integer.parseInt(br.readLine());

		int total = 0;
		float sum = 0.0f;
		for(int i=0;i<n;i++) {
			String s[] = br.readLine().split(" ");
			int x = Integer.parseInt(s[1]);
			Float y = Float.valueOf(scores.get(s[2]));
			total+=x;
			sum+=x*y;
		}
		System.out.printf("%.2f",sum/total);

	}
}
