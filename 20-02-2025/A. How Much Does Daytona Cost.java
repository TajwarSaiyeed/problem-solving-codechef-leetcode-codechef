
import java.util.Scanner;

public class A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        while (tc-- > 0) {
            int n, k;
            n = sc.nextInt();
            k = sc.nextInt();

            int[] a = new int[n];

            boolean flag = false;
            for (int i = 0; i < n; ++i) {
                a[i] = sc.nextInt();

                if (a[i] == k) {
                    flag = true;
                }
            }

            // for (int item : a) {
            //     System.out.println(item);
            // }
            if (flag) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
