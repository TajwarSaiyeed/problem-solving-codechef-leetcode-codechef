/*
    Author: Tajwar Saiyeed
    Date: 2025-01-11 18:31:53
    File: RaisingBacteria.java
*/

import java.util.Scanner;

public class RaisingBacteria {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int count = 0;
        while (x>0) {
            if ((x & 1) == 1) {
                count++;
            }
            x >>= 1;
        }
        System.out.println(count);
        sc.close();
    }
}