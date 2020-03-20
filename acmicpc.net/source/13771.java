// 13771. Presents
// 2019.08.09
// 입문용

import java.util.Arrays;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int n = in.nextInt();

		float[] arr = new float[n];

		for(int i=0;i<n;i++){
			arr[i]=in.nextFloat();
		}
    // 정렬
		Arrays.sort(arr);
    // 2번째로 작은수 format 맞춰서 출력
		System.out.format("%.2f%n", arr[1]);
		in.close();
	}

}
