import java.util.concurrent.atomic.AtomicInteger;

public class LeetCode1114 {

    private AtomicInteger firstJobDone = new AtomicInteger(0);
    private AtomicInteger secondJobDone = new AtomicInteger(0);

    class Foo{
        public Foo(){

        }
    }


    public void first(Runnable printFirst) throws InterruptedException{
        printFirst.run();
        firstJobDone.incrementAndGet();
    }

    public void second(Runnable printSecond) throws InterruptedException{
        while (firstJobDone.get()!=1){

        }
        printSecond.run();
        secondJobDone.incrementAndGet();
    }

    public void third(Runnable printThird) throws InterruptedException{
        while (secondJobDone.get() != 1){

        }
        printThird.run();
    }
}
