package Threads;

public class Runnable_Demo2 {

    public static void main(String[] args) {

        Thread ob = new Thread(new Runnable() {
            public void run() {
                for (int i = 0; i < 5; i++) {
                    System.out.println("AYBZ");
                }
            }
        });
        ob.start();
    }
}
