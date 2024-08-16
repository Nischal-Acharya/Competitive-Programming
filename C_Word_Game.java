import java.util.*;
import java.io.*;

/*
    CODE BY: LAHCSIN
*/

public class C_Word_Game {

    // Constants
    static final int MOD = 1_000_000_007;
    static final double EPS = 1e-9;

    public static void solve(Scanner sc) {

        int pointA=0, pointB=0, pointC=0;
        
        int num = sc.nextInt(); sc.nextLine();

        String[] playerA = new String[num];
        String[] playerB = new String[num];
        String[] playerC = new String[num];




        // Input for player A
        for(int i=0; i<num; i++){
            playerA[i] = sc.nextLine();
        }
        
        // Input for player B
        for(int i=0; i<num; i++){
            playerB[i] = sc.nextLine();
        }

        // Input for player C
        for(int i=0; i<num; i++){
            playerC[i] = sc.nextLine();
        }


        for(int i=0; i<num; i++){
            System.out.println(playerA[i]);
        }


    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            solve(sc);
        }
        sc.close();
    }
}