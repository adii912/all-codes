import java.util.Scanner;
public class main {
    public static void main (String[] args){
        Scanner sc =new Scanner(System.in);
        int myNumber = (int)(Math.random()*100);
        int userNumber = 0;
        do {
            System.out.println("guess my number : ");
            int userNumber = sc.nextInt();
            if(userNumber == myNumber)

        }

    }
    
}
