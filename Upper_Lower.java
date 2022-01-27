import java.util.*;
class Upper_Lower
{
    public static void main(String[]args) {
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter String:: ");
        String s= sc.nextLine();
        System.out.println(s.toLowerCase());
        System.out.println(s.toUpperCase());
        sc.close();
        
    }
}