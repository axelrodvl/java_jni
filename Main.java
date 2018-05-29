public class Main {
    static {
        System.loadLibrary("Main");
    }

    public static native void hello();
    public static native int intMethod(int i);

    public static void main(String[] args) {
        Main.hello();
        System.out.println(Main.intMethod(2));
    }
}
