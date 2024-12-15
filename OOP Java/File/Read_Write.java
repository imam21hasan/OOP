package File;

import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.Scanner;

public class Read_Write {

    public static void main(String[] args) {
        try {
            File fol = new File("D:\\Java OOP File\\Folder1");  // for creating folder
            fol.mkdir();

            File file = new File("D:\\Java OOP File\\Folder1\\File1.txt");  // for creating file
            file.createNewFile();

            //var fw=new FileWriten("D:\\Java OOP File\\Folder1\\File1.txt");
            FileWriter fw = new FileWriter("D:\\Java OOP File\\Folder1\\File1.txt");  // for write
            fw.write("I love my country Bangladesh");
            fw.close();

            File fr=new File("D:\\Java OOP File\\Folder1\\File1.txt");  // for read
            Scanner sc=new Scanner(fr);
            System.out.println(sc.nextLine());
            sc.close();
            
            /*FileReader fr = new FileReader("D:\\Java OOP File\\Folder1\\File1.txt");
            int i;
            while ((i = fr.read()) != -1) {
                System.out.print((char) i);
            }
            fr.close();*/

            System.out.println("\n" + "File Location => " + file.getAbsoluteFile());  // for location check.
            System.out.println();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
