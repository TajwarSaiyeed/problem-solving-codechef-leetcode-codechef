/*
    Author: Tajwar Saiyeed
    Date: 2025-01-14 19:06:13
    Problem: BigAchiever.java
*/

import java.util.*;

public class BigAchiever {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int tc;
        tc = sc.nextInt();
        while (tc-- > 0) {
            byte n, x;
            n = sc.nextByte();
            byte mx = -1;
            for (byte i = 0; i < n; i++) {
                x = sc.nextByte();
                if (x > mx) {
                    mx = x;
                    System.out.print(1);
                } else {
                    System.out.print(0);
                }
                if (i < n - 1) {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        sc.close();
    }
}