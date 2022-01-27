import java.util.*;
public class String_Compression {
    public static void main(String[]args) {
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter String:: ");
        String s= sc.nextLine();
        String x="";
        for(int i=1;i<s.length();i++)
        {
            if(s.charAt(i-1)!=s.charAt(i))
                x+=s.charAt(i-1);
        }
        x+=s.charAt(s.length()-1);
        System.out.println("Compressed String:: "+x);
        sc.close();        
    }
}
