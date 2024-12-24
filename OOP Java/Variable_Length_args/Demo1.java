package Variable_Length_args;

public class Demo1 {

    void display(int... n) {
        int s=0;
        for (int x : n) {
            s += x;
        }
        System.out.println("Sum : " + s);
    }
    
    public static void main(String[] args) {
        Demo1 ob = new Demo1();
        ob.display(1, 2, 3);
        ob.display(44, 88);
        ob.display(1, 5, 6, 9);
    }
}

