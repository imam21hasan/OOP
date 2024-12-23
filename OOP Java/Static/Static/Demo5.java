package Static;

import java.util.Scanner;

public class Demo5 {

    static String name;
    static int id;

    static {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter name : ");
        String n = sc.nextLine();
        System.out.print("Enter ID : ");
        int i = sc.nextInt();

        name = n;
        id = i;
    }

    static void show() {
        System.out.println(name + "\t" + id);
    }

    public static void main(String[] args) {

        Demo5.show();
        System.out.println("Enter anything : ");
    }
}
