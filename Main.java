public class Main {
    static {
        System.loadLibrary("Main");
    }

    public native void hello();
    public native int intMethod(int i);

    public static void main(String[] args) {
        Main main = new Main();
        main.hello();
        System.out.println(main.intMethod(2));
    }
}
