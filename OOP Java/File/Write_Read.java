package File;

import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
//import java.util.Formatter;
import java.util.Scanner;

public class Write_Read {

    public static void main(String[] args) {

        try {
            FileWriter fw = new FileWriter("D://Java OOP File//Folder//File1.txt");
            //Formatter fw = new Formatter("D:\\Java OOP File\\Folder\\File1.txt");
            fw.write("CSE-CSTU ");
            Scanner sc = new Scanner(System.in);

            System.out.print("Enter a number : ");
            int n = sc.nextInt();
            for (int i = 0; i <= n; i++) {
                System.out.print("Write your object : ");
                String st = sc.nextLine();
                //System.out.print("Write your object : ");
                fw.write(st);
            }

            /*String n=sc.nextLine();
            fw.write(n);*/
            fw.close();

            File fr=new File("D://Java OOP File//Folder//File1.txt");
            Scanner s=new Scanner(fr);
            //System.out.println(s.nextLine());
            System.out.println("Read Part : "+s.nextLine());
            s.close();
            
            //or
            /*FileReader fr = new FileReader("D://Java OOP File//Folder//File1.txt");
            int i;
            while ((i = fr.read()) != -1) {
                System.out.print((char) i);
            }
            System.out.println();
            fr.close();*/
                    

        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
