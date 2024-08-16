import java.util.Scanner;

public class C_Word_on_the_Paper{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t; t = sc.nextInt(); sc.nextLine();

        while(t-- > 0){

            String board = sc.nextLine();
            String word = "";

            for(int i=0; i<64; i++) if(board.charAt(i)!='.') word = word+board.charAt(i);

            System.out.println(word);

        }

        sc.close();
    }
}