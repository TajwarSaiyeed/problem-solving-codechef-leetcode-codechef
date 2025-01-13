/*
    Author: Tajwar Saiyeed
    Date: 13th January, 2025
    Problem: Medium Number
 */

import java.util.Arrays;
import java.util.Scanner;

public class MediumNumber {
    public static void main(String args[]) {
        int tc;
        Scanner sc = new Scanner(System.in);
        tc = sc.nextInt();

        while(tc-- > 0) {
            int[] arr = new int[3];
            for(int i = 0; i < 3; i++) {
                arr[i] = sc.nextInt();
            }
            Arrays.sort(arr);
            System.out.println(arr[1]);
        }

        sc.close();
    }
}