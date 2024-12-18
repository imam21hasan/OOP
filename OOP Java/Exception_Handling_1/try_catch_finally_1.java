package Exception_Handling_1;

public class try_catch_finally_1 {

    public static void main(String[] args) {
        System.out.println("Nothing");
        try {
            int n = 10 / 0;
        } catch (Exception e) {
            System.out.println(e);
        } finally {
            System.out.println("Everything");
        }

        System.out.println("CSTU");
    }
}
