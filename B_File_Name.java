import java.util.Scanner;

// Code By: LAHCSIN



public class B_File_Name{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n; n = sc.nextInt(); sc.nextLine();

        String name = sc.nextLine();
        int totalX = 0, removeCount=0;

        for(int i=0; i<n; i++){
            if(name.charAt(i)=='x'){
                totalX++;
                if(totalX>2) removeCount++;
            }else{
                totalX = 0;
            }
        }

        System.out.println(removeCount);
        
        sc.close();
    }

    


}