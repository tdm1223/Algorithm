// 4589. Gnome Sequencing
// 2019.08.18
// 문자열 처리, 영어 문제
import java.io.*;
import java.util.Arrays;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n = Integer.parseInt(br.readLine());
		System.out.println("Gnomes:");
		while (n-- > 0) {
			String strings[] = br.readLine().split(" ");
			int[] nums = Arrays.asList(strings).stream().mapToInt(Integer::parseInt).toArray();

			if((nums[0]<nums[1]&&nums[1]<nums[2])||(nums[0]>nums[1]&&nums[1]>nums[2])) {
				System.out.println("Ordered");
			}
			else {
				System.out.println("Unordered");
			}
		}
	}
}
