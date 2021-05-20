package com.company;

import java.util.Scanner;

public class Main {
    public static Scanner in=new Scanner(System.in);
    public static void main(String[] args) {
      int[] arr=new int[10];
      int sum=0;
      for (int i=0;i<10;i++){
          System.out.println("enter "+ i+ " element ");
          arr[i]= in.nextInt();         //reading
      }


//      for (int i=0;i< arr.length;i++){
//          sum+=arr[i];          // sum
//      }


        for (int i :arr){       //for each
            sum+=i;
        }


        System.out.println("sum is "+sum);
    }
}
