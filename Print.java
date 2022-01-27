import java.util.*;
class Print
{
    public static void main(String[]args) {
        System.out.println("Hello");
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter limit:: ");
        int x= sc.nextInt();
        for(int i=1;i<=x;i++)
         System.out.print(i+" ");
        System.out.println();
        sc.close();
    }
}