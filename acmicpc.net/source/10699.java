// 10699. 오늘 날짜
// 2019.09.06
// 출력
import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class Main {
	public static void main(String[] args) throws NumberFormatException, IOException {
		Date date = new Date();
		SimpleDateFormat formatDate = new SimpleDateFormat("yyyy-MM-dd");
		System.out.println(formatDate.format(date));
	}
}
