
package Assignment_3.Answer_1;

public class Student {
    private int id;
    private double score;
    Student(int a,double b)
    {
        id=a;
        score=b;
    }
    void show()
    {
        System.out.print("\n");
        System.out.println("Student ID : "+id);
        System.out.println("Score : "+score);
    }
}
