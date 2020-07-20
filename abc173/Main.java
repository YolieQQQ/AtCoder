import java.util.*;

import javax.print.event.PrintJobListener;

public class Main {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> A = new ArrayList<Integer>();
        Collections.sort(A);
        for(int i=0; i<n; i++) {
            A.add(sc.nextInt());
        }
        System.out.println(A);
    }
}