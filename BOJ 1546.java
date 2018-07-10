//백준 온라인 저지 1546번 
import java.util.*;
import java.lang.*;
import java.io.*;

public class Main{
   public static void main (String[] args) throws java.lang.Exception
   {
      Scanner scan = new Scanner(System.in);
      double max = 0, sum = 0;
      final int n = scan.nextInt();
      double[] a = new double[n];
      
      for(int i=0; i<n; i++){
         a[i] = scan.nextInt();
         if(max < a[i]) max = a[i];
      }
      
      for(int i=0; i<n; i++){
         sum += a[i]/max*100;
      }
      System.out.printf("%.2f", sum/n);
      //System.out.println(sum/n);
   }
}
