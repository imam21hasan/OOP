
package Threads.Extends;

import java.util.logging.Level;
import java.util.logging.Logger;

public class A extends Thread{
    @Override
    public void run()
    {
        for(int i=0;i<6;i++)
        {
            try {
                sleep(500);
            } catch (InterruptedException ex) {
                Logger.getLogger(A.class.getName()).log(Level.SEVERE, null, ex);
            }
            /*catch(Exception e)
            {
                System.out.println(e);
            }*/
            System.out.println("ABCD");
        }
    }
}
