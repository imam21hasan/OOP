
public class CT_4 {

    private int data = 5;

    int getData() {
        return this.data;
    }

    int getData(int num) {
        return (data + 1);
    }

    int getData(int... num) {
        return (data + 2);
    }

    public static void main(String[] args) {
        CT_4 ob = new CT_4();
        System.out.println(ob.getData(6, 8, 12));
    }
}
