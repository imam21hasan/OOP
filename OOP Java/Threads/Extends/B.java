
package Threads.Extends;

import static java.lang.Thread.sleep;
import java.util.logging.Level;
import java.util.logging.Logger;

public class B extends Thread{
    public void run()
    {
        for(int i=0;i<6;i++)
        {
            try {
                sleep(500);
            } catch (InterruptedException ex) {
                Logger.getLogger(A.class.getName()).log(Level.SEVERE, null, ex);
            }
            System.out.println("EFGH");
        }
    }
}
