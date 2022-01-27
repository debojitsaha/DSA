import java.util.*;
public class Frequency1 {
    public static void main(String[]args) {
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter sting:: ");
        String s= sc.nextLine();
        int a[]= new int[26+26];
        for(int i=0;i<a.length;i++)
            a[i]=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(Character.isUpperCase(s.charAt(i)))
            {
                a[s.charAt(i)-65]++;
            }
            if(Character.isLowerCase(s.charAt(i)))
                a[s.charAt(i)-97+26]++;
        }

        int mx=0,pos=0;
        for(int i=0;i<a.length;i++)
        {
            if(mx<a[i])
            {   mx=a[i];
                pos=i;
            }
        }
        if(pos<26)
            pos+=65;
        else
            pos+=71;
        System.out.println("Character: "+(char)(pos));
        System.out.println("Max Frequency Value= "+mx);

        sc.close();        
    }
}
