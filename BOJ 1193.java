//백준 온라인 저지 1193번 분수 찾기
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		int min = 0, max = 1, i = 1;

		while (true) {
			if (min < x && x <= max) {
				int index = x-min;
				if (i % 2 == 0) {
					System.out.println(index + "/" + (i - index + 1));
				} else {
					System.out.println((i - index + 1) + "/" + index);
				}
				break;
			} 
			i++;
			
			min = max;
			max += i;
		}
	}
}
