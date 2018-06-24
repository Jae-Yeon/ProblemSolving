//백준 온라인 저지 1157번 단어 공부
import java.util.*;
import java.lang.*;
import java.io.*;

public class Main{
	public static void main (String[] args) 
	   {
			Scanner sc = new Scanner(System.in);
			int a[] = new int[26];
			String s = sc.nextLine().toUpperCase();
			
			for(int i=0;i<s.length();i++){
				a[s.charAt(i)-65]++;
			}
			
			int max=0,maxIndex=0;
			for(int i=0;i<a.length;i++){
				if(a[i]>max){
					max=a[i];
					maxIndex=i+65;
				}
				else if(a[i]==max)
					maxIndex=-1;
			}
			System.out.print(maxIndex==-1? "?" : (char)maxIndex);	
			 
	   }
}
