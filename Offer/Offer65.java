public class Offer65 {
    public static int add(int a, int b) {
      return (a & b)+(a | b);
    }

    public static void main(String[] args) {

        System.out.println(add(1,1));
    }
}
