import java.util.Scanner;

public class B_Different_String{

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int t; t = sc.nextInt();
        sc.nextLine();


        while(t-- > 0){

            String s = sc.nextLine();
            boolean canMake = false;
            char[] sArray = s.toCharArray();
            
            String newString  = "";
            for(int i=1; i<sArray.length; i++){
                if(sArray[0]!=sArray[i]){
                    canMake = true;                   
                }
                  newString= newString + sArray[i];
            }

            if(!canMake) System.out.println("NO");
            else System.out.println("YES\n" + newString + sArray[0]);



        }

        sc.close();
    }

}