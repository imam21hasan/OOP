
package File;

import java.io.File;

public class Folder_File_Create {
    public static void main(String[] args) {
        
        try
        {
            File fol=new File("D:\\Java OOP File\\Folder");
            fol.mkdir();
            
            System.out.println("Path for folder : "+fol.getAbsolutePath());
            System.out.println("Folder Name : "+fol.getName());
            
            
            File file =new File(fol.getAbsolutePath()+"//File1.txt");
            file.createNewFile();
            System.out.println("\nFile path : "+file.getAbsolutePath());
            System.out.println("File Name : "+file.getName());
            //file.delete();
            if(file.exists())
            {
                System.out.println("file exist");
            }
            else
            {
                System.out.println("file not exist");
            }
            
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
