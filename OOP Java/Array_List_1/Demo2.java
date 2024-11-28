
package Array_List_1;

import java.util.ArrayList;
import java.util.Scanner;

public class Demo2 {
    public static void main(String[] args) {
        ArrayList<Integer> ob=new ArrayList<>();
        Scanner sc=new Scanner(System.in);
    
        System.out.print("Enter arraylist elements : ");
        for(int i=0;i<5;i++)
        {
            int n=sc.nextInt();
            ob.add(n);
        }
        System.out.println("The arraylist elements :"+ob);
    }
}
