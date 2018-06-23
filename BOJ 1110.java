//백준 온라인 저지 1110번 더하기 싸이클
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		int count=1;
		int a=n/10;
		int b=n%10;
		while(true)
		{
			if(n==b*10+(a+b)%10) break;
			else {
				int temp = a;
				a = b;
				b = (temp+b)%10;
				count++;
			}
		}
		System.out.print(count);
	}
}
