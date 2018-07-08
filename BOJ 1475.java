//백준 온라인 저지 1475번 
import java.util.*;
import java.lang.*;
import java.io.*;

public class Main{
	public static void main (String[] args) 
	   {
			Scanner sc = new Scanner(System.in);
			int arr[] = new int[9];
			String[] num = sc.nextLine().split("");
			
			for(int i=0;i<num.length;i++){
				int index = Integer.parseInt(num[i]);
				index = index==9? 6:index;
				
				arr[index]++;	
			}
			
			arr[6] = arr[6]%2==0? arr[6]/2 : arr[6]/2+1; 
			
			
			int max=0;
			for(int i=0;i<arr.length;i++){
				if(arr[i]>max)
					max=arr[i];
			}
			System.out.println(max);
	   }
}
